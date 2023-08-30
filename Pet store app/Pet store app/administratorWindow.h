#pragma once

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include "ui_administratorWindow.h"
#include "Service.h"
#include "Observer.h"

class administratorWindow : public QMainWindow, public Observer
{
    Q_OBJECT

public:
    administratorWindow(std::string user, Service* service, QWidget *parent = nullptr);

    void update() override;

    ~administratorWindow();

public slots:
    void add_pet_page();
    void remove_pet_page();
    void update_pet_page();
    void show_pet_list_page();
    void add_pet();
    void remove_pet();
    void update_pet();
    void show_pet_list();
    void go_back();
    void next_pet();
    void previous_pet();
    void close_window();

private:
    Ui::administratorWindowClass ui;
    Service* service;
    int pos_iteration;
    std::vector<Pet> pets;
    std::string user;

    void populate_add();
    void populate_remove();
    void populate_update();


signals:
    void close_w(std::string user_mail);
};
