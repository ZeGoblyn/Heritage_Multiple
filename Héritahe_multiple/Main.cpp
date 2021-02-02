#include <iostream>
#include "stdio.h"
#include "A.h"
#include "B.h"
#include "C.h"
#include "A2.h"
#include "B2.h"
#include "C2.h"
#include "D2.h"
#include "Liste.h"
#include "Point.h"
#include "Liste_point.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//----------------------------------------------------------
	//109
	C c1;
	C c2(10, 11, 12, 5.0);

	cout << "\n";

	/*
	** construction objet B : 1 0
	** construction objet A : 1 1	->diff
	** construction C : 3 3
	** construction objet B : 1 5	->diff
	** construction objet A : 10 1	->diff
	** construction C : 12 21
	*/

	//----------------------------------------------------------
	//110
	/*
	** construction objet B : 1 0
	** construction objet A : 2 1	->diff
	** construction C : 3 3
	** construction objet B : 1 5	->diff
	** construction objet A : 2 1	->diff
	** construction C : 12 21
	*/

	//----------------------------------------------------------
	//111
	/*
	** construction objet B : 1 0
	** construction objet A : 2 1	->diff
	** construction C : 3 3
	** construction objet B : 1 0	->diff
	** construction objet A : 2 1	->diff
	** construction C : 12 21
	*/

	//Sans précision dans le constructeur, une sous classe multiple va prendre les valeur 
	//par défaut de ses constructeurs parents (appel implicite) (non renseigner dans son propre constructeur)

	//----------------------------------------------------------
	//112
	D2 d(10, 20, 5.0);

	cout << "\n";

	/*
	$$construction objet A21
	$$construction objet B 5
	$$construction objet A221
	$$construction objet C210
	$$construction objet D220
	*/

	//----------------------------------------------------------
	//113

	/*
	$$construction objet A221
	$$construction objet B 5
	$$construction objet C210
	$$construction objet D220
	*/

	//----------------------------------------------------------
	//114

	liste_point lpt;
	point p1(2, 4);

	cout << "Première version de la chaine \n";

	lpt.ajoute(&p1);	//Ajout du point à la liste de point
	lpt.affiche();

	cout << "----------------------------- \n";
	cout << "Deuxième version de la chaine \n";

	point p2(420, 69);
	lpt.ajoute(&p2);
	lpt.affiche();


	return 0;
}