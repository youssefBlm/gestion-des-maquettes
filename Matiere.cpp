#include "Matiere.h"

Matiere:: Matiere(){}

Matiere::Matiere(const Matiere& mat) :
    d_code{mat.d_code},
    d_intitule{mat.d_intitule},
    d_nombreDheuresDeCours{mat.d_nombreDheuresDeCours},
    d_nombreDheuresDeTD{mat.d_nombreDheuresDeTD},
    d_nombreDheuresDeTP{mat.d_nombreDheuresDeTP}
    {}


Matiere:: ~Matiere(){}

Matiere::  Matiere(std::string code, std::string intitule,int nombreDheuresDeCours,int nombreDheuresDeTD,int nombreDheuresDeTP):
    d_code{code},
    d_intitule{intitule},
    d_nombreDheuresDeCours{nombreDheuresDeCours},
    d_nombreDheuresDeTD{nombreDheuresDeTD},
    d_nombreDheuresDeTP{nombreDheuresDeTP}
    {}

int Matiere:: nombresDheuresTotalDuneMatiere(){
    return d_nombreDheuresDeCours+d_nombreDheuresDeTD+d_nombreDheuresDeTP;
}

int Matiere::nombreDheuresDeCours(){
    return d_nombreDheuresDeCours;
}

int Matiere::nombreDheuresDeTD(){
    return d_nombreDheuresDeTD;
}

int Matiere:: nombreDheuresDeTP(){
    return d_nombreDheuresDeTP;
}

void Matiere::print(std::/*i*/ostream& o) {
    o<<"Code de la matière : ";
	o<<d_code;
	o<<"\n Intitulé de la matière : ";
	o<<d_intitule;
	o<<"\n Nombre d'heures total : ";
	o<<nombresDheuresTotalDuneMatiere();
	o<<"\n Nombre d'heures de cours : ";
	o<<d_nombreDheuresDeCours;
	o<<"\n Nombre d'heures de TD : ";
	o<<d_nombreDheuresDeTD;
	o<<"\n Nobre d'heures de TP : ";
	o<<d_nombreDheuresDeTP;
	o<<std::endl;
}

std::string Matiere:: intitule(){
    return d_intitule;
}

std::string Matiere:: code(){
    return d_code;
}
