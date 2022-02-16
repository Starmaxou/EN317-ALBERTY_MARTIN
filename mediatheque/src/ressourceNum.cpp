#include <iostream>
#include "../include/ressourceNum.h"

RessourceNum::RessourceNum()
    :Media()
{
    cout << "Entrez le type : "; cin >> this->_type;
    cout << "Entrez le nom : "; cin >> this->_nom;
    cout << "Entrez la taille : "; cin >> this->_taille;
    cout << "Entrez l'url : "; cin >> this->_url;
}

RessourceNum::RessourceNum(string auteur, string nom, string type, int taille, string url)
    : Media(IN, auteur)
{
    this->_type = type;
    this->_nom = nom;
    this->_taille = taille;
    this->_url = url;
}

ostream& RessourceNum::getInfo(ostream& out) {
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
    out << "Type de ressource : " << this->_type << endl;
    out << "Taille (en octet) : " << this->_taille << endl;
    out << "Nom : " << this->_nom << endl;
    out << "URL : " << this->_url << endl;
    return out;
}

bool RessourceNum::recherche (string search) {
    if (_type.find(search) != -1)
        return true;
    else if (to_string(_taille).find(search) != -1)
        return true;
    else if (_nom.find(search) != -1)
        return true;
    else if (_url.find(search) != -1)
        return true;
    else if (_auteur.find(search) != -1)
        return true;
    else
        return false;
}