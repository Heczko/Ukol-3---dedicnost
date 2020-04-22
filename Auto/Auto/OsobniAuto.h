#pragma once

#include "Auto.h"

class OsobniAuto : public Auto
{
private:
	int pocetMist;
	int pocetDveri;
	int objemZavazadlovehoProstoru;

public:
	OsobniAuto(string vyrobce, string SPZ, int rokVyroby, double spotreba, string palivo, int stavKm, double cenaZaKm, int pocetMist, int pocetDveri, int objemZavazadlovehoProstoru);
	~OsobniAuto();

	int GetPocetMist();
	int GetPocetDveri();
	int GetObjemZavazadlovehoProstoru();
};

