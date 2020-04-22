#include "Auto.h"

double Auto::cenaBenzin = 29.60;
double Auto::cenaNafta = 28.90;

Auto::Auto(string vyrobce, string SPZ, int rokVyroby, double spotreba, string palivo, int stavKm, double cenaZaKm)
{
	this->vyrobce = vyrobce;
	this->SPZ = SPZ;
	this->rokVyroby = rokVyroby;
	this->palivo = palivo;
	this->spotreba = spotreba;
	this->stavKm = stavKm;
	this->cenaZaKm = cenaZaKm;
}

Auto::~Auto()
{

}

string Auto::GetVyrobce()
{
	return this->vyrobce;
}

string Auto::GetSPZ()
{
	return this->SPZ;
}

void Auto::SetSPZ(string SPZ)
{
	this->SPZ = SPZ;
}

int Auto::GetRokVyroby()
{
	return this->rokVyroby;
}

double Auto::GetSpotreba()
{
	return this->spotreba;
}

int Auto::GetStavKm()
{
	return this->stavKm;
}

double Auto::GetCenaBenzin()
{
	return Auto::cenaBenzin;
}

double Auto::GetCenaNafta()
{
	return Auto::cenaNafta;
}

void Auto::SetCenaBenzin(double cenaBenzin)
{
	Auto::cenaBenzin = cenaBenzin;
}

void Auto::SetCenaNafta(double cenaNafta)
{
	Auto::cenaNafta = cenaNafta;
}

void Auto::IncStavKm(int stavKm)
{
	this->stavKm += stavKm;
}

double Auto::CenaJizdy(int pocetKm)
{
	if (this->palivo == "benzin")
	{
		return (pocetKm * this->cenaZaKm + Auto::cenaBenzin * this->spotreba * pocetKm / 100.0);
	}
	if (this->palivo == "nafta")
	{
		return (pocetKm * this->cenaZaKm + Auto::cenaNafta * this->spotreba * pocetKm / 100.0);
	}

	return 0;
}
