//Vlozeni hlavickoveho souboru, pokud jeste neni vlozeny
#include "trida.h"

int main() {
	//Vytvoreni vice instanci tridy Trida
	//Podobne jako vytvoreni vice promennych typu ...,
	//jedna se ale o obekt!
	Trida prvni, druha, treti;
	//Ruzne typy vytvoreni, pozitim pretezeni tridy:
	Trida ctvrta(0.5);
	Trida pata(0.99,1.20);
	
	druha = ctvrta+pata;
	
	//Pouziti operatoru << pro vypis
	cout<<prvni;
	cout<<treti;
	cout<<druha;
	cout<<pata;
	return 0;
}
