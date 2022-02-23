#include <iostream>
#include "../include/VHS.h"

VHS::VHS():Media()
{
    cout << "Entrez la durée : "; cin >> this->_duree;
    cout << "Entrez la maison de production : "; cin >> this->_maisonProd;
}

ostream& VHS::getInfo(ostream& out) {
    out << "-- VHS -- " << endl;
    out << "Auteur : " << this->_auteur << endl;
    out << "Status : ";
    switch (this->_status) {
        case IN :
            out << "Accessible";
            break;
        case HOLD :
            out << "Reserver";
            break;
        case OUT :
            out << "Emprunté";
            break;
        default :
            out << "Inconnu";
            break;
    }
    out << endl;
    out << "ID : " << _id;
    out << endl;
    out << "Durée : " << this->_duree << endl;
    out << "Maison de Production : " << this->_maisonProd << endl;
    return out;
}

bool VHS::recherche(string search) {
    if (_maisonProd.find(search) != -1)
        return true;
    else if (to_string(_duree).find(search) != -1)
        return true;
    else
        return Media::recherche(search);
}