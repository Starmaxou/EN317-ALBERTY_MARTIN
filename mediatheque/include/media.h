#ifndef MEDIA_H
#define MEDIA_H

#include <string>

#include "ressourceNum.h"
#include "livre.h"

enum status_media_t{
    IN = 0, // Rendu, présent
    HOLD,   // Reserver
    OUT     // Emprunter
};

class Media
{
    public:
        std::string _auteur;
        status_media_t _status; // Status Reserver, Emprunter, Rendu

        Media(std::string auteur, status_media_t status);
};


#endif // MEDIA_H