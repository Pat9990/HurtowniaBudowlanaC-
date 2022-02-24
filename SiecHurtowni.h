#pragma once
#include<string>
#include "Adres.h"
#include "Klient.h"

using namespace std;

class SiecHurtowni {
private:
	string nazwa;
	Adres adres;
	Klient wlasciciel;
public:
	SiecHurtowni();
	SiecHurtowni(string nazwa, Adres adres, Klient wlasciciel);

	void setNazwa(string);
	void setAdres(Adres);
	void setWlasciciel(Klient);

	string getNazwa();
	Adres gestAdres();
	Klient getWlasciciel();

};