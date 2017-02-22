/*
 * Subject.hpp
 *
 *  Created on: Nov 16, 2016
 *      Author: Jimmy Nguyen
 */

#ifndef SUBJECT_HPP_
#define SUBJECT_HPP_

#include <string>
#include <list>
#include "AbstractObserver.hpp"
using namespace std;

class Subject
{
	private:
		string address;
		list<AbstractObserver*> observers; //When constructor is called, list head will be NULL ptr
		void notify(string);
	public:
		Subject();
		~Subject();
		void addObserver(AbstractObserver*);
		void removeObserver(AbstractObserver*);
		string getAddress() const;
		void setAddress(string); //this will set the new address and call notify() to do
								 //callback functions in each observer in the list of observers
};



#endif /* SUBJECT_HPP_ */
