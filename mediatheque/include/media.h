#ifndef MEDIA_H
#define MEDIA_H

#include <string>

#include "../include/ressourceNum.h"

class Media
{
    private:
        std::string _auteur;
        int _status; // Status Reverser, Emprunter, Rendu

    public:
        Media(std::string auteur, int status);
        Media();
};


#endif // MEDIA_H