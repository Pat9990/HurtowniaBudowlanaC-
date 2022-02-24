#include "SiecHurtowni.h"
#include "Klient.h"
#include "Adres.h"
#include<iostream>

SiecHurtowni::SiecHurtowni()
{
	cout << "Dziala konstruktor bezargumnetowy klasy SiecHurtowni /n";
	nazwa = "ABC";
}

SiecHurtowni::SiecHurtowni(string _nazwa, Adres _adres, Klient _wlasciciel)
{
	cout << "Dziala konstruktor z argumentami klasy SiecHurtowni /n";
	nazwa = _nazwa;
	adres = _adres;
	wlasciciel = _wlasciciel;

}

void SiecHurtowni::setNazwa(string _nazwa)
{
	nazwa = _nazwa;
}

void SiecHurtowni::setAdres(Adres _adres)
{
	adres = _adres;
}

void SiecHurtowni::setWlasciciel(Klient _wlasciciel)
{
	wlasciciel = _wlasciciel;
}

string SiecHurtowni::getNazwa()
{
	return nazwa;
}

Adres SiecHurtowni::gestAdres()
{
	return adres;
}

Klient SiecHurtowni::getWlasciciel()
{
	return wlasciciel;
}