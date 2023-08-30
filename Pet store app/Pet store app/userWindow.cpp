#include "userWindow.h"

userWindow::userWindow(Account* acc, Service* service, QWidget *parent)
	: QMainWindow(parent), service(service), acc(acc)
{
	ui.setupUi(this);

	setWindowTitle(QString::fromStdString(acc->get_mail()));
}

void userWindow::adopt_from_all()
{
	std::string name = this->ui.nameShow->toPlainText().toStdString();
	std::string breed = this->ui.breedShow->toPlainText().toStdString();
	std::string photo = this->ui.photoShow->toPlainText().toStdString();
	int age = std::stoi(this->ui.ageShow->toPlainText().toStdString());
	Pet pet(breed, name, age, photo, 0);

	this->service->adopt_pet(pet);
	this->acc->adopt_pet(name);

	this->ui.nameShow->clear();
	this->ui.breedShow->clear();
	this->ui.photoShow->clear();
	this->ui.ageShow->clear();

	if (this->pets.size() == 0)
	{
		this->pos_iteration -= 1;
		this->ui.stackedWidget->setCurrentIndex(0);
	}
	else if (this->pos_iteration == this->pets.size())
	{
		this->pos_iteration -= 1;
		
		Pet pet = this->pets[this->pos_iteration];

		this->ui.nameShow->setText(QString::fromStdString(pet.get_name()));
		this->ui.breedShow->setText(QString::fromStdString(pet.get_breed()));
		this->ui.photoShow->setText(QString::fromStdString(pet.get_photograph()));
		this->ui.ageShow->setText(QString::fromStdString(std::to_string(pet.get_age())));
	}
	else
	{
		Pet pet = this->pets[this->pos_iteration];

		this->ui.nameShow->setText(QString::fromStdString(pet.get_name()));
		this->ui.breedShow->setText(QString::fromStdString(pet.get_breed()));
		this->ui.photoShow->setText(QString::fromStdString(pet.get_photograph()));
		this->ui.ageShow->setText(QString::fromStdString(std::to_string(pet.get_age())));
	}

}

void userWindow::adopt_from_searched()
{
	std::string name = this->ui.nameShow_2->toPlainText().toStdString();
	std::vector<Pet> pets = this->service->get_pet_list();
	this->acc->adopt_pet(name);

	Pet adopted_pet;
	for (auto p : pets)
	{
		if (p.get_name() == name)
		{
			adopted_pet = p;
			break;
		}
	}
	this->service->adopt_pet(adopted_pet);

	this->ui.nameShow_2->clear();
	this->ui.photoShow_2->clear();
	this->ui.ageShow_2->clear();

	if (this->pets.size() == 0)
	{
		this->pos_iteration -= 1;
		QMessageBox::information(this, "No more pets", "There are no more pets with this breed!");
	}
	else if (this->pos_iteration == this->pets.size())
	{
		this->pos_iteration -= 1;

		Pet pet = this->pets[this->pos_iteration];

		this->ui.nameShow_2->setText(QString::fromStdString(pet.get_name()));
		this->ui.photoShow_2->setText(QString::fromStdString(pet.get_photograph()));
		this->ui.ageShow_2->setText(QString::fromStdString(std::to_string(pet.get_age())));
	}
	else
	{
		Pet pet = this->pets[this->pos_iteration];

		this->ui.nameShow_2->setText(QString::fromStdString(pet.get_name()));
		this->ui.photoShow_2->setText(QString::fromStdString(pet.get_photograph()));
		this->ui.ageShow_2->setText(QString::fromStdString(std::to_string(pet.get_age())));
	}
}

void userWindow::update()
{

	if (this->ui.stackedWidget->currentIndex() == 1)
	{
		std::string name = this->ui.nameShow->toPlainText().toStdString();
		std::vector<Pet> not_adopted = this->service->get_not_adopted_list();
		this->pets = not_adopted;
		std::vector<std::string> names;
		for (auto p : not_adopted)
		{
			names.push_back(p.get_name());
		}
		if ((std::find(names.begin(), names.end(), name) == names.end() && names.size() != 1) || (names.size() == 1 && names[0] != name))
		{
			this->ui.nameShow->clear();
			this->ui.ageShow->clear();
			this->ui.breedShow->clear();
			this->ui.photoShow->clear();
			if (this->pos_iteration == this->pets.size())
			{
				this->pos_iteration -= 1;
			}
			this->ui.nameShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_name()));
			this->ui.ageShow->setText(QString::fromStdString(std::to_string(this->pets[this->pos_iteration].get_age())));
			this->ui.breedShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_breed()));
			this->ui.photoShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_photograph()));
		}
		else
		{
			for (int i = 0; i < this->pets.size(); i++)
			{
				if (this->pets[i].get_name() == name)
				{
					this->pos_iteration = i;
					break;
				}
			}
		}
	}
	else if (this->ui.stackedWidget->currentIndex() == 2)
	{
		std::string name = this->ui.nameShow_2->toPlainText().toStdString();
		Pet pet = this->service->get_pet(this->service->find_pet(name));
		std::vector<Pet> not_adopted = this->service->get_not_adopted_breed(pet.get_breed(), this->last_searched_age);
		this->pets = not_adopted;
		std::vector<std::string> names;
		for (auto p : not_adopted)
		{
			names.push_back(p.get_name());
		}
		if ((std::find(names.begin(), names.end(), name) == names.end() && names.size() != 1) || (names.size() == 1 && names[0] != name))
		{
			this->ui.nameShow_2->clear();
			this->ui.ageShow_2->clear();
			this->ui.photoShow_2->clear();
			if (this->pos_iteration == this->pets.size())
			{
				this->pos_iteration -= 1;
			}
			this->ui.nameShow_2->setText(QString::fromStdString(this->pets[this->pos_iteration].get_name()));
			this->ui.ageShow_2->setText(QString::fromStdString(std::to_string(this->pets[this->pos_iteration].get_age())));
			this->ui.photoShow_2->setText(QString::fromStdString(this->pets[this->pos_iteration].get_photograph()));
		}
		else
		{
			for (int i = 0; i < this->pets.size(); i++)
			{
				if (this->pets[i].get_name() == name)
				{
					this->pos_iteration = i;
					break;
				}
			}
		}
	}
	else if (this->ui.stackedWidget->currentIndex() == 3)
	{
		this->populate_adoption_list();
	}
}

void userWindow::close_window()
{
	emit close_w(this->acc->get_mail());
	std::string filename = this->ui.dataSave->text().toStdString();
	if(filename == "")
		this->close();
	else
	{
		for (auto c : filename)
		{
			if (c != '-' && c != '_' && c != '/' && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
			{
				QMessageBox::critical(this, "Error", "The filename you introduced is invalid!\nTake in consideration that it is not mandatory to introduce a filename!");
				return;
			}
		}
		this->service->export_into_file(filename, this->service->get_file_type());
		this->close();
	}

}

userWindow::~userWindow()
{}

void userWindow::show_pet_list_page()
{
	this->pos_iteration = 0;
	try
	{
		this->pets = this->service->get_not_adopted_list();
	}
	catch (std::exception& ex)
	{
		QMessageBox::critical(this, "Error", "There are no more pets that can be adopted!");
		return;
	}
	if (this->pets.size() == 0)
	{
		QMessageBox::critical(this, "Error", "We do not have any pets at the moment!");
		return;
	}
	this->ui.stackedWidget->setCurrentIndex(1);

	this->ui.nameShow->clear();
	this->ui.ageShow->clear();
	this->ui.breedShow->clear();
	this->ui.photoShow->clear();

	Pet pet = this->pets[0];
	this->ui.nameShow->setText(QString::fromStdString(pet.get_name()));
	this->ui.ageShow->setText(QString::fromStdString(std::to_string(pet.get_age())));
	this->ui.breedShow->setText(QString::fromStdString(pet.get_breed()));
	this->ui.photoShow->setText(QString::fromStdString(pet.get_photograph()));

	std::string fullCommand = (std::string)"start " + pet.get_photograph();
	system(fullCommand.c_str());
}

void userWindow::show_specific_breed_page()
{
	if (this->service->get_pet_list().size() == 0)
	{
		QMessageBox::critical(this, "Error", "We do not have any pets at the moment!");
		return;
	}
	this->ui.stackedWidget->setCurrentIndex(2);
	this->pos_iteration = 0;
}

void userWindow::show_adoption_list_page()
{
	this->ui.stackedWidget->setCurrentIndex(3);
	this->populate_adoption_list();
}

void userWindow::previous_pet()
{
	if (this->pets.size() == 0)
	{
		QMessageBox::critical(this, "Error", "We do not have any pet at the moment!");
		return;
	}
	if (this->pos_iteration <= 0)
	{
		QMessageBox::critical(this, "Error", "There are no other pets with this breed!");
		return;
	}

	this->pos_iteration -= 1;
	this->ui.nameShow->clear();
	this->ui.ageShow->clear();
	this->ui.photoShow->clear();
	this->ui.breedShow->clear();
	this->ui.breedShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_breed()));
	this->ui.nameShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_name()));
	this->ui.ageShow->setText(QString::fromStdString(std::to_string(this->pets[this->pos_iteration].get_age())));
	this->ui.photoShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_photograph()));

	std::string fullCommand = (std::string)"start " + this->pets[this->pos_iteration].get_photograph();
	system(fullCommand.c_str());
}

void userWindow::next_pet()
{
	if (this->pets.size() == 0)
	{
		QMessageBox::critical(this, "Error", "We do not have any pet at the moment!");
		return;
	}
	if (this->pos_iteration >= this->pets.size() - 1)
	{
		QMessageBox::critical(this, "Error", "There are no other pets with this breed!");
		return;
	}

	this->pos_iteration += 1;
	this->ui.nameShow->clear();
	this->ui.ageShow->clear();
	this->ui.photoShow->clear();
	this->ui.breedShow->clear();
	this->ui.breedShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_breed()));
	this->ui.nameShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_name()));
	this->ui.ageShow->setText(QString::fromStdString(std::to_string(this->pets[this->pos_iteration].get_age())));
	this->ui.photoShow->setText(QString::fromStdString(this->pets[this->pos_iteration].get_photograph()));

	std::string fullCommand = (std::string)"start " + this->pets[this->pos_iteration].get_photograph();
	system(fullCommand.c_str());
}

void userWindow::previous_specific_breed()
{
	if (this->pets.size() == 0)
	{
		QMessageBox::critical(this, "Error", "You have to search for a valid breed first!");
		return;
	}
	if (this->pos_iteration <= 0)
	{
		QMessageBox::critical(this, "Error", "There are no other pets with this breed!");
		return;
	}
	this->pos_iteration -= 1;
	this->ui.nameShow_2->clear();
	this->ui.ageShow_2->clear();
	this->ui.photoShow_2->clear();
	this->ui.nameShow_2->setText(QString::fromStdString(this->pets[this->pos_iteration].get_name()));
	this->ui.ageShow_2->setText(QString::fromStdString(std::to_string(this->pets[this->pos_iteration].get_age())));
	this->ui.photoShow_2->setText(QString::fromStdString(this->pets[this->pos_iteration].get_photograph()));

	std::string fullCommand = (std::string)"start " + this->pets[this->pos_iteration].get_photograph();
	system(fullCommand.c_str());
}

void userWindow::next_specific_breed()
{
	if(this->pets.size() == 0)
	{
		QMessageBox::critical(this, "Error", "You have to search for a valid breed first!");
		return;
	}
	if (this->pos_iteration >= this->pets.size() - 1)
	{
		QMessageBox::critical(this, "Error", "There are no other pets with this breed!");
		return;
	}
	this->pos_iteration += 1;
	this->ui.nameShow_2->clear();
	this->ui.ageShow_2->clear();
	this->ui.photoShow_2->clear();
	this->ui.nameShow_2->setText(QString::fromStdString(this->pets[this->pos_iteration].get_name()));
	this->ui.ageShow_2->setText(QString::fromStdString(std::to_string(this->pets[this->pos_iteration].get_age())));
	this->ui.photoShow_2->setText(QString::fromStdString(this->pets[this->pos_iteration].get_photograph()));

	std::string fullCommand = (std::string)"start " + this->pets[this->pos_iteration].get_photograph();
	system(fullCommand.c_str());
}

void userWindow::search_breed()
{
	std::string searched_breed = this->ui.searchedBreed->text().toStdString();
	std::string age = this->ui.searchedAge->text().toStdString();
	
	if (searched_breed == "")
	{
		QMessageBox::critical(this, "Error", "The breed must be a valid string!");
		this->ui.searchButton->actions().empty();
		return;
	}
	int searched_age;
	if (age == "")
		searched_age = -1;
	else
		searched_age = std::stoi(age);
	this->last_searched_age = searched_age;
	try
	{
		this->pets = this->service->get_not_adopted_breed(searched_breed, searched_age);
		this->ui.ageShow_2->clear();
		this->ui.nameShow_2->clear();
		this->ui.photoShow_2->clear();
		this->ui.ageShow_2->setText(QString::fromStdString(std::to_string(this->pets[0].get_age())));
		this->ui.nameShow_2->setText(QString::fromStdString(this->pets[0].get_name()));
		this->ui.photoShow_2->setText(QString::fromStdString(this->pets[0].get_photograph()));
		
		std::string fullCommand = (std::string)"start " + this->pets[0].get_photograph();
		system(fullCommand.c_str());
	}
	catch (std::exception& ex) 
	{
		QMessageBox::critical(this, "Error", "There are no pets with the wanted specifications!");
	}
}

void userWindow::adopt_current()
{
	if (this->ui.stackedWidget->currentIndex() == 1)
	{
		this->adopt_from_all();
	}
	else
	{
		this->adopt_from_searched();
	}
}

void userWindow::remove_selected_adoption()
{
	std::string text = this->ui.adoptionShow->currentItem()->text().toStdString();
	std::stringstream stream(text);
	std::string name;
	std::getline(stream, name, ',');
	this->service->remove_adoption(name);
	this->populate_adoption_list();
}

void userWindow::populate_adoption_list()
{
	this->ui.adoptionShow->clear();
	try
	{
		std::vector<std::string> pets = this->acc->get_adopted();
		std::vector<Pet> adopted_pets;
		for (auto p : pets)
		{
			adopted_pets.push_back(this->service->get_pet(this->service->find_pet(p)));
		}
		for (auto p : adopted_pets)
		{
			this->ui.adoptionShow->addItem(QString::fromStdString(p.get_name() + "," + p.get_breed() + "," + std::to_string(p.get_age())));
		}
	}
	catch (std::exception& ex) {}
}

void userWindow::back()
{
	this->ui.stackedWidget->setCurrentIndex(0);
}
