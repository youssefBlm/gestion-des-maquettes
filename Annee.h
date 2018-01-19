#ifndef DEF_ANNEE
#define DEF_ANNEE

#include <vector>
#include "Semestre.h"

class Annee {

	private :
        Semestre typeDeSemestre[2];

	public :
        Annee();
        Annee(Semestre& semestre1, Semestre& semestre2);
        ~Annee();
        void ModifierUnSemestre(Semestre& semestre, int indiceDuSemestre);
        Semestre& getSemestre(int indice);

};

#endif
