#pragma once
#include "FileRepositoryCSV.h"
#include "FileRepositoryHTML.h"
#include <iostream>
#include <exception>
#include <typeinfo>

class Service
{
private:
	FileRepository* pet_repo;
	std::string type;

public:
	Service() = default;
	Service(FileRepository* rpeo);

	void add_observer(Observer* obs) { this->pet_repo->add_observer(obs); }
	void remove_observer(int pos) { this->pet_repo->remove_observer(pos); }

	void add_pet(std::string breed, std::string name, int age, std::string photograph);
	void remove_pet(std::string name);
	void update_pet(std::string breed, std::string name, int age, std::string photograph);

	int find_pet(std::string name);
	int find_not_adopted(std::string name);
	int find_unique_pet(std::string breed, std::string name, int age, std::string photograph);

	void adopt_pet(Pet adopted_pet);
	void remove_adoption(std::string name);

	std::vector<Pet> get_pet_list();
	int get_pet_list_size();
	std::vector<Pet> get_not_adopted_list();

	Pet get_pet(int position);
	void set_pet(int position, Pet pet);

	std::string get_file_type() { return this->type; }

	void export_into_file(std::string file_name, std::string extension);

	std::vector<Pet> get_specific_breed(std::string breed, int age);
	std::vector<Pet> get_not_adopted_breed(std::string breed, int age);

	std::vector<Pet> get_adopted();
};
