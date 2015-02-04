#include "InputHandler.h"
#include <iostream>

using namespace std;

InputHandler::InputHandler(void)
{
}


InputHandler::~InputHandler(void)
{
}

void InputHandler::CheckInput()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
