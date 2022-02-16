#ifndef ARTICLE_H
#define ARTICLE_H

#include "livre.h"
#include <string>

using namespace std;

class Article
{
    public:
        string _nom;
        Article(string name);
        friend ostream& operator<<(ostream& out, Article s);

};

#endif // ARTICLE_H