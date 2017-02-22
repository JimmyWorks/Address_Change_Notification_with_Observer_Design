/*
 * Bank.hpp
 *
 *  Created on: Nov 16, 2016
 *      Author: Jimmy Nguyen
 */

#ifndef BANK_HPP_
#define BANK_HPP_

#include <string>
#include "AbstractObserver.hpp"
using namespace std;

class BankObserver : public AbstractObserver
{
	private:

	public:
		void addressChanged(string);
};



#endif /* BANK_HPP_ */
