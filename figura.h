#pragma once
#include <iostream>
using namespace std;

class figura
{private: 
	string nazwa;
	double wysokosc;
	double szerokosc;
	string kolor;
public:
	figura();
	figura(string nazwa, double wysokosc, double szerokosc, string kolor);
	figura(double szerokosc);
	figura(double szerokosc, string kolor);
	double oblicz_Pole();
	void piszDane();
	bool operator==(const figura& figura);
	friend ostream& operator<<(ostream& wy, figura& figura);
	~figura();
};

