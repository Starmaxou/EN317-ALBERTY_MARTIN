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

/**
 * @brief Surcharge de l'opérateur "<<"
 * 
 * @param out 
 * @param s 
 * @return ostream& 
 */
ostream& operator<<(ostream& out, Media s) {
    out << "Auteur : " << s._auteur << endl;
    out << "Status : ";
    switch (s._status) {
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