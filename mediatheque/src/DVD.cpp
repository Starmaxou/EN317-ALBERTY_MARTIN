#include <iostream>
#include "../include/DVD.h"

DVD::DVD()
    :VHS()
{
    cout << "Entrez le nombre de piste : "; cin >> this->_nbPiste;
}


ostream& DVD::getInfo(ostream& out) {
    out << "-- DVD -- " << endl;
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
    return out;
}


bool DVD::recherche(string search) {
    if (to_string(_nbPiste).find(search) != string::npos)
        return true;
    else
        return VHS::recherche(search);
}