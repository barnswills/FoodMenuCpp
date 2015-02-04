#ifndef PAYMENT_H
#define PAYMENT_H

using namespace std;
#include <string>

class Payment
{
public:
	Payment(void);
	~Payment(void);

	void ProcessPayment(double p);
	int paymentChoice;
	double cash;
	double change;

	int foodTime;
	string *payname;
};

#endif

