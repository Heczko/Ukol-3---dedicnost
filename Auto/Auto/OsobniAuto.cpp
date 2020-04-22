#include "OsobniAuto.h"

OsobniAuto::OsobniAuto(string vyrobce, string SPZ, int rokVyroby, double spotreba, string palivo, int stavKm, double cenaZaKm, int pocetMist, int pocetDveri, int objemZavazadlovehoProstoru) : Auto(vyrobce, SPZ, rokVyroby, spotreba, palivo, stavKm, cenaZaKm)
{
	this->pocetMist = pocetMist;
	this->pocetDveri = pocetDveri;
	this->objemZavazadlovehoProstoru = objemZavazadlovehoProstoru;
}

OsobniAuto::~OsobniAuto()
{

}

int OsobniAuto::GetPocetMist()
{
	return this->pocetMist;
}

int OsobniAuto::GetPocetDveri()
{
	return this->pocetDveri;
}

int OsobniAuto::GetObjemZavazadlovehoProstoru()
{
	return this->objemZavazadlovehoProstoru;
}
