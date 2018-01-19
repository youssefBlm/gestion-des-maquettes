#include "Semestre.h"

Semestre::Semestre() {}

Semestre::~Semestre() {

	for(int i=0;i<TypesUE.size();i+=1) {

		delete TypesUE[i];
	}
}

void Semestre::ajouterUneUE(UniteDenseignement* const& ue, int coefficientDelUE) {

	TypesUE.push_back(ue);
	coefficientsDesUE.push_back(coefficientDelUE);
}

void Semestre::supprimerUneUE() {

	TypesUE.pop_back();
	coefficientsDesUE.pop_back();
}

int Semestre::volumesHorairesTotauxDeChaqueSemestre(){

	int volumesHorairesTotaux=0;

	for(int i=0;i<TypesUE.size();i+=1) {

		volumesHorairesTotaux+=TypesUE[i]->nombresDheuresTotaux();
	}

	return volumesHorairesTotaux;
}

