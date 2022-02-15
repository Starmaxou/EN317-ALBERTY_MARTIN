#include "../include/article.h"

/**
 * @brief Construct a new Article:: Article object
 * 
 * @param name 
 */
Article::Article(string name)
{
    this->_nom = name;
}

/**
 * @brief Surcharge de l'opérateur "<<" pour affichage des informations
 * 
 * @param out 
 * @param s 
 * @return ostream& 
 */
ostream& operator<<(ostream& out, Article s) {
    out << "Nom de l'article : " << s._nom << endl;
    return out;
}