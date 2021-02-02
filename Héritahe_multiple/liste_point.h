#pragma once
#include<iostream>
#include "Liste.h"
#include "Point.h"

using namespace std;

class liste_point : public liste, public point 
{

public:
    liste_point();
    void affiche();
    point* premier();           //Ajout de fonction similaire afin de compléter l'intégration
    point* prochain();

};