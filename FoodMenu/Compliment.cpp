#include "Compliment.h"
#include <iostream>
using namespace std;

Compliment::Compliment(void)
{
}

Compliment::~Compliment(void)
{
}

void Compliment::SendCompliment()
{
	cout << "Please enter the compliment below\nCompliment: ";
	cin >> message;
	cout << "Your compliment has been sent!\n";
}
