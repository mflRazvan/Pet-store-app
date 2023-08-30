#pragma once
#include "Repository.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include <shellapi.h>

class FileRepository
{
private:
	std::string file = "file.txt";
	Repository* repo;

public:
	FileRepository() = default;
	FileRepository(std::string file, Repository* repo) : file(file), repo(repo) {}
	FileRepository(Repository* repo);

	void add_observer(Observer* obs) { this->repo->add_observer(obs); }
	void remove_observer(int pos) { this->repo->remove_observer(pos); }

	void add_item_repo(Pet new_item);
	void remove_item_repo(std::string name);
	void update_item_repo(Pet new_item);

	Pet get_repo_item(int position);
	void set_item_adoption(int position, Pet adopted_pet);
	void remove_adoption(Pet pet);
	void set_repo_item(int position, Pet new_item);
	int get_length();

	std::vector<std::string> split_for_read(std::string text);

	std::vector<Pet> get_repo() { return this->repo->get_repo(); }

	void read_from_file();
	void write_to_file();

	virtual void export_into_file(std::string file);
	virtual void displayPetList(std::string file_name);
};

