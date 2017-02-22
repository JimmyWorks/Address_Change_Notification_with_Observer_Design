/*
 * School.cpp
 *
 *  Created on: Nov 29, 2016
 *      Author: Jimmy Nguyen
 */

#include "School.hpp"
#include <iostream>
#include <string>
using namespace std;

void SchoolObserver::addressChanged(string newAddress)
{
	cout << "School has been notified of the new address, \"" << newAddress << "\"." << endl;
}
