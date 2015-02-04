#ifndef QUERY_H
#define QUERY_H

#include <iostream>
using namespace std;

class Query
{
public:
	Query(void);
	~Query(void);

	void SendQuery();

	string queryMessage;
};

#endif

