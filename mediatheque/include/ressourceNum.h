#ifndef RESSOURCENUM_H
#define RESSOURCENUM_H

#include <string>

class RessourceNum
{
    public:
        std::string _type;
        int _taille;
        std::string _nom;
        std::string _url;

        RessourceNum(std::string type, int taille, std::string nom, std::string url);

};

#endif // RESSOURCENUM_H