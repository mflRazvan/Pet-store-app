#include "Service.h"

using namespace std;

Service::Service(FileRepository* repo)
{
    this->pet_repo = repo;
    if (typeid(*repo) == typeid(FileRepositoryCSV))
        this->type = "csv";
    else
        this->type = "html";
}

void Service::add_pet(string breed, string name, int age, string photograph)
{
    Pet new_pet(breed, name, age, photograph, 0);
    this->pet_repo->add_item_repo(new_pet);
}

void Service::remove_pet(string name)
{
    this->pet_repo->remove_item_repo(name);
}

void Service::update_pet(string breed, string name, int age, string photograph)
{
    Pet new_pet(breed, name, age, photograph, 0);
    this->pet_repo->update_item_repo(new_pet);
}

int Service::find_pet(string name)
{
    int length_pet_list = this->pet_repo->get_length(), i;
    for (i = 0; i < length_pet_list; i++)
        if (this->pet_repo->get_repo_item(i).get_name() == name)
            return i;
    return -1;
}

int Service::find_not_adopted(string name)
{
    std::vector<Pet> pets = this->get_not_adopted_list();
    for (int i = 0; i < pets.size(); i++)
    {
        if (pets[i].get_name() == name)
            return i;
    }
    return -1;
}

int Service::find_unique_pet(string breed, string name, int age, string photograph)
{
    int length_pet_list = this->pet_repo->get_length();
    Pet compared_pet(breed, name, age, photograph, 0);
    for (int i = 0; i < length_pet_list; i++)
    {
        if (this->pet_repo->get_repo_item(i) == compared_pet)
            return 1;
    }
    return 0;
}

void Service::adopt_pet(Pet adopted_pet)
{
    int pos = -1;
    std::vector<Pet> pets = this->pet_repo->get_repo();
    for (int i = 0; i < pets.size(); i ++)
    {
        if (pets[i].get_name() == adopted_pet.get_name())
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        return;
    this->pet_repo->set_item_adoption(pos, adopted_pet);
}

void Service::remove_adoption(std::string name)
{
    std::vector<Pet> pets = this->pet_repo->get_repo();
    for (int i = 0; i < pets.size(); i++)
    {
        if (pets[i].get_name() == name)
        {
            this->pet_repo->remove_adoption(pets[i]);
        }
    }
}

vector<Pet> Service::get_pet_list()
{
    return this->pet_repo->get_repo();
}

int Service::get_pet_list_size()
{
    return this->pet_repo->get_length();
}

std::vector<Pet> Service::get_not_adopted_list()
{
    std::vector<Pet> pets = this->pet_repo->get_repo();
    std::vector<Pet> not_adopted;
    for (auto p : pets)
    {
        if (p.get_adoption() == 0)
            not_adopted.push_back(p);
    }
    if (not_adopted.size() == 0)
        throw std::exception();
    return not_adopted;
}

Pet Service::get_pet(int position)
{
    return this->pet_repo->get_repo_item(position);
}

void Service::set_pet(int position, Pet pet)
{
    this->pet_repo->set_repo_item(position, pet);
}

void Service::export_into_file(std::string file_name, std::string extension)
{
    this->pet_repo->export_into_file(file_name + "." + extension);
}

std::vector<Pet> Service::get_specific_breed(std::string breed, int age)
{
    std::vector<Pet> pets;
    if (age == -1)
    {
        for (auto p : this->pet_repo->get_repo())
        {
            if (p.get_breed() == breed)
            {
                pets.push_back(p);
            }
        }
    }
    else
    {
        for (auto p : this->pet_repo->get_repo())
        {
            if (p.get_breed() == breed && p.get_age() < age)
            {
                pets.push_back(p);
            }
        }
    }
    if (pets.size() == 0)
        throw std::exception();
    return pets;
}

std::vector<Pet> Service::get_adopted()
{
    std::vector<Pet> adopted;
    for (auto p : this->pet_repo->get_repo())
    {
        if (p.get_adoption() == 1)
            adopted.push_back(p);
    }
    if (adopted.size() == 0)
        throw std::exception();
    return adopted;
}

std::vector<Pet> Service::get_not_adopted_breed(std::string breed, int age)
{
    std::vector<Pet> pets = this->get_specific_breed(breed, age);
    std::vector<Pet> not_adopted;
    for (auto p : pets)
    {
        if (p.get_adoption() == 0)
            not_adopted.push_back(p);
    }
    if (not_adopted.size() == 0)
        throw std::exception();
    return not_adopted;
}
