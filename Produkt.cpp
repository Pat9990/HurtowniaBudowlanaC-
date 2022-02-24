#include "Produkt.h"
#include<iostream>

Produkt::Produkt()
{
	cout << "Dziala konstruktor bezargumnetowy klasy Produkt /n";
	nazwaMgazyn = "aaa";
	nazwaProdukt = "klej";
	ilosc = 0;
}

Produkt::Produkt(string _nazwaMgazyn, string _nazwaProdukt, int _ilosc)
{
	cout << "Dziala konstruktor z argumentami klasy Produkt /n";
	nazwaMgazyn = _nazwaMgazyn;
	nazwaProdukt = _nazwaProdukt;
	ilosc = _ilosc;
}

void Produkt::setNazwaMagazyn(string _nazwaMgazyn)
{
	nazwaMgazyn = _nazwaMgazyn;
}

void Produkt::setNazwaProdukt(string _nazwaProdukt)
{
	nazwaProdukt = _nazwaProdukt;
}

void Produkt::setIlosc(int _ilosc)
{
	ilosc = _ilosc;
}

string Produkt::getNazwaMagazyn()
{
	return nazwaMgazyn;
}

string Produkt::gestNazwaProdukt()
{
	return nazwaProdukt;
	
}

int Produkt::getIlosc()
{
	return ilosc;
}
