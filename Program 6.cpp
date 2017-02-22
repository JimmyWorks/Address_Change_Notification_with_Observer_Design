//============================================================================
// Name        : Program.cpp
// Author      : Thanh Hoang Nguyen
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Subject.hpp"
#include "Bank.hpp"
#include "School.hpp"
#include "Credit.hpp"
using namespace std;

int main() {

	cout << "\n\n=======================================================================\n\n"
		 << "Welcome to Jimmy's Quick Implementation of the Observer Design Model!\n\n"
		 << "=======================================================================\n\n"
		 << "The following program will create a the following list of observers:\n\n"

		 << "-  a Bank Observer\n"
		 << "-  a School Observer\n"
		 << "-  a Credit Card Company Observer\n\n"

		 << "These observers are derived objects from an abstract base class \"AbstractObserver\"\n"
		 << "Each of these observers are created and their pointers are stored in a linked list\n"
		 << "holding AbstractObserver*.  This program will create observers, store them in the\n"
		 << "linked list, and whenever the subject changes the address, all of the respective\n"
		 << "observers in the linked list will be notified of the change.  Removing of observers\n"
		 << "from the linked list will also be demonstrated." << endl << endl;

	cout << "Let's start by creating a subject, \"JimmyNguyen.\"\n\n";
	Subject JimmyNguyen;
	cout << "Now that the subject is created, let's see Jimmy's default address.\n\n"
		 << "Jimmy's default address is:\n"
		 << JimmyNguyen.getAddress() << endl << endl;

	cout << "Let's give Jimmy a home.  Let's say he lives at the CityScape apartments in Plano at\n"
		 << "3825 Mapleshade Lane, Plano TX 75075.\n\n";
	JimmyNguyen.setAddress("3825 Mapleshade Lane, Plano TX 75075");

	cout << "Jimmy's address now is:\n"
		 << JimmyNguyen.getAddress() << endl;

	cout << "\nBecause no observers were added to the list, no observers were notified of the new address.\n"
		 << "Let's add three observers to the list in case Jimmy moves!\n"
		 << "We will add a school observer, a bank observer and a credit card observer.\n\n";

	//Create Observers (the respective pointers below)
	SchoolObserver* UT_Dallas = new SchoolObserver();
	BankObserver* Ally_Bank = new BankObserver();
	CreditObserver* Chase_Bank = new CreditObserver();

	//Load Observers into the Subject, "JimmyNguyen", linked list
	JimmyNguyen.addObserver(UT_Dallas);
	JimmyNguyen.addObserver(Ally_Bank);
	JimmyNguyen.addObserver(Chase_Bank);

	cout << "Observers added.\n\n";

	cout << "Now that the observers have been added.  Let's say Jimmy moves.\n"
         << "Jimmy's new address is now at the UT Dallas campus: 800 W Campbell Rd, Richardson, TX 75080\n" << endl;

	cout << "Address changed below.  Observers will report if they are notified...\n\n";
	JimmyNguyen.setAddress("800 W Campbell Rd, Richardson, TX 75080");

	cout << "\nLooks like everyone is notified.  Let's remove an observer and try one more time.\n"
		 << "Let's say Jimmy graduates and no longer needs to notify the school.\n\n";

	JimmyNguyen.removeObserver(UT_Dallas);
	cout << "School observer removed.\n\n";

	cout << "Let's change the address one more time to the Village in Upper East in Dallas.\n" << endl;

	JimmyNguyen.setAddress("8705 Southwestern Blvd, Dallas, TX 75206");

	cout << "\nAs you can see above, only the two remaining observers were notified.\n\n"
		 << "This concludes our quick implementation of the Observer Design Model\n\n\n"

		 <<"===============================================================\n\n"
		 << "Thank you for visiting!  All code was written by Jimmy Nguyen.\n"
		 << "For all questions, please contact me at Jimmy@JimmyWorks.net\n\n"
		 <<"===============================================================";

	delete UT_Dallas;
	delete Ally_Bank;
	delete Chase_Bank;

	return 0;
}
