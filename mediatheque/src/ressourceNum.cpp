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

ostream& operator<<(ostream& out, RessourceNum s) {
    out << (Media) s;
    out << "Type de ressource : " << s._type << endl;
    out << "Taille (en octet) : " << s._taille << endl;
    out << "Nom : " << s._nom << endl;
    out << "URL : " << s._url << endl;
    return out;
}