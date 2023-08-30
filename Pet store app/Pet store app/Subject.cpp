#include "Subject.h"

void Subject::add_observer(Observer* obs)
{
	this->observers.push_back(obs);
}

void Subject::remove_observer(int pos)
{
	this->observers.erase(this->observers.begin() + pos);
}

void Subject::notify()
{
	for (auto o : this->observers)
	{
		o->update();
	}
}
