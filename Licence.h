#ifndef DEF_LICENCE
#define DEF_LICENCE

#include <vector>
#include "Annee.h"

class Licence {

	private :
	Annee NiveauDetude[3];

	public :
	Licence();
	Licence(Annee& Licence1, Annee& Licence2, Annee& Licence3);
	~Licence();
	void ModifierUneAnnee(Annee& annee, int indiceDuneAnnee);
	Annee& getAnnee(int indice);
};
#endif

