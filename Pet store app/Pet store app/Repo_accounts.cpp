#include "Repo_accounts.h"
#include <fstream>

void Repo_accounts::read_accouts_file()
{
	std::ifstream read("users.txt");
	std::string line;
	while (std::getline(read, line, '\n'))
	{
		std::stringstream stream(line);
		std::vector<std::string> words;
		std::string word;
		while (getline(stream, word, ';'))
		{
			words.push_back(word);
		}
		std::vector<std::string> pets;
		Account* acc = new Account(words[0], words[1], words[2]);
		if (words.size() == 4)
		{
			std::stringstream stream1(words[3]);
			while (getline(stream1, word, ','))
			{
				pets.push_back(word);
			}
			acc->set_adopted(pets);
		}
		this->accounts.push_back(acc);
	}
	read.close();
}

void Repo_accounts::write_accounts_file()
{
	std::ofstream output("users.txt");
	output.clear();
	for (auto a : this->accounts)
	{
		std::vector<std::string> pets = a->get_adopted();
		output << a->get_mail() << ';' << a->get_password() << ';' << a->get_type() << ';';
		if (pets.size() > 0)
		{
			for (int i = 0; i < pets.size() - 1; i++)
			{
				output << pets[i] << ',';
			}
			output << pets[pets.size() - 1];
		}
		output << '\n';
	}
	output.close();
}

void Repo_accounts::remove_account(Account* acc)
{
	for (int i = 0; i < this->accounts.size(); i ++)
	{
		if (this->accounts[i]->get_mail() == acc->get_mail())
		{
			this->accounts.erase(this->accounts.begin() + i);
			return;
		}
	}
}

bool Repo_accounts::search_account(Account* acc)
{
	for (int i = 0; i < this->accounts.size(); i++)
	{
		if (this->accounts[i]->get_mail() == acc->get_mail())
		{
			return 1;
		}
	}
	return 0;
}

Account* Repo_accounts::get_account(std::string mail)
{
	for (auto a : this->accounts)
	{
		if (a->get_mail() == mail)
			return a;
	}
	throw std::exception();
}
