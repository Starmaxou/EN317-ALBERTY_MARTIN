#include "../include/revue.h"

Revue::Revue()
    :Livre()
{
    cout << "Entrez l'éditeur : "; cin >> this->_editeur;
    cout << "Entrez le nombre d'article : "; cin >> this->_nbArticle;
}
