#ifndef FOOD_H
#define FOOD_H

using namespace std;
#include <string>

class Food
{
public:
	Food(void);
	~Food(void);

	void DisplayStarters();
	void DisplayMains();
	void DisplayDeserts();
	void DisplaySides();
	void DisplayDrinks();
	void DisplayOrder();
	
	int starterChoice;
	int mainChoice;
	int desertChoice;

	// array stuff
	string OrderArray[20];
	string notes;
	int amount;

	double total;
};

#endif

