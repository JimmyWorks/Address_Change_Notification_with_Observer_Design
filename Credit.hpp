/*
 * Credit.hpp
 *
 *  Created on: Nov 16, 2016
 *      Author: Jimmy Nguyen
 */

#ifndef CREDIT_HPP_
#define CREDIT_HPP_

#include <string>
#include "AbstractObserver.hpp"
using namespace std;

class CreditObserver : public AbstractObserver
{
	private:

	public:
		void addressChanged(string);
};



#endif /* CREDIT_HPP_ */
