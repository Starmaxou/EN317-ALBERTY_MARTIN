#include "../include/revue.h"

/**
 * @brief Construct a new Revue:: Revue object
 * 
 */
Revue::Revue()
    :Livre()
{
    cout << "Entrez l'éditeur : "; cin >> this->_editeur;
    cout << "Entrez le nombre d'article : "; cin >> this->_nbArticle;
}

/**
 * @brief Surcharge de l'opérateur "<<" pour affichage des informations
 * 
 * @param out 
 * @param s 
 * @return ostream& 
 */
ostream& operator<<(ostream& out, Revue s) {

    out << (Livre) s;
    out << "Editeur : " << s._editeur << endl;
    out << "Nb Article : " << s._nbArticle << endl;
    out << "Liste d'article : " << endl;
    for (int i = 0; i < s._nbArticle; i++) {
        out << "Article numéro " << i << endl;
        out << s._listArticle[i] << endl;
    }
    return out;
}
