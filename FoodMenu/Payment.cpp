#include "Payment.h"
#include "Food.h"
#include "MenuOrder.h"

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

MenuOrder m;
using namespace std;

Payment::Payment(void)
{
	srand(time(NULL));
	foodTime = rand() % 20 + 10;
}


Payment::~Payment(void)
{
}

void Payment::ProcessPayment(double p)
{
	//system("cls");

	cout << "Please select the method of payment: \n\n";
	cout << "1. Cash\n";
	cout << "2. Debit Card";

	cout << "\nChoice: ";
	cin >> paymentChoice;

	if (paymentChoice == 1)
	{
		cout << "Please insert cash: " << char(156);
		cin >> cash;

		change = cash - p;

		cout << "Please collect your change of " << char(156) << change;

		cout << "\nThank you " << "your food will be with in " 
			<< foodTime << "mins!";
	}

	if (paymentChoice == 2)
	{

	}
}
