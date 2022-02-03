#ifndef REVUE_H
#define REVUE_H

#include <vector>
#include <string>

#include "livre.h"
#include "article.h"

class Revue : public Livre
{
    public:
        std::string _editeur;
        int nbArticle;
        std::vector<Article> _listArticle;

        Revue();

};

#endif // REVUE_H