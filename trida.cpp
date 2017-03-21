//Vlozeni hlavickoveho souboru, pokud jeste neni vlozeny
#include "trida.h"
//Konstuktor tridy Trida = pocatecni nastaveni "hodnot" promennych tridy Trida,
//pokud tridu nepretezim
  	Trida::Trida(){
	this->PrvniPrivatniPromenna = 0.0;
	this->DruhaPrivatniPromenna = 0.0;
  	}
//Pretizeni tridy Trida
 	Trida::Trida(float prvniPrivatniPromenna){
	this->PrvniPrivatniPromenna = prvniPrivatniPromenna;
	this->DruhaPrivatniPromenna = 0.0;
	}
	
//Pretizeni tridy Trida
 	Trida::Trida(float prvniPromennaParametru, float druhaPromennaParametru){
	this->PrvniPrivatniPromenna = prvniPromennaParametru;
	this->DruhaPrivatniPromenna = druhaPromennaParametru;
	}
	  	
 	Trida Trida::operator+(Trida cisloProPridani){
	//Vytvoreni jakoby promenne typu Trida
	Trida vysledek;
  	vysledek.PrvniPrivatniPromenna = this->PrvniPrivatniPromenna + cisloProPridani.PrvniPrivatniPromenna;
  	vysledek.DruhaPrivatniPromenna = this->DruhaPrivatniPromenna + cisloProPridani.DruhaPrivatniPromenna;
	return vysledek;
	}
	//Pretizeni operatoru << (pro vystup)
	ostream &operator<<(ostream &naVystup, Trida &x){
	cout<<"Prvni promenna | Druha promenna: ";
		naVystup<<x.PrvniPrivatniPromenna<<"|"<<x.DruhaPrivatniPromenna<<endl;
  	}
  	//Pretizeni operatoru >> (pro vstup)
	istream &operator>>(istream &naVstup, Trida &x){
	cout<<"Zadejte prvni privatni promennou: ";
	naVstup>>x.PrvniPrivatniPromenna;
	cout<<"Zadejte druhou privatni promennou: ";
	naVstup>>x.DruhaPrivatniPromenna;			
	}
  	
