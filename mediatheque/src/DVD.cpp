#include <iostream>
#include "../include/DVD.h"

/**
 * @brief Construct a new DVD::DVD object
 * 
 */
DVD::DVD()
    :VHS()
{
    cout << "Entrez le nombre de piste : "; cin >> this->_nbPiste;
}

/**
 * @brief Surcharge de l'opérateur "<<" pour affichage des informations
 * 
 * @param out 
 * @param s 
 * @return ostream& 
 */
ostream& operator<<(ostream& out, DVD s) {
    out << (VHS) s;
    out << "Nb de Piste : " << s._nbPiste << endl;
    return out;
}