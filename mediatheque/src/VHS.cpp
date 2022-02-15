#include <iostream>
#include "../include/VHS.h"

/**
 * @brief Construct a new VHS::VHS object
 * 
 */
VHS::VHS()
{
    Media();
    cout << "Entrez la durée : "; cin >> this->_duree;
    cout << "Entrez la maison de production : "; cin >> this->_maisonProd;
    this->_type = vhs_t;
}

/**
 * @brief Surcharge de l'opérateur "<<" pour affichage des informations
 * 
 * @param out 
 * @param s 
 * @return ostream& 
 */
ostream& operator<<(ostream& out, VHS s) {
    out << (Media) s;
    out << "Durée : " << s._duree << endl;
    out << "Maison de Production : " << s._maisonProd << endl;
    return out;
}