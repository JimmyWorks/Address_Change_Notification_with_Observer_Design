/*
 * BankObserver.cpp
 *
 *  Created on: Nov 29, 2016
 *      Author: Jimmy Nguyen
 */

#include "Bank.hpp"
#include <iostream>
#include <string>
using namespace std;

void BankObserver::addressChanged(string newAddress)
{
	cout << "Bank has been notified of the new address, \"" << newAddress << "\"." << endl;
}


