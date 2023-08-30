#pragma once

#include <QMainWindow>
#include <qmessagebox.h>
#include "ui_Pet_store_app.h"
#include "administratorWindow.h"
#include "userWindow.h"
#include "Repo_accounts.h"

class Pet_store_app : public QMainWindow
{
	Q_OBJECT

public:
	Pet_store_app(Repository* repo, Repo_accounts* acc_repo, QWidget *parent = nullptr);
	~Pet_store_app();

public slots:
	void close_user_window(std::string user_mail);
	void close_application();
	void log_in_page();
	void sign_in_page();
	void log_in();
	void sign_in();
	void back();
	void to_star();
	void show_password();
	void to_star_sign();
	void show_password_sign();

private:
	Ui::Pet_store_appClass ui;
	Repository* repo;
	Repo_accounts* accounts;
	std::vector<std::string> connected;
	std::string current_password;

};
