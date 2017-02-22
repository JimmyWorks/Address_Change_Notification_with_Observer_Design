/*
 * AbstractObserver.hpp
 *
 *  Created on: Nov 16, 2016
 *      Author: Jimmy Nguyen
 */

#ifndef ABSTRACTOBSERVER_HPP_
#define ABSTRACTOBSERVER_HPP_

#include <string>
using namespace std;

class AbstractObserver
{
	private:

	public:
	virtual void addressChanged(string)=0;
	virtual ~AbstractObserver(){}

};



#endif /* ABSTRACTOBSERVER_HPP_ */
