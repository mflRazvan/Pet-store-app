#pragma once
#include "Account.h"
#include <vector>
#include <sstream>
#include <fstream>

class Repo_accounts
{
private:
	std::vector<Account*> accounts;

	void read_accouts_file();

public:
	Repo_accounts() { this->read_accouts_file(); }

	void add_account(Account* acc) { this->accounts.push_back(acc); this->write_accounts_file(); }
	void remove_account(Account* acc);
	bool search_account(Account* acc);

	void write_accounts_file();

	Account* get_account(std::string mail);
};

