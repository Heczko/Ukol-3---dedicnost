#include "PartnerAccount.h"
#include "Account.h"

PartnerAccount::PartnerAccount(int n, Client* o, Client* p) : Account(n, o)
{
	this->partner = p;
}

PartnerAccount::PartnerAccount(int n, Client* o, Client* p, double ir) : Account(n, o, ir)
{
	this->partner = p;
}

Client* PartnerAccount::GetPartner()
{
	return this->partner;
}
