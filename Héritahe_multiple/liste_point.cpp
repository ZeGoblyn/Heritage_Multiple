#include "liste_point.h"
#include "Liste.h"
#include "Point.h"

liste_point::liste_point() : liste(), point()
{

}


point* liste_point::premier()
{
    element* elem = this->debut;
    return static_cast<point*>(elem->contenu);          //Pointeur vers les valeures 'point' de l'�l�ment
}

point* liste_point::prochain()
{

    return static_cast<point*>(liste::prochain());      //Pointeur vers les valeures 'point' de l'�l�ment
}

void liste_point::affiche() 
{
    point* adr = this->premier();                       //r�cup�ration de l'adresse du premier �l�ment
    adr->affiche();                                     //affichage de l'�l�ment
    while (!this->fini())                               //Tant que la boucle du 'void fini' est en cours
    {
        adr = this->prochain();                         //Adresse du prochain �l�ment
        adr->affiche();                                 //Affichage de l'�l�ment
    }
}
