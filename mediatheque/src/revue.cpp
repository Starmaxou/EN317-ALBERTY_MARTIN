#include "../include/revue.h"

Revue::Revue()
    :Livre()
{
    cout << "Entrez l'éditeur : "; cin >> this->_editeur;
    cout << "Entrez le nombre d'article : "; cin >> this->_nbArticle;
}

ostream& Revue::getInfo(ostream& out) {

    out << "Auteur : " << this->_auteur << endl;
    out << "Status : ";
    switch (this->_status) {
        case IN :
            out << "Accessible";
            break;
        case HOLD :
            out << "Reserver";
            break;
        case OUT :
            out << "Emprunté";
            break;
        default :
            out << "Inconnu";
            break;
    }
    out << endl;
    out << "Titre : " << this->_titre << endl;
    out << "Collection : " << this->_collection << endl;
    out << "Annee : " << this->_annee << endl;
    out << "Nb de Pages : " << this->_nbPage << endl;
    out << "Résumé : " << endl << this->_resume << endl;
    out << "Editeur : " << this->_editeur << endl;
    out << "Nb Article : " << this->_nbArticle << endl;
    out << "Liste d'article : " << endl;
    for (int i = 0; i < this->_nbArticle; i++) {
        out << "Article numéro " << i << endl;
        out << this->_listArticle[i] << endl;
    }
    return out;
}

bool Revue::recherche (string search) {
    if (_auteur.find(search) != -1)
        return true;
    else if (_titre.find(search) != -1)
        return true;
    else if (to_string(this->_annee).find(search) != -1)
        return true;
    else if (to_string(_nbPage).find(search) != -1)
        return true;
    else if (_resume.find(search) != -1)
        return true;
    else if (to_string(_nbArticle).find(search) != -1)
        return true;
    else {
        for (int i = 0; i < _listArticle.size(); i++) {
            if (_listArticle[i]._nom.find(search) != -1) {
                return true;
            }
        }
    }
    return false;
}
