#include <iostream>
#include "../include/media.h"

/**
 * @brief Construct a new Media:: Media object
 * 
 */
Media::Media()
{
    cout << "-- Création d'un média --" << endl;
    cout << "Entrez l'auteur : ";
    cin >> this->_auteur;

    this->_status = IN; //Création du média, présent par défaut
}

/**
 * @brief Construct a new Media:: Media object
 * 
 * @param status 
 * @param auteur 
 */
Media::Media(status_media_t status, string auteur)
{
    this->_auteur = auteur;
    this->_status = status;
}

int Media::getID()
{
    return this->_id;
}

/**
 * @brief Surcharge de l'opérateur "<<"
 * 
 * @param out 
 * @param s 
 * @return ostream& 
 */
ostream& operator<<(ostream& out, Media s) {
    out << s.afficheInfo();
    return out;
}

/**
 * @brief Affichage des informations
 * 
 */
string Media::afficheInfo() const
{
    string out, stat;

    switch (this->_status) {
        case IN :
            stat = "Accessible";
            break;
        case HOLD :
            stat = "Reserver";
            break;
        case OUT :
            stat = "Emprunté";
            break;
        default :
            stat = "Inconnu";
            break;
    }

    out = "Auteur : " + this->_auteur + '\n' + "Status : " + stat + '\n';
        //"Type : " << this->_type +  '\n';

    return out;
}