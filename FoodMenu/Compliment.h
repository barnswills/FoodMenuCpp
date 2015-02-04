#ifndef COMPLIMENT_H
#define COMPLIMENT_H

#include <string>

using namespace std;

class Compliment
{
public:
	Compliment(void);
	~Compliment(void);

	void SendCompliment();

	string message;
};

#endif

