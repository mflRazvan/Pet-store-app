#include "Pet_store_app.h"

Pet_store_app::Pet_store_app(Repository* repo, Repo_accounts* acc_repo, QWidget *parent)
	: QMainWindow(parent), repo(repo), accounts(acc_repo)
{
	ui.setupUi(this);

	setWindowTitle("Animal shelter");
	this->current_password = "";
}

void Pet_store_app::close_user_window(std::string user_mail)
{
	this->connected.erase(std::find(this->connected.begin(), this->connected.end(), user_mail));
}

Pet_store_app::~Pet_store_app()
{}

void Pet_store_app::close_application()
{ 
	QMessageBox::information(this, "Close application", "Thank you for using our app!");
	this->accounts->write_accounts_file();
	this->close();
}

void Pet_store_app::log_in_page()
{
	this->ui.emailAddressLog->clear();
	this->ui.passwordLog->clear();
	this->ui.stackedWidget->setCurrentIndex(1);
	this->ui.comboBoxLogin->addItem(QString::fromStdString("CSV"));
	this->ui.comboBoxLogin->addItem(QString::fromStdString("HTML"));
}

void Pet_store_app::sign_in_page()
{
	this->ui.emailAddressSign->clear();
	this->ui.passwordSign->clear();
	this->ui.stackedWidget->setCurrentIndex(2);
	this->ui.comboBoxSignin->addItem(QString::fromStdString("CSV"));
	this->ui.comboBoxSignin->addItem(QString::fromStdString("HTML"));
	this->ui.userType->addItem("User");
	this->ui.userType->addItem("Administrator");
}

void Pet_store_app::log_in()
{
	std::string mail = this->ui.emailAddressLog->text().toStdString();
	std::string password = this->current_password;
	if (std::find(this->connected.begin(), this->connected.end(), password) != this->connected.end() && this->connected.size() != 1)
	{
		QMessageBox::critical(this, "Error", "The account you want to use is already in use!");
		return;
	}
	else if (this->connected.size() == 1)
	{
		if (this->connected[0] == mail)
		{
			QMessageBox::critical(this, "Error", "The account you want to use is already in use!");
			return;
		}
	}

	try
	{
		Account* acc = this->accounts->get_account(mail);
		if (acc->get_password() != password)
		{
			QMessageBox::critical(this, "Error", "The password is invalid!");
			return;
		}
		if (acc->get_type() == "administrator")
		{
			Service* new_service;
			if (this->ui.comboBoxLogin->currentIndex() == 0)
			{
				FileRepository* new_repo = new FileRepositoryCSV("file.txt", this->repo);
				new_service = new Service(new_repo);
			}
			else
			{
				FileRepository* new_repo = new FileRepositoryHTML("file.txt", this->repo);
				new_service = new Service(new_repo);
			}
			administratorWindow* new_window = new administratorWindow(mail, new_service);
			this->repo->add_observer(new_window);
			new_window->show();
			connect(new_window, &administratorWindow::close_w, this, &Pet_store_app::close_user_window);
		}
		else if (acc->get_type() == "user")
		{
			Service* new_service;
			if (this->ui.comboBoxLogin->currentIndex() == 0)
			{
				FileRepository* new_repo = new FileRepositoryCSV("file.txt", this->repo);
				new_service = new Service(new_repo);
			}
			else
			{
				FileRepository* new_repo = new FileRepositoryHTML("file.txt", this->repo);
				new_service = new Service(new_repo);
			}

			userWindow* new_window = new userWindow(acc, new_service);
			this->repo->add_observer(new_window);
			new_window->show();
			connect(new_window, &userWindow::close_w, this, &Pet_store_app::close_user_window);
		}
		this->connected.push_back(mail);
	}
	catch(std::exception& ex)
	{
		QMessageBox::critical(this, "Error", "The mail you introduced is not a valid one!");
		return;
	}
	this->current_password = "";
	this->ui.stackedWidget->setCurrentIndex(0);
}

void Pet_store_app::sign_in()
{
	std::string mail = this->ui.emailAddressSign->text().toStdString();
	std::string password = this->current_password;
	try
	{
		this->accounts->get_account(mail);
		QMessageBox::critical(this, "Error", "The mail you introduces is already used!");
		return;
	}
	catch (std::exception& ex){ }

	std::string user_type;
	if (this->ui.userType->currentIndex() == 0)
	{
		user_type = "user";
	}
	else
	{
		user_type = "administrator";
	}
	Account* new_acc = new Account(mail, password, user_type);
	this->accounts->add_account(new_acc);
	if (user_type == "user")
	{
		Service* new_service;
		if (this->ui.comboBoxSignin->currentIndex() == 0)
		{
			FileRepository* new_repo = new FileRepositoryCSV("file.txt", this->repo);
			new_service = new Service(new_repo);
		}
		else
		{
			FileRepository* new_repo = new FileRepositoryHTML("file.txt", this->repo);
			new_service = new Service(new_repo);
		}

		userWindow* new_window = new userWindow(new_acc, new_service);
		this->repo->add_observer(new_window);
		new_window->show();
		connect(new_window, &userWindow::close_w, this, &Pet_store_app::close_user_window);
	}
	else
	{
		Service* new_service;
		if (this->ui.comboBoxSignin->currentIndex() == 0)
		{
			FileRepository* new_repo = new FileRepositoryCSV("file.txt", this->repo);
			new_service = new Service(new_repo);
		}
		else
		{
			FileRepository* new_repo = new FileRepositoryHTML("file.txt", this->repo);
			new_service = new Service(new_repo);
		}
		administratorWindow* new_window = new administratorWindow(mail, new_service);
		this->repo->add_observer(new_window);
		new_window->show();
		connect(new_window, &administratorWindow::close_w, this, &Pet_store_app::close_user_window);
	}
	this->connected.push_back(mail);
	this->current_password = "";
	this->ui.stackedWidget->setCurrentIndex(0);
}

void Pet_store_app::back()
{
	this->ui.stackedWidget->setCurrentIndex(0);
	this->current_password = "";
}

void Pet_store_app::to_star()
{
	int cursor_pos = this->ui.passwordLog->cursorPosition();
	if (this->ui.showPassword->isChecked())
	{
		this->current_password = this->ui.passwordLog->text().toStdString();
		return;
	}
	if (this->ui.passwordLog->text().toStdString().size() > this->current_password.size())
	{
		std::string password = this->ui.passwordLog->text().toStdString();
	
		int changed_pos = -1;
		for (int i = 0; i < password.size(); i++)
		{
			if (password[i] != '*')
			{
				changed_pos = i;
				break;
			}
		}

		std::string shown_password = "";
		shown_password.append(this->current_password.size() + 1, '*');
		
		if (changed_pos == 0)
		{
			this->current_password = password[0] + this->current_password;
		}
		else if (changed_pos == password.size() - 1)
		{
			this->current_password.append(1, password[changed_pos]);
		}
		else
		{
			this->current_password = this->current_password.substr(0, changed_pos) + password[changed_pos] + this->current_password.substr(changed_pos, this->current_password.size() - changed_pos);
		}
		this->ui.passwordLog->setText(QString::fromStdString(shown_password));
	}
	else
	{
		std::string shown_password = "";
		this->current_password = this->current_password.substr(0, cursor_pos) + this->current_password.substr(cursor_pos + 1, this->current_password.size() - cursor_pos);
	}
	this->ui.passwordLog->setCursorPosition(cursor_pos);
}

void Pet_store_app::show_password()
{
	if (this->ui.showPassword->isChecked())
	{
		this->ui.passwordLog->setText(QString::fromStdString(this->current_password));
	}
	else
	{
		std::string password = "";
		password.append(this->current_password.size(), '*');
		this->ui.passwordLog->setText(QString::fromStdString(password));
	}
}

void Pet_store_app::to_star_sign()
{
	int cursor_pos = this->ui.passwordSign->cursorPosition();
	if (this->ui.showPassword_2->isChecked())
	{
		this->current_password = this->ui.passwordSign->text().toStdString();
		return;
	}
	if (this->ui.passwordSign->text().toStdString().size() > this->current_password.size())
	{
		std::string password = this->ui.passwordSign->text().toStdString();

		int changed_pos = -1;
		for (int i = 0; i < password.size(); i++)
		{
			if (password[i] != '*')
			{
				changed_pos = i;
				break;
			}
		}

		std::string shown_password = "";
		shown_password.append(this->current_password.size() + 1, '*');

		if (changed_pos == 0)
		{
			this->current_password = password[0] + this->current_password;
		}
		else if (changed_pos == password.size() - 1)
		{
			this->current_password.append(1, password[changed_pos]);
		}
		else
		{
			this->current_password = this->current_password.substr(0, changed_pos) + password[changed_pos] + this->current_password.substr(changed_pos, this->current_password.size() - changed_pos);
		}
		this->ui.passwordSign->setText(QString::fromStdString(shown_password));
	}
	else
	{
		std::string shown_password = "";
		this->current_password = this->current_password.substr(0, cursor_pos) + this->current_password.substr(cursor_pos + 1, this->current_password.size() - cursor_pos);
	}
	this->ui.passwordSign->setCursorPosition(cursor_pos);
}

void Pet_store_app::show_password_sign()
{
	if (this->ui.showPassword_2->isChecked())
	{
		this->ui.passwordSign->setText(QString::fromStdString(this->current_password));
	}
	else
	{
		std::string password = "";
		password.append(this->current_password.size(), '*');
		this->ui.passwordSign->setText(QString::fromStdString(password));
	}
}