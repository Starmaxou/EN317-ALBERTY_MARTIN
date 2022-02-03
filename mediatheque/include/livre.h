#ifndef LIVRE_H
#define LIVRE_H

#include "../include/media.h"
#include <string>

class Livre : public Media
{
    private:
        int _annee; // annee de publication
        int _nbPage; // Nombre de page
        std::string _collection;
        std::string _titre;
        std::string _resume;
};

#endif // LIBRE_H