#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>

#include "media.h"

using namespace std;

class Livre : public Media
{
    protected:
        string _titre;
        string _collection;
        int _annee; // annee de publication
        int _nbPage; // Nombre de page        
        string _resume;     

    public:
        Livre();  
        Livre(string auteur, string titre, string collection, int annee, int anbPage, string resume);

       
        virtual ostream& getInfo(ostream& out);
        //Methode
        virtual bool recherche(string search);
};

#endif // LIVRE_H