#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string>

//#include "ressourceNum.h"
//#include "livre.h"
//#include "VHS.h"

using namespace std;

enum status_media_t
{
    IN = 0, // Rendu, présent
    HOLD,   // Reserver
    OUT     // Emprunter
};

enum type_media_t
{
    LIVRE = 0,
    REVUE,
    CD,
    VHS,
    DVD,
    RESNUM
};

class Media
{
    protected:
        string _auteur;
        status_media_t _status; // Status Reserver, Emprunter, Rendu

    public:
        Media(status_media_t status, string auteur);
        virtual ~Media(){};
};


#endif // MEDIA_H