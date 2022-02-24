#pragma once
#include<string>
#include "Adres.h"
using namespace std;

class Klient {
private:
	string imie, nazwisko;
	int tel;
	Adres adres;
public:
	Klient();
	Klient(string imie, string nazwisko, int tel, Adres adres);

	void setImie(string);
	void setNazwisko(string);
	void setTel(int);
	void setAdres(Adres);

	string getImie();
	string getNazwisko();
	int getTel();
	Adres getAdres();
};