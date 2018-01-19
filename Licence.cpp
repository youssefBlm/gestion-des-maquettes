#include "Licence.h"

Licence::Licence(Annee& Licence1, Annee& Licence2, Annee& Licence3) : NiveauDetude{Licence1,Licence2,Licence3} {}

Licence::~Licence() {}

void Licence::ModifierUneAnnee(Annee& annee, int indiceDuneAnnee) {

	if(indiceDuneAnnee==1) {

		NiveauDetude[0]=annee;
	}

	if(indiceDuneAnnee==2) {

		NiveauDetude[1]=annee;
	}

	if(indiceDuneAnnee==3) {

		NiveauDetude[2]=annee;
	}
}

Annee& Licence::getAnnee(int indice) {

	return NiveauDetude[indice];
}

