#include "Klient.h"
#include "Adres.h"
#include<iostream>

Klient::Klient()
{
	cout << "Dziala konstruktor bezargumnetowy klasy Klient /n";
	imie = "Jan";
	nazwisko = "Nowak";
	tel = 111000111;
	
}

Klient::Klient(string _imie, string _nazwisko, int _tel, Adres _adres)
{
	cout << "Dziala konstruktor z argumentami klasy Klient /n";
	imie = _imie;
	nazwisko = _nazwisko;
	tel = _tel;
	adres = _adres;

}

void Klient::setImie(string _imie)
{
	imie = _imie;
}

void Klient::setNazwisko(string _nazwisko)
{
	nazwisko = _nazwisko;
}

void Klient::setTel(int _tel)
{
	tel = _tel;
}

void Klient::setAdres(Adres _adres)
{
	adres = _adres;
}

string Klient::getImie()
{
	return imie;
}

string Klient::getNazwisko()
{
	return nazwisko;
}

int Klient::getTel()
{
	return tel;
}

Adres Klient::getAdres()
{
	return adres;
}
