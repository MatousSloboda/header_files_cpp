#ifndef _TRIDA //Vlozi se jen pokud jiz neni vlozena
#define _TRIDA

#include <iostream>
#include <iomanip>
#include <cstdlib>

//Jmenny prostor, abychom nemuseli porad psat std::
using namespace std;

class Trida{
  private:
	float PrvniPrivatniPromenna;
	float DruhaPrivatniPromenna;
  public:
  	//Konstrukor (odkaz na trida.cpp)
  	Trida();
  	//Prvni pretizeni
  	Trida(float prvniPromennaParametru);
  	//Druhe pretizeni
  	Trida(float prvniPromennaParametru, float druhaPromennaParametru);
  	//Vlastni verejna metoda - nic nenastavuje => const
	void PrvniVerejnaMetoda() const;
	//Pretizeni operatoru +
	Trida operator+(Trida cisloProPridani);
	//Deklarace pretizeni operatoru <<
	friend ostream &operator<<(ostream &naVystup, Trida &x);
	//Deklarace pretizeni operatoru >>
	friend istream &operator>>(istream &naVstup, Trida &x);	    	
};
#endif
