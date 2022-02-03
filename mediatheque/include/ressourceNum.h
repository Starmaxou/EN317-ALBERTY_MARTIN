#ifndef RESSOURCENUM_H
#define RESSOURCENUM_H

#include <string>
#include "media.h"

using namespace std;

class RessourceNum : public Media
{
    public:
        RessourceNum(string auteur, string nom, string type, int taille, string url);

        string _type;
        int _taille;
        string _nom;
        string _url;

    
};

#endif // RESSOURCENUM_H