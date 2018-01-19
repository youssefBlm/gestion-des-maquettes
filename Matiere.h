#ifndef MATIERE_H
#define MATIERE_H
#include <iostream>

class Matiere
{
    public:
        Matiere();
        Matiere(const Matiere& mat);
        Matiere(std::string code,std::string intitule,int nombreDheuresDeCours,int nombreDheuresDeTD,int nombreDheuresDeTP);
        virtual ~Matiere();
        int nombresDheuresTotalDuneMatiere();
        int nombreDheuresDeCours();
        int nombreDheuresDeTD();
        int nombreDheuresDeTP();
        virtual void print(std::/*i*/ostream& o);
        std::string intitule();
        std::string code();

    private:
        std::string d_code;
        std::string d_intitule;
        int d_nombreDheuresDeCours;
        int d_nombreDheuresDeTD;
        int d_nombreDheuresDeTP;
        };

#endif // MATIERE_H
