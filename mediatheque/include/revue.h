#ifndef REVUE_H
#define REVUE_H

#include <vector>
#include <string>

#include "livre.h"
#include "article.h"

class Revue : public Livre
{
    protected:
        std::string _editeur;
        int _nbArticle;
        std::vector<Article> _listArticle;
        
    public:
        Revue();

};

#endif // REVUE_H