#pragma once
#include "Pet.h"
#include <vector>
#include "Exceptions.h"
#include "Subject.h"

class Repository : public Subject
{
private:
	std::vector<Pet> repo;

public:
	Repository() = default;

	virtual void add_item_repo(Pet new_item);
	virtual void remove_item_repo(std::string name);
	virtual void update_item_repo(Pet new_item);
	int find_pet(std::string name);

	Pet get_repo_item(int position);
	virtual void set_item_adoption(int position, Pet adopted_pet);
	virtual void set_repo_item(int position, Pet new_item);
	int get_length();

	std::vector<Pet> get_repo() { return this->repo; }

	virtual void remove_adoption(Pet pet);
};
