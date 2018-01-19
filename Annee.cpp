#include "Annee.h"

Annee::Annee() {}

Annee::Annee(Semestre& semestre1, Semestre& semestre2) : typeDeSemestre{semestre1,semestre2} {}

Annee::~Annee() {}

void Annee::ModifierUnSemestre(Semestre& semestre, int indiceDuSemestre) {

	if(indiceDuSemestre==1) {

		typeDeSemestre[0]=semestre;
	}

	if(indiceDuSemestre==2) {

		typeDeSemestre[1]=semestre;
	}
}

Semestre& Annee::getSemestre(int indice) {

	return typeDeSemestre[indice];
}
