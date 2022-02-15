#include <iostream>
#include "../include/CD.h"

/**
 * @brief Construct a new CD::CD object
 * 
 */
CD::CD()
    :DVD()
{
    cout << "Entrez le titre : "; cin >> this->_titre;
    this->_type = cd_t;
}

/**
 * @brief Surcharge de l'opérateur pour 
 * 
 * @param out 
 * @param s 
 * @return ostream& 
 */
ostream& operator<<(ostream& out, CD s) {
    out << (DVD) s;
    out << "Titre du CD : " << s._titre << endl;
    return out;
}