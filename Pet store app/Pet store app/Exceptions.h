#pragma once
#include<iostream>
#include <vector>

class RepositoryException : public std::exception {
private:
	std::string message;

public:
	RepositoryException(const std::string& message) : message{ message } {}
	const char* what() const noexcept override { return message.c_str(); }
};

class ValidatorException : public std::exception {
private:
	std::string message;

public:
	ValidatorException(const std::string& message) : message{ message } {}
	const char* what() const noexcept override { return message.c_str(); }
};
