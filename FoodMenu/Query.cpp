#include "Query.h"
#include <iostream>
#include <string>
using namespace std;

Query::Query(void)
{
}


Query::~Query(void)
{
}

void Query::SendQuery()
{
	cout << "Send your query below\nQuery: ";
	cin >> queryMessage;
	cout << "Your query has been sent to the kitchen!\n";
}