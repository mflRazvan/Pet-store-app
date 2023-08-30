#pragma once

#include <QMainWindow>
#include <qmessagebox.h>
#include "ui_userWindow.h"
#include "Service.h"
#include "Observer.h"
#include "Account.h"

class userWindow : public QMainWindow, public Observer
{
	Q_OBJECT

public:
	userWindow(Account* acc, Service* service, QWidget* parent = nullptr);

	void adopt_from_all();
	void adopt_from_searched();

	void update() override;

	~userWindow();

public slots:
	void back();
	void show_pet_list_page();
	void show_specific_breed_page();
	void show_adoption_list_page();

	void previous_pet();
	void next_pet();
	void next_specific_breed();
	void previous_specific_breed();

	void search_breed();

	void adopt_current();
	void remove_selected_adoption();

	void close_window();

signals:
	void close_w(std::string user_mail);

private:
	Ui::userWindowClass ui;
	Service* service;
	int pos_iteration;
	std::vector<Pet> pets;
	Account* acc;
	int last_searched_age = -1;

	void populate_adoption_list();
};
