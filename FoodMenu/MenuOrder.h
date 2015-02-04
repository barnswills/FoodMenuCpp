#ifndef MENUORDER_H
#define MENUORDER_H

#include <string>

using namespace std;

class MenuOrder
{
public:

	// constructor and destructor
	MenuOrder(void);
	~MenuOrder(void);

	// fucntions within the class
	void DisplayOptions();
	void DisplayMenu();

	// variables
	bool hasFinishedOrder;
	int foodChoice;

	// inputs
	string name;
	string tableNumber;
	
	int choice;

	
};

#endif

