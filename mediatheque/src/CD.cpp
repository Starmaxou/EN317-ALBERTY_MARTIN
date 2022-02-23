#include <iostream>
#include <fstream>
#include <algorithm>
#include "../include/CD.h"

CD::CD()
    :DVD()
{
    cout << "Entrez le titre : "; cin >> this->_titre;
}


ostream& operator<<(ostream& out, CD s) {
    
    return out;
}

bool CD::recherche (string search) {
    /*if (_auteur.find(search) != -1)
        return true; 
    else if (_maisonProd.find(search) != -1)
        return true;
    else if (to_string(_duree).find(search) != -1)
        return true;
    else if (to_string(_nbPiste).find(search) != -1)
        return true;
    else*/
    if (_titre.find(search) != -1)
        return true;
    else
        return DVD::recherche(search);
}

ostream& CD::getInfo(ostream& out) {
    out << "-- CD -- " << endl;
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
    out << "Nb de Piste : " << this->_nbPiste << endl;
    out << "Titre du CD : " << this->_titre << endl;
    return out;
}