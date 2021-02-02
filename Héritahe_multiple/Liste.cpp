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
    element* elem = new element;    //Cr�ation d'un nouvel �l�ment
    elem->suivant = this->debut;    //Pointe vers le d�but de la chaine
    elem->contenu = x;              //Insertion du contenu
    this->debut = elem;             //Implantation de l'�l�ment en d�but de chaine
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
        if (elem->suivant == nullptr)       //Tant que i est inferieur au marqueur (compte des �l�ments), le "passage" entre �l�ments se fixe sur le dernier
        {
            return elem->contenu;
        }

            elem = elem->suivant;               //Sinon passage � l'�l�ment suivant
            i++;
        
    }
    return elem->contenu;                   //Une fois arriver au bout du compte, l'�l�ment pointe vers son contenu
}

int liste::fini()
{
    int i = 0;
    element* elem = this->debut;            
    while (elem->suivant != nullptr)    //Tant que l'�l�ment suivant n'est pas NULL, le compteur va continuer de ce d�placer jusqu'a arriver � la fin
    {
        elem = elem->suivant;
        i++;
    }
    return (marqueur == i);             //Une fois finit renvois du compteur �gale aux nombre d'�l�ments
}