/*
 * Subject.cpp
 *
 *  Created on: Nov 16, 2016
 *      Author: Jimmy Nguyen
 */

#include "subject.hpp"
#include <string>
using namespace std;


Subject::Subject()
{
	address = "no record";

}

Subject::~Subject()
{

}

void Subject::notify(string newAddress)
{
	std::list<AbstractObserver*>::iterator iter;
	for(iter = observers.begin(); iter != observers.end(); ++iter)
	{
		(*iter)->addressChanged(newAddress);
	}

}

void Subject::addObserver(AbstractObserver* addMe)
{
	observers.push_back(addMe);
}
void Subject::removeObserver(AbstractObserver* removeMe)
{
	std::list< AbstractObserver* >::iterator iter;

	for(iter = observers.begin(); iter != observers.end(); ++iter)
	{
		if(removeMe == (*iter))
		{
			observers.erase(iter);
			iter = observers.begin();
		}
	}

}
string Subject::getAddress() const
{
	return address;
}
void Subject::setAddress(string newAddress)
{
	address = newAddress;

	if(observers.empty()){}
	else
	Subject::notify(newAddress);

}

