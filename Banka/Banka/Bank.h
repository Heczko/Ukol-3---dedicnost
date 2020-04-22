#pragma once
#include "Client.h"
#include "Account.h"
#include "PartnerAccount.h"
#include <iostream>

class Bank
{
private:
	static double defaultIr;

	Client** clients;
	int clientsCount;

	Account** accounts;
	int accountsCount;

public:
	static double GetDefaultIr();
	static void SetDefaultIr(double ir);

	Bank(int c, int a);
	~Bank();

	Client* GetClient(int c);
	Account* GetAccount(int n);

	Client* CreateClient(int c, string n);
	Account* CreateAccount(int n, Client* o);
	Account* CreateAccount(int n, Client* o, double ir);
	PartnerAccount* CreateAccount(int n, Client* o, Client* p);
	PartnerAccount* CreateAccount(int n, Client* o, Client* p, double ir);

	void AddInterest();
};

