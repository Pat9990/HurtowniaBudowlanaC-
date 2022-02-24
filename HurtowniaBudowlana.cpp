#include "HurtowniaBudowlana.h"
#include <iostream>

HurtowniaBudowlana::HurtowniaBudowlana()
{
	cout << "Dziala konstruktor bezargumnetowy klasy HurtowniaBudowlana /n";
	magazyn = "a1";
}

HurtowniaBudowlana::HurtowniaBudowlana(Klient _klient, Produkt _produkt, string _magazyn)
{
	klient = _klient;
	produkt = _produkt;
	magazyn = _magazyn;
}

void HurtowniaBudowlana::setKlient(Klient _klient)
{
	klient = _klient;
}

void HurtowniaBudowlana::setProdukt(Produkt _produkt)
{
	produkt = _produkt;
}

void HurtowniaBudowlana::setMagazyn(string _magazyn)
{
	magazyn = _magazyn;
}

Klient HurtowniaBudowlana::getKlient()
{
	return klient;
}

Produkt HurtowniaBudowlana::getProdukt()
{
	return produkt;
}

string HurtowniaBudowlana::getMagazyn()
{
	return magazyn;
}

int HurtowniaBudowlana::stanProdWMagazyn(Produkt _produkt )
{
	
	return _produkt.getIlosc();
}

void HurtowniaBudowlana::przyjecie(Produkt _produkt, int _ile)
{	
	_produkt.setIlosc(_produkt.getIlosc() + _ile);
}

void HurtowniaBudowlana::wydanie(Produkt _produkt, int _ile)
{
	_produkt.setIlosc(_produkt.getIlosc() - _ile);
}


