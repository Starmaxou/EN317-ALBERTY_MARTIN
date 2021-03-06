#ifndef REVUE_H
#define REVUE_H

#include <vector>
#include <string>

#include "livre.h"
#include "article.h"

using namespace std;

class Revue : public Livre
{
    protected:
        string _editeur;
        int _nbArticle;
        vector<Article> _listArticle;
        
    public:
        Revue();
        Revue(bool t);
        ostream& getInfo(ostream& out);
        bool recherche (string search);
};

#endif // REVUE_H