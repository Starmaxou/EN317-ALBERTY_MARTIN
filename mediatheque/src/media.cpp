#include <iostream>
#include "../include/media.h"

Media::Media()
{
    cout << "-- Création d'un média --" << endl;
    cout << "Entrez l'auteur : ";
    cin >> this->_auteur;

    this->_status = IN; //Création du média, présent par défaut
}

Media::Media(status_media_t status, string auteur)
{
    this->_auteur = auteur;
    this->_status = status;
}

/*bool Media::recherche(string search) {
    if (_auteur.find(search) != -1)
        return true;
    else
        return false;
}*/

ostream& operator<<(ostream& out, Media & s) {
    s.getInfo(out);
    return out;
}

ostream& Media::getInfo(ostream& out){
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
    return out;
}