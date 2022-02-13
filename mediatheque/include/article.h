#ifndef ARTICLE_H
#define ARTICLE_H

#include "livre.h"
#include <string>
using namespace std;

class Article
{
    protected:
        string _nom;

    public:
        Article(string name);
};

#endif // ARTICLE_H