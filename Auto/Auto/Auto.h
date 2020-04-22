#pragma once
#include <iostream>

using namespace std;

class Auto
{
private:
	string vyrobce;
	string SPZ;
	int rokVyroby;
	double spotreba;
	string palivo;
	int stavKm;
	double cenaZaKm;

	static double cenaBenzin;
	static double cenaNafta;

public:
	Auto(string vyrobce, string SPZ, int rokVyroby, double spotreba, string palivo, int stavKm, double cenaZaKm);
    ~Auto();

	string GetVyrobce();
	string GetSPZ();
	void SetSPZ(string SPZ);
	int GetRokVyroby();
	double GetSpotreba();
	int GetStavKm();
	static double GetCenaBenzin();
	static double GetCenaNafta();
	static void SetCenaBenzin(double cenaBenzin);
	static void SetCenaNafta(double cenaNafta);
	void IncStavKm(int stavKm);
	double CenaJizdy(int pocetKm);

};

