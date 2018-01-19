#ifndef DEF_SEMESTRE
#define DEF_SEMESTRE

#include <vector>
#include "UniteDenseignement.h"

class Semestre {

	private :
	std::vector<UniteDenseignement*> TypesUE;
	std::vector<int> coefficientsDesUE;

	public :
	Semestre();
	~Semestre();
	void ajouterUneUE(UniteDenseignement* const& ue, int coefficientDelUE);
	void supprimerUneUE();
	int volumesHorairesTotauxDeChaqueSemestre();
};
#endif
