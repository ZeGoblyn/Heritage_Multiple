#include "Liste.h"
#include<iostream>


liste::liste() {
    this->debut = nullptr;
    marqueur = 0;
}

liste::~liste() {
    delete debut;
}

void liste::ajoute(void* x)
{
    element* elem = new element;    //Création d'un nouvel élément
    elem->suivant = this->debut;    //Pointe vers le début de la chaine
    elem->contenu = x;              //Insertion du contenu
    this->debut = elem;             //Implantation de l'élément en début de chaine
}

void* liste::premier() 
{
    this->marqueur = 0;
    return this->debut->contenu;    //Marque le contenu comme premier
}


void* liste::prochain()
{
    int i = 0;
    marqueur++;
    element* elem = this->debut;       
    while (i < marqueur)
    {
        if (elem->suivant == nullptr)       //Tant que i est inferieur au marqueur (compte des éléments), le "passage" entre éléments se fixe sur le dernier
        {
            return elem->contenu;
        }

            elem = elem->suivant;               //Sinon passage à l'élément suivant
            i++;
        
    }
    return elem->contenu;                   //Une fois arriver au bout du compte, l'élément pointe vers son contenu
}

int liste::fini()
{
    int i = 0;
    element* elem = this->debut;            
    while (elem->suivant != nullptr)    //Tant que l'élément suivant n'est pas NULL, le compteur va continuer de ce déplacer jusqu'a arriver à la fin
    {
        elem = elem->suivant;
        i++;
    }
    return (marqueur == i);             //Une fois finit renvois du compteur égale aux nombre d'éléments
}