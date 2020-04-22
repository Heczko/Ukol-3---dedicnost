#include <iostream>
#include "Auto.h"
#include "OsobniAuto.h"
#include "NakladniAuto.h"

using namespace std;

int main()
{
    OsobniAuto *oa1 = new OsobniAuto("Skoda", "1TJ 0102", 2018, 6.3, "benzin", 83000, 4.1, 5, 4, 330);
    OsobniAuto* oa2 = new OsobniAuto("Honda", "2TJ 0304", 2016, 6.9, "benzin", 100000, 4.4, 7, 4, 400);
    NakladniAuto* na1 = new NakladniAuto("Volvo", "2TJ 0304", 2018, 14.8, "nafta", 99000, 18.9, 2800, 6.05, 2.48, 2.50);
    NakladniAuto* na2 = new NakladniAuto("Iveco", "3TJ 0608", 2019, 18.9, "nafta", 89000, 26.3, 24000, 13.10, 2.55, 3.0);

    cout << "pocet najetych km: " << oa2->GetStavKm() << endl;
    oa2->IncStavKm(1234);
    cout << "pocet najetych km: " << oa2->GetStavKm() << endl << endl;

    double cenaJizda = oa1->CenaJizdy(400);
    cout << "Osobni auto - cena jizdy 400km: " << cenaJizda << endl;

    double cenaJizda2 = na2->CenaJizdy(400);
    cout << "Nakladni auto - cena jizdy 400km: " << cenaJizda2 << endl;

    getchar();
    return 0;
}