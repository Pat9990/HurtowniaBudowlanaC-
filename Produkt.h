#pragma once
#include<string>

using namespace std;

class Produkt {
private:
	string nazwaMgazyn;
	string nazwaProdukt;
	int ilosc;
public:
	Produkt();
	Produkt(string, string, int);

	void setNazwaMagazyn(string);
	void setNazwaProdukt(string);
	void setIlosc(int);

	string getNazwaMagazyn();
	string gestNazwaProdukt();
	int getIlosc();
};