#ifndef UNITEDENSEIGNEMENT_H
#define UNITEDENSEIGNEMENT_H

#include <iostream>
#include <vector>
#include "Matiere.h"


class UniteDenseignement: public Matiere
{
    private :
	int d_credits;
	std::vector <Matiere*> ListesDesMatieres;

	public :
    UniteDenseignement();
    UniteDenseignement(std::string code, std::string intitule,int credits);
	UniteDenseignement(std::string code, std::string intitule, int nombreDheuresDeCours, int nombreDheuresDeTD, int nombreDheuresDeTP, int credits);
    ~UniteDenseignement();
	void ajouterUneMatiere(Matiere* mat);
	void supprimerUneMatiere();
	void supprimerMatiere(int indice);
	int nombresDheuresTotaux ();
    void print(std::iostream& o);
};

#endif // UNITEDENSEIGNEMENT_H
