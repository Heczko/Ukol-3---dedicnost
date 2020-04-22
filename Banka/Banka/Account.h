#pragma once
#include "Client.h"
#include <iostream>

class Account
{
private:
	int number;
	double balance;
	double interestRate;
	bool useDefaultIr;

	Client* owner;

public:
	Account(int n, Client* o);
	Account(int n, Client* o, double ir);
	~Account();

	int GetNumber();
	double GetBalance();
	double GetInterestRate();
	Client* GetOwner();
	bool CanWithdraw(double a);
	bool GetUseDefaultIr();

	void Deposit(double a);
	bool Withdraw(double a);
	void AddInterest();
};