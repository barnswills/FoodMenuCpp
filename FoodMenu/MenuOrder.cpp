#include "MenuOrder.h"
#include "Compliment.h"
#include "Query.h"
#include "Food.h"
#include "Payment.h"
#include "InputHandler.h"

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;
Food food;
Payment pay;

MenuOrder::MenuOrder(void)
{
}

MenuOrder::~MenuOrder(void)
{
}

void MenuOrder::DisplayOptions()
{
	
	cout << "WELCOME TO MY FOOD ORDER...\n\n";

	cout << "Please enter your name: ";
	cin >> name;

	cout << "Please enter your table number: ";
	cin >> tableNumber;

	while (true)
	{
		cout << "Please select from the following...\n\n";

		cout << "1. Make an order\n";
		cout << "2. Make a Query\n";
		cout << "3. Send a compliment\n";
		cout << "4. Complete Order\n";

		cout << "Choice: ";
		cin >> choice;

		if (choice == 1)
		{
			DisplayMenu();
		}

		if (choice == 2)
		{
			Query q;
			q.SendQuery();
		}

		if (choice == 3)
		{
			Compliment comp;
			comp.SendCompliment();
		}

		if (choice == 4)
		{
			break;
		}
	}

	food.DisplayOrder();
}

void MenuOrder::DisplayMenu()
{
	while (true)
	{
		cout << "Please Select from the following food options\n\n";

		cout << "1. Select a Starter\n2. Select a Main\n";
		cout << "3. Select a Desert\n4. Select a Side\n";
		cout << "5. Finish\n";

		cout << "Choice: ";
		cin >> foodChoice;

		if (foodChoice == 1)
		{
			food.DisplayStarters();
		}

		if (foodChoice == 2)
		{
			food.DisplayMains();
		}

		if (foodChoice == 5)
		{
			break;
		}
	}
}







