#pragma once
#include <string>
#include <vector>

class Account
{
private:
	std::string mail;
	std::string password;
	std::vector<std::string> adopted_pets;
	std::string user_type;

public:
	Account(std::string mail, std::string password, std::string type) : mail{ mail }, password{ password }, user_type{ type } {}

	std::string get_mail() { return this->mail; }
	std::string get_password() { return this->password; }
	std::vector<std::string> get_adopted() { return this->adopted_pets; }
	std::string get_type() { return this->user_type; }

	void set_mail(std::string mail) { this->mail = mail; }
	void set_password(std::string password) { this->password = password; }
	void set_adopted(std::vector<std::string> new_adopted) { this->adopted_pets = new_adopted; }

	void adopt_pet(std::string name) { this->adopted_pets.push_back(name); }
};

