#include "../include/article.h"

Article::Article(string name)
{
    this->_nom = name;
}

ostream& operator<<(ostream& out, Article s) {
    out << "Nom de l'article : " << s._nom << endl;
    return out;
}