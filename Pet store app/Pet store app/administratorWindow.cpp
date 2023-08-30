#include "administratorWindow.h"

administratorWindow::administratorWindow(std::string user, Service* service, QWidget *parent)
    : QMainWindow(parent), service(service), user(user)
{
    ui.setupUi(this);

    setWindowTitle(QString::fromStdString(user));
}

void administratorWindow::update()
{
    if (this->ui.stackedWidget->currentIndex() == 1)
        this->populate_add();
    else if (this->ui.stackedWidget->currentIndex() == 2)
        this->populate_remove();
    else if (this->ui.stackedWidget->currentIndex() == 3)
        this->populate_update();
    else if (this->ui.stackedWidget->currentIndex() == 4)
    {
        std::string name = this->ui.nameShow->toPlainText().toStdString();
        this->pets = this->service->get_pet_list();
        int pos = this->service->find_pet(name);
        if (pos == -1)
        {
            if (this->pos_iteration == 0)
            {
                Pet pet = this->service->get_pet(0);

                this->ui.breedShow->clear();
                this->ui.ageShow->clear();
                this->ui.nameShow->clear();

                this->ui.breedShow->setText(QString::fromStdString(pet.get_breed()));
                this->ui.ageShow->setText(QString::fromStdString(std::to_string(pet.get_age())));
                this->ui.nameShow->setText(QString::fromStdString(pet.get_name()));
            }
            else
            {
                this->pos_iteration -= 1;
                Pet pet = this->service->get_pet(this->pos_iteration);
                
                this->ui.breedShow->clear();
                this->ui.ageShow->clear();
                this->ui.nameShow->clear();

                this->ui.breedShow->setText(QString::fromStdString(pet.get_breed()));
                this->ui.ageShow->setText(QString::fromStdString(std::to_string(pet.get_age())));
                this->ui.nameShow->setText(QString::fromStdString(pet.get_name()));
            }
        }
        else
        {
            Pet pet = this->service->get_pet(pos);
            this->pos_iteration = pos;

            this->ui.breedShow->clear();
            this->ui.ageShow->clear();

            this->ui.breedShow->setText(QString::fromStdString(pet.get_breed()));
            this->ui.ageShow->setText(QString::fromStdString(std::to_string(pet.get_age())));
        }
    }
    else
        return;
}

administratorWindow::~administratorWindow()
{}

void administratorWindow::add_pet_page()
{
    this->ui.stackedWidget->setCurrentIndex(1);
    this->populate_add();
}

void administratorWindow::remove_pet_page()
{
    this->ui.stackedWidget->setCurrentIndex(2);
    this->populate_remove();
}

void administratorWindow::update_pet_page()
{
    this->ui.stackedWidget->setCurrentIndex(3);
    this->populate_update();
}

void administratorWindow::show_pet_list_page()
{
    this->pets = this->service->get_pet_list();
    if (this->pets.size() == 0)
    {
        QMessageBox::critical(this, "Error", "There are currently not any pets in the store!");
        return;
    }
    this->ui.stackedWidget->setCurrentIndex(4);
    this->pos_iteration = 0;
    this->show_pet_list();
}

void administratorWindow::add_pet()
{
    std::string new_name = this->ui.nameLineEdit->text().toStdString();
    if (new_name == "")
    {
        QMessageBox::critical(this, "Error", "The name cannot be an empty string!");
        return;
    }
    std::string new_breed = this->ui.breedLineEdit->text().toStdString();
    if (new_breed == "")
    {
        QMessageBox::critical(this, "Error", "The breed cannot be an empty string!");
        return;
    }
    int age;
    try
    {
        age = stoi(this->ui.ageLineEdit->text().toStdString());
    }
    catch (std::exception& ex)
    {
        QMessageBox::critical(this, "Error", "The age must be an integer!");
        return;
    }
    std::string new_photograph = this->ui.photoLineEdit->text().toStdString();
    try
    {
        this->service->add_pet(new_breed, new_name, age, new_photograph);
    }
    catch (std::exception& ex)
    {
        QMessageBox::critical(this, "Error", "The name of the pets must be unique! There is already a pet with this name!");
        return;
    }
    this->populate_add();
}

void administratorWindow::remove_pet()
{
    if (!this->ui.petListRemove->currentItem())
        return;
    std::string removed_pet = this->ui.petListRemove->currentItem()->text().toStdString();
    std::string removed_name;
    std::stringstream stream(removed_pet);
    std::getline(stream, removed_name, ',');
    this->service->remove_pet(removed_name);
    this->populate_remove();
}

void administratorWindow::update_pet()
{
    if (!this->ui.petListUpdate->currentItem())
        return;
    std::string line = this->ui.petListUpdate->currentItem()->text().toStdString();
    std::stringstream stream(line);
    std::string name;
    std::getline(stream, name, ',');

    std::string new_breed = this->ui.newBreed->text().toStdString();
    if (new_breed == "")
    {
        QMessageBox::critical(this, "Error", "The breed cannot be an empty string!");
        return;
    }
    int new_age;
    try
    {
        new_age = std::stoi(this->ui.newAge->text().toStdString());
    }
    catch (std::exception& e)
    {
        QMessageBox::critical(this, "Error", "The age must be an integer!");
        return;
    }
    std::string new_photo = this->ui.newPhoto->text().toStdString();
    this->service->update_pet(new_breed, name, new_age, new_photo);

    this->populate_update();
}

void administratorWindow::show_pet_list()
{
    this->ui.nameShow->clear();
    this->ui.breedShow->clear();
    this->ui.ageShow->clear();

    Pet current_pet = this->pets[this->pos_iteration];
    this->ui.nameShow->setText(QString::fromStdString(current_pet.get_name()));
    this->ui.breedShow->setText(QString::fromStdString(current_pet.get_breed()));
    this->ui.ageShow->setText(QString::fromStdString(std::to_string(current_pet.get_age())));
}

void administratorWindow::populate_add()
{
    this->ui.petListAdd->clear();
    try
    {
        this->service->get_pet_list();
    }
    catch (std::exception& ex)
    {
        return;
    }
    for (auto p : this->service->get_pet_list())
    {
        this->ui.petListAdd->addItem(QString::fromStdString(p.get_name() + ", " + p.get_breed() + ", " + std::to_string(p.get_age()) + ", " + std::to_string(p.get_adoption())));
    }
}

void administratorWindow::populate_remove()
{
    this->ui.petListRemove->clear();
    if (this->service->get_pet_list().size() == 0)
        return;
    for (auto p : this->service->get_pet_list())
    {
        this->ui.petListRemove->addItem(QString::fromStdString(p.get_name() + ", " + p.get_breed() + ", " + std::to_string(p.get_age()) + ", " + std::to_string(p.get_adoption())));
    }
}

void administratorWindow::populate_update()
{
    this->ui.petListUpdate->clear();
    if (this->service->get_pet_list().size() == 0)
        return;
    for (auto p : this->service->get_pet_list())
    {
        this->ui.petListUpdate->addItem(QString::fromStdString(p.get_name() + ", " + p.get_breed() + ", " + std::to_string(p.get_age()) + ", " + std::to_string(p.get_adoption())));
    }
}

void administratorWindow::go_back()
{
    this->ui.stackedWidget->setCurrentIndex(0);
    this->pos_iteration = 0;
}

void administratorWindow::next_pet()
{
    if (this->pos_iteration >= this->pets.size() - 1)
    {
        QMessageBox::critical(this, "Error", "There are no other pets next to this one!");
        return;
    }
    this->pos_iteration += 1;
    this->ui.nameShow->clear();
    this->ui.breedShow->clear();
    this->ui.ageShow->clear();
    Pet current_pet = this->pets[this->pos_iteration];
    this->ui.nameShow->setText(QString::fromStdString(current_pet.get_name()));
    this->ui.breedShow->setText(QString::fromStdString(current_pet.get_breed()));
    this->ui.ageShow->setText(QString::fromStdString(std::to_string(current_pet.get_age())));
}

void administratorWindow::previous_pet()
{
    if (this->pos_iteration <= 0)
    {
        QMessageBox::critical(this, "Error", "There are no other pets before this one!");
        return;
    }
    this->pos_iteration -= 1;
    this->ui.nameShow->clear();
    this->ui.breedShow->clear();
    this->ui.ageShow->clear();
    Pet current_pet = this->pets[this->pos_iteration];
    this->ui.nameShow->setText(QString::fromStdString(current_pet.get_name()));
    this->ui.breedShow->setText(QString::fromStdString(current_pet.get_breed()));
    this->ui.ageShow->setText(QString::fromStdString(std::to_string(current_pet.get_age())));
}

void administratorWindow::close_window()
{
    emit close_w(this->user);
    std::string filename = this->ui.dataSave->text().toStdString();
    if (filename == "")
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
