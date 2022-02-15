#include <iostream>
#include "../include/VHS.h"

VHS::VHS()
{
    Media();
    cout << "Entrez la durée : "; cin >> this->_duree;
    cout << "Entrez la maison de production : "; cin >> this->_maisonProd;
}