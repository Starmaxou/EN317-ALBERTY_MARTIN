#include <iostream>
#include "../include/ressourceNum.h"

RessourceNum::RessourceNum(string auteur, string nom, string type, int taille, string url)
    : Media(IN, auteur)
{
    this->_type = type;
    this->_nom = nom;
    this->_taille = taille;
    this->_url = url;
}