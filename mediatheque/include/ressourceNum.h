#ifndef RESSOURCENUM_H
#define RESSOURCENUM_H

#include <string>
#include "media.h"

using namespace std;

class RessourceNum : public Media
{
    protected:
        string _type;
        int _taille;
        string _nom;
        string _url;

    public:
        RessourceNum();
        RessourceNum(string auteur, string nom, string type, int taille, string url);
        friend ostream& operator<<(ostream& out, RessourceNum s);
};

#endif // RESSOURCENUM_H