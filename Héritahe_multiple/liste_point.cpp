#include "liste_point.h"
#include "Liste.h"
#include "Point.h"

liste_point::liste_point() : liste(), point()
{

}


point* liste_point::premier()
{
    element* elem = this->debut;
    return static_cast<point*>(elem->contenu);          //Pointeur vers les valeures 'point' de l'élément
}

point* liste_point::prochain()
{

    return static_cast<point*>(liste::prochain());      //Pointeur vers les valeures 'point' de l'élément
}

void liste_point::affiche() 
{
    point* adr = this->premier();                       //récupération de l'adresse du premier élément
    adr->affiche();                                     //affichage de l'élément
    while (!this->fini())                               //Tant que la boucle du 'void fini' est en cours
    {
        adr = this->prochain();                         //Adresse du prochain élément
        adr->affiche();                                 //Affichage de l'élément
    }
}
