#include "unitedenseignement.h"

UniteDenseignement::UniteDenseignement()
{
    //ctor
}


UniteDenseignement::UniteDenseignement(std::string code, std::string intitule,
                                       int nombreDheuresDeCours, int nombreDheuresDeTD,
                                       int nombreDheuresDeTP, int credits) :
Matiere{code,intitule,nombreDheuresDeCours,nombreDheuresDeTD,nombreDheuresDeTP},
d_credits{credits}
{}

UniteDenseignement::~UniteDenseignement() {

	for(int i=0;i<ListesDesMatieres.size();i++) {

		delete ListesDesMatieres[i];
}

}

void UniteDenseignement::ajouterUneMatiere(Matiere* mat) {

	ListesDesMatieres.push_back(mat);
}

void UniteDenseignement::supprimerUneMatiere() {

	ListesDesMatieres.pop_back();
}

int UniteDenseignement::nombresDheuresTotaux() {

	int nombresDheuresTotaux=0;

	for(int i=0;i<ListesDesMatieres.size();i++) {
       nombresDheuresTotaux+=ListesDesMatieres[i]->nombresDheuresTotalDuneMatiere();
	}
	return nombresDheuresTotaux;
}

void UniteDenseignement::print(std::iostream& o){

	o<<"Code de l'UniteDenseignement : ";
	o<<code();
	o<<"\n Intitulé de l'UniteDenseignement : ";
	o<<intitule();
	o<<"\n Nombre d'heures totales de l'UniteDenseignement : ";
	o<<nombresDheuresTotaux();
	o<<std::endl;
	o<<"Liste des matières : \n";
	for(int i=0;i<ListesDesMatieres.size();i+=1) {

		o<<"- "+ListesDesMatieres[i]->intitule();
		o<<" : ";
		o<<ListesDesMatieres[i]->nombresDheuresTotalDuneMatiere();
		o<<" heures\n";
	}
}
