#pragma once
#include "SiecHurtowni.h"
#include "Klient.h"
#include "Produkt.h"

using namespace std;

class HurtowniaBudowlana: public SiecHurtowni {
private:
	Klient klient;
	Produkt produkt;
	string magazyn;
public:
	HurtowniaBudowlana();
	HurtowniaBudowlana(Klient klient,Produkt produkt, string magazyn);

	void setKlient(Klient);
	void setProdukt(Produkt);
	void setMagazyn(string);

	Klient getKlient();
	Produkt getProdukt();
	string getMagazyn();

	int stanProdWMagazyn(Produkt produkt);
	void przyjecie(Produkt produkt, int ile);
	void wydanie(Produkt produkt, int ile);

	
};
