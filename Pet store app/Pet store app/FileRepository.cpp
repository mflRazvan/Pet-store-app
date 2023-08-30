#include "FileRepository.h"

FileRepository::FileRepository(Repository* repo) : repo(repo)
{
	this->read_from_file();
}

void FileRepository::add_item_repo(Pet new_item)
{
	this->repo->add_item_repo(new_item);
	std::ofstream fout(this->file, std::ios_base::app);
	fout << new_item;
	fout.close();
	this->repo->notify();
}

void FileRepository::remove_item_repo(std::string name)
{
	this->repo->remove_item_repo(name);
	this->write_to_file();
	this->repo->notify();
}

void FileRepository::update_item_repo(Pet new_item)
{
	this->repo->update_item_repo(new_item);
	this->write_to_file();
	this->repo->notify();
}

Pet FileRepository::get_repo_item(int position)
{
	return this->repo->get_repo_item(position);
}

void FileRepository::set_item_adoption(int position, Pet adopted_pet)
{
	this->repo->set_item_adoption(position, adopted_pet);
	this->write_to_file();
	this->repo->notify();
}

void FileRepository::remove_adoption(Pet pet)
{
	this->repo->remove_adoption(pet);
	this->write_to_file();
	this->repo->notify();
}

void FileRepository::set_repo_item(int position, Pet new_item)
{
	this->repo->set_repo_item(position, new_item);
	this->write_to_file();
	this->repo->notify();
}

int FileRepository::get_length()
{
	return this->repo->get_length();
}

std::vector<std::string> FileRepository::split_for_read(std::string text)
{
	std::istringstream stream(text);
	std::string current_word;
	std::vector<std::string> vector_words;

	while (getline(stream, current_word, ','))
	{
		vector_words.push_back(current_word);
	}
	return vector_words;
}

void FileRepository::read_from_file()
{
	std::ifstream fin(this->file);
	std::string line;
	std::vector<std::string> current_line_words;
	while (getline(fin, line, '\n'))
	{
		current_line_words = this->split_for_read(line);
		Pet new_pet(current_line_words[0], current_line_words[1], stoi(current_line_words[2]), current_line_words[3], (bool)stoi(current_line_words[4]));
		this->repo->add_item_repo(new_pet);
	}
	fin.close();
}

void FileRepository::write_to_file()
{
	std::ofstream fout(this->file);
	for(auto p : this->repo->get_repo())
	{
		fout << p;
	}
	fout.close();
}

void FileRepository::export_into_file(std::string file)
{
}

void FileRepository::displayPetList(std::string file_name)
{
}
