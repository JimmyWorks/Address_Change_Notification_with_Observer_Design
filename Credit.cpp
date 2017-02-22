/*
 * Credit.cpp
 *
 *  Created on: Nov 29, 2016
 *      Author: Jimmy Nguyen
 */

#include "Credit.hpp"
#include <iostream>
#include <string>
using namespace std;

void CreditObserver::addressChanged(string newAddress)
{
	cout << "Credit Card Company has been notified of the new address, \"" << newAddress << "\"." << endl;
}


