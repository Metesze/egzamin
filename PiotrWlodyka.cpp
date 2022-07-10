// PiotrWlodyka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "figura.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& wy, figura& figura) {
    cout << figura.szerokosc;
    return wy;
}
int main()
{
    figura p2(20.5, "zielony");
    cout << "Pole prostokata p2 jest rowne: " << p2.oblicz_Pole();
    figura k1("prostokat", 10, 20, "czerwony");
    figura t1("trojkat", 13.5, 11.7, "czerwony");
    k1.piszDane();
    figura p3 = p2;
    figura t3(12);
    cout << "Pole figury k1 jest rowne: " << k1.oblicz_Pole()<<endl;
    cout << "Pole figury t1 jest rowne: " << t1.oblicz_Pole()<<endl;
    cout << t3 << endl;
}


