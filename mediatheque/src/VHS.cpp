#include <iostream>
#include "../include/VHS.h"

VHS::VHS()
{
    Media();
    cout << "Entrez la durée : "; cin >> this->_duree;
    cout << "Entrez la maison de production : "; cin >> this->_maisonProd;
}

ostream& operator<<(ostream& out, VHS s) {
    out << (Media) s;
    out << "Durée : " << s._duree << endl;
    out << "Maison de Production : " << s._maisonProd << endl;
}