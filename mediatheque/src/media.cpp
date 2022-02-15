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