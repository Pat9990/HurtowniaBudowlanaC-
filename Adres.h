#pragma once
#include<string>
using namespace std;

class Adres {
private:
	string ulica, miasto;
	int nr,kod;
public:
	Adres();
	Adres(string ulica, string miasto, int nr, int kod);

	void setUlica(string);
	void setMiasto(string);
	void setNr(int);
	void setKod(int);

	string getUlica();
	string getMiasto();
	int getNr();
	int getKod();

};