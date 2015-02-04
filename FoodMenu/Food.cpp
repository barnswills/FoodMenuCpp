#include "Food.h"
#include "Payment.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

Food::Food(void)
{
	total = 0;
	amount = 0;
}

Food::~Food(void)
{
}

void Food::DisplayStarters()
{
	cout << "You have selected Starters\n";
	cout << "Please select from the following\n";

	cout << "1. Prawn Cocktail - " << char(156) << "5.95\n";
	cout << "2. Bread and Oils - " << char(156) << "4.95\n";
	cout << "3. Go Back\n";

	cout << "Choice: ";
	cin >> starterChoice;

	if (starterChoice == 1)
	{
		amount+=1;

		cout << "Prawn cocktail added\n";
		total += 5.95;
		
		OrderArray[amount] += "Prawn Cocktail\n";

		cout << endl;
	}

	if (starterChoice == 2)
	{
		amount+=1;

		cout << "Bread and Oils added\n";
		total += 4.95;

		OrderArray[amount] += "Bread and Oils\n";

		cout << endl;
	}

	if (starterChoice == 3)
	{
		system("cls");
	}

}

void Food::DisplayMains()
{
	cout << "You have selected Mains\n";
	cout << "Please select from the following\n";

	cout << "1. Fish and Chips - " << char(156) << "9.95\n";
	cout << "2. Burger and Chips - " << char(156) << "8.95\n";
	cout << "3. Go Back\n";

	cin >> mainChoice;

	if (mainChoice == 1)
	{
		amount+=1;

		cout << "Fish and Chips added\n";
		total += 9.95;
		
		OrderArray[amount] += "Fish and Chips\n";

		cout << endl;
	}

	if (mainChoice == 2)
	{
		amount+=1;

		cout << "Burger and Chips added\n";
		total += 8.95;

		OrderArray[amount] += "Burger and Chips\n";

		cout << endl;
	}
}

void Food::DisplayDeserts()
{
	cout << "You have selected Deserts\n";
	cout << "Please select from the following\n";

	cout << "1. Creme Brulee - " << char(156) << "4.95\n";
	cout << "2. Chocolate Brownie - " << char(156) << "5.95\n";
	cout << "3. Go Back\n";

	cin >> desertChoice;

	if (desertChoice == 1)
	{
		amount+=1;

		cout << "Creme Brulee added\n";
		total += 4.95;
		
		OrderArray[amount] += "Creme Brulee\n";

		cout << endl;
	}

	if (desertChoice == 2)
	{
		amount+=1;

		cout << "Chocolate Brownie added\n";
		total += 5.95;

		OrderArray[amount] += "Chocolate Brownie\n";

		cout << endl;
	}
}

void Food::DisplayOrder()
{
	system("cls");

	cout << "Your Total Order:\n\n";

	for (int i = 1; i <= amount; i++)
	{
		cout << OrderArray[i] << endl;
	}

	cout << "Total Price of meal: " << char(156) 
		<< setprecision(2) << fixed << total << endl;

	cout << "Add a note with the order: ";
	getline(cin,notes);

	Payment pay;
	pay.ProcessPayment(total);
}