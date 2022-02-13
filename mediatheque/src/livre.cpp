#include "../include/livre.h"

Livre::Livre(string auteur, string titre, string collection, int annee, int nbPage, string resume)
    : Media(IN, auteur)
{
    this->_titre = titre;
    this->_collection = collection;
    this->_annee = _annee;
    this->_nbPage = nbPage;
    this->_resume = resume;
}
