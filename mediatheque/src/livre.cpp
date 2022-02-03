#include <iostream>
#include "../include/livre.h"

Livre::Livre(status_media_t status, string auteur, string titre, string collection, int annee, int nbPage, string resume)
    :Media(auteur, status)
{
    this->_titre = titre;
    this->_collection = collection;
    this->_annee = _annee;
    this->_nbPage = nbPage;
    this->_resume = resume;
}
