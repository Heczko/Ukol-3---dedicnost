#include "NakladniAuto.h"

NakladniAuto::NakladniAuto(string vyrobce, string SPZ, int rokVyroby, double spotreba, string palivo, int stavKm, double cenaZaKm, double nosnostKg, double delka, double sirka, double vyska) : Auto(vyrobce, SPZ, rokVyroby, spotreba, palivo, stavKm, cenaZaKm)
{
	this->nosnostKg = nosnostKg;
	this->delka = delka;
	this->sirka = sirka;
	this->vyska = vyska;
}

NakladniAuto::~NakladniAuto()
{

}

double NakladniAuto::GetNosnostKg()
{
	return this->nosnostKg;
}

double NakladniAuto::GetDelka()
{
	return this->delka;
}

double NakladniAuto::GetSirka()
{
	return this->sirka;
}

double NakladniAuto::GetVyska()
{
	return this->vyska;
}
