#pragma once
#include "Auto.h"

using namespace std;

class NakladniAuto : public Auto
{
private:
	double nosnostKg;

	// rozmìry nákladového prostoru v metrech:
	double delka;
	double sirka;
	double vyska;

public:
	NakladniAuto(string vyrobce, string SPZ, int rokVyroby, double spotreba, string palivo, int stavKm, double cenaZaKm, double nosnostKg, double delka, double sirka, double vyska);
	~NakladniAuto();

	double GetNosnostKg();
	double GetDelka();
	double GetSirka();
	double GetVyska();

};

