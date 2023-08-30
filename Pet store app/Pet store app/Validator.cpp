#include "Validator.h"

int Validator::is_number(std::string number)
{
	if (number == "0")
		return 0;
	int int_number;
	try
	{
		int_number = stoi(number);
		return 0;
	}
	catch (std::exception&)
	{
		return 1;
	}
}

int Validator::valid_age(std::string age)
{
	int int_age;
	if (is_number(age) == 0)
		int_age = stoi(age);
	else
		throw ValidatorException("The age must be a number, not a string!\n");
	if (int_age < 0)
		throw ValidatorException("The age must be a positive number!\n");
	return int_age;
}

void Validator::valid_name(std::string name)
{
	if (name == "")
		throw ValidatorException("The name of the pet cannot be null!\n");
	for (int i = 0; i < name.size(); i++)
	{
		if ('0' <= name[i] && name[i] <= '9')
			throw ValidatorException("The name of the pet must not contain any numbers!\n");
	}
}

void Validator::valid_breed(std::string breed)
{
	if (breed == "")
		throw ValidatorException("The breed of the pet cannot be null!\n");
	for (int i = 0; i < breed.size(); i++)
	{
		if ('0' <= breed[i] && breed[i] <= '9')
			throw ValidatorException("The breed of the pet must not contain any numbers!\n");
	}
}