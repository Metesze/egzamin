#include "figura.h"

figura::figura()
{
	this->nazwa = "kwadrat";
	this->kolor = "czarny";
	this->szerokosc = 10;
	this->wysokosc = 10;
}

figura::figura(string nazwa, double wysokosc, double szerokosc, string kolor)
{
	this->nazwa = nazwa;
	this->kolor = kolor;
	this->wysokosc = wysokosc;
	this->szerokosc = szerokosc;
}

figura::figura(double szerokosc)
{
	this->wysokosc = 0.0;
	this->szerokosc = szerokosc;
}

figura::figura(double szerokosc, string kolor)
{
	this->wysokosc = szerokosc;
	this->szerokosc = szerokosc;
	this->kolor = kolor;
}

double figura::oblicz_Pole()
{
	double pole=0;
	if (this->nazwa == "kwadrat") {
		pole = this->szerokosc * this->szerokosc;
		return pole;
	}
	else if (this->nazwa == "trojkat") {
		pole = this->szerokosc * this->wysokosc/2;
		return pole;
	}
	else {
		pole = this->szerokosc * this->wysokosc;
		return pole;
	}
}

void figura::piszDane()
{
	cout << "Nazwa: " << this->nazwa << endl;
	cout << "Kolor: " << this->kolor << endl;
	cout << "Wysokosc: " << this->wysokosc << endl;
	cout << "Szerokosc: " << this->szerokosc << endl;
}

bool figura::operator==(const figura& figura)
{
	cout << "cokolwiek";
	if (this->wysokosc == figura.wysokosc && this->szerokosc == figura.szerokosc && this->kolor == figura.kolor && this->nazwa == figura.nazwa) return true;
	else
	return false;
}

figura::~figura()
{
}
