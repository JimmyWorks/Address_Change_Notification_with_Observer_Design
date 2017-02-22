/*
 * School.hpp
 *
 *  Created on: Nov 16, 2016
 *      Author: Jimmy Nguyen
 */

#ifndef SCHOOL_HPP_
#define SCHOOL_HPP_

#include <string>
#include "AbstractObserver.hpp"
using namespace std;

class SchoolObserver : public AbstractObserver
{
	private:

	public:
		void addressChanged(string);
};



#endif /* SCHOOL_HPP_ */
