#include "Adres.h"
#include<iostream>

Adres::Adres()
{
	cout << "Dziala konstruktor bezargumnetowy klasy Adres /n";
	ulica = "akacjowa";
	miasto = "Gdansk";
	nr = 1;
	kod = 00000;

}

Adres::Adres(string _ulica, string _miasto, int _nr, int _kod)
{
	cout << "Dziala konstruktor z argumentami klasy Adres /n";
	ulica = _ulica;
	miasto = _miasto;
	nr = _nr;
	kod = _kod;
}

void Adres::setUlica(string _ulica)
{
	ulica = _ulica;
}

void Adres::setMiasto(string _miasto)
{
	miasto = _miasto;
}

void Adres::setNr(int _nr)
{
	nr = _nr;
}

void Adres::setKod(int _kod)
{
	kod = _kod;
}

string Adres::getUlica()
{
	return ulica;
}

string Adres::getMiasto()
{
	return miasto;
}

int Adres::getNr()
{
	return nr;
}

int Adres::getKod()
{
	return kod;
}
