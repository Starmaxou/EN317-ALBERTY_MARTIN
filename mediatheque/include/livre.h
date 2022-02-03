#ifndef LIVRE_H
#define LIVRE_H

#include "media.h"
#include <string>

using namespace std;

class Livre : public Media
{
    public:
        string _titre;
        string _collection;
        int _annee; // annee de publication
        int _nbPage; // Nombre de page        
        string _resume;

        Livre(status_media_t status, string auteur, string titre, string collection, int annee, int anbPage,  string resume);
};

#endif // LIBRE_H