#include "Client.h"
#include <iostream>

Client::Client(int c, string n)
{
	this->code = c;
	this->name = n;
}

Client::~Client()
{

}

int Client::GetCode()
{
	return this->code;
}

string Client::GetName()
{
	return this->name;
}
