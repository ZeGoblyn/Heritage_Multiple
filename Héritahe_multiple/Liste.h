#pragma once
#include<iostream>

using namespace std;


struct element {
    element* suivant = nullptr;
    void* contenu = nullptr;
};

class liste
{
protected:
    element* debut;
    int marqueur;

public:
    liste();
    ~liste();

    void ajoute(void*);
    void* premier();
    void* prochain();

    int fini();
};
