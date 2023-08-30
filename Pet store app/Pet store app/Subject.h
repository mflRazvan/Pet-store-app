#pragma once
#include "Observer.h"
#include <vector>

class Subject
{
private:
	std::vector<Observer*> observers;

public:
	void add_observer(Observer* obs);
	void remove_observer(int pos);
	void notify();
};
