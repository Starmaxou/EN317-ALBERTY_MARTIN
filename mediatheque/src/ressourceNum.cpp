#include <string>
#include "../include/ressourceNum.h"

RessourceNum::RessourceNum(std::string type, int taille, std::string nom, std::string url)
{
    this->_type = type;
    this->_nom = nom;
    this->_taille = taille;
    this->_url = url;
}