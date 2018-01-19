#include <vector>
#include <iostream>
#include "Matiere.h"
#include "UniteDenseignement.h"
#include "Semestre.h"
#include "Annee.h"
#include "Licence.h"

using namespace std;

void afficherMenu() {

	cout<<"Menu Principal\n";
	cout<<"(1) : Ajouter une matière\n";
	cout<<"(2) : Ajouter une UE\n";
	cout<<"(3) : Ajouter un semestre\n";
	cout<<"(4) : Ajouter une annee\n";
	cout<<"(5) : Ajouter une licence\n";
	cout<<"(6) : Afficher la liste des matieres\n";
	cout<<"(9) : Quitter\n";

}

Matiere& ajoutMatiere() {

	cout<<"Veuillez donner le code de la matière : ";
	string code;
	cin>>code;
	cout<<"Veuillez donner l'intitulé de la matière : ";
	string intitule;
	cin>>intitule;
	cout<<"Veuillez donner le nombre d'heures de cours de la matière : ";
	int nbc;
	cin>>nbc;
	cout<<"Veuillez donner le nombre d'heures de TD de la matière : ";
	int nbTD;
	cin>>nbTD;
	cout<<"Veuillez donner le nombre d'heures de TP de la matière : ";
	int nbTP;
	cin>>nbTP;
	cout<<endl;

	Matiere matiere(code,intitule,nbc,nbTD,nbTP);


	return matiere;
}

UniteDenseignement& ajouterUneUE() {
    UniteDenseignement ue;
	cout<<"Veuillez donner le code de l'UE : ";
	string code;
	cin>>code;
	cout<<"\nVeuillez donner l'intitulé de l'UE : ";
	string intitule;
	cin>>intitule;
	cout<<"\nVeuillez donner le nombres de crédits ECTS : ";
	int credits;
	cin>>credits;

    cout<<"\nVoulez-vous y ajouter une matière ? oui:o/non:n : ";
	char rep;
	cin>>rep;
    if (rep!='n'){
        cout<<"\nVeuillez donner le nombre d'heures de cours de l'UE : ";
        int nbc;
        cin>>nbc;
        cout<<"\nVeuillez donner le nombre d'heures de TD de l'UE : ";
        int nbTD;
        cin>>nbTD;
        cout<<"\nVeuillez donner le nombre d'heures de TP de l'UE : ";
        int nbTP;
        cin>>nbTP;
        UniteDenseignement ue(code,intitule,credits,nbc,nbTD,nbTP);
    }
    else
    {
     while(rep!='n') {

		if(rep=='y') {
            cout<<"\nVeuillez donner le nombre d'heures de cours de l'UE : ";
            int nbc;
            cin>>nbc;
            cout<<"\nVeuillez donner le nombre d'heures de TD de l'UE : ";
            int nbTD;
            cin>>nbTD;
            cout<<"\nVeuillez donner le nombre d'heures de TP de l'UE : ";
            int nbTP;
            cin>>nbTP;
            UniteDenseignement ue(code,intitule,credits,nbc,nbTD,nbTP);
			ue.ajouterUneMatiere(&ajoutMatiere());
		}
		cout<<"\nVoulez-vous y ajouter une matière ? oui:o/non:n  : ";
		char rep;
		cin>>rep;
        cout<<endl;
	}
    }
	return ue;
}

Semestre& ajoutSemestre() {

	cout<<"Veuillez d'abord créer les UE le composant : \n";
	Semestre sem;
	cout<<"Veuillez donner le coefficient de l'UE : ";
	int coef;
	cin>>coef;
	cout<<endl;
	cout<<"Création de l'UE : \n";
	sem.ajouterUneUE(&ajouterUneUE(),coef);

	cout<<"Ajouter une autre UE ? y/n : ";
	char choix;
	cin>>choix;

}

Annee& ajoutAnnee(){

}

Licence& ajoutLicence(){
}

int main() {

	vector<Matiere*> liste_matieres;
	vector<UniteDenseignement*> liste_UEs;
	vector<Semestre*> liste_semestres;
	vector<Annee*> liste_annees;
	vector<Licence*> liste_licences;
    afficherMenu();
	int choix;
	cin>>choix;
	while(choix!=9) {

		switch(choix) {

			case 1 :
			    {

			        liste_matieres.push_back(&ajoutMatiere());

                    break;
			    }


			case 2 :
				liste_UEs.push_back(&ajouterUneUE());
				break;
			case 3 :
				liste_semestres.push_back(&ajoutSemestre());
				break;
			case 4 :
				liste_annees.push_back(&ajoutAnnee());
				break;
			case 5 :
				liste_licences.push_back(&ajoutLicence());
				break;
            case 6 :

                for(int i=0;i<liste_matieres.size();i+=1)
                {
                    liste_matieres[i]->print(std::cout);
                    std::cout<<"\n";
                    std::cout<<"==============================\n";
                }
		}

		afficherMenu();
		cin>>choix;

	}

	cout<<"Au revoir\n";

}
