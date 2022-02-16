#include "../include/livre.h"

Livre::Livre()
    :Media()
{
    cout << "Entrez le titre : "; cin >> this->_titre;
    cout << "Entrez la collection : "; cin >> this->_collection;
    cout << "Entrez l'année : "; cin >> this->_annee;
    cout << "Entrez le nombre de page : "; cin >> this->_nbPage;
    cout << "Entrez un résumé (facultatif) : "; cin >> this->_resume;
}

Livre::Livre(string auteur, string titre, string collection, int annee, int nbPage, string resume)
    : Media(IN, auteur)
{
    this->_titre = titre;
    this->_collection = collection;
    this->_annee = annee;
    this->_nbPage = nbPage;
    this->_resume = resume;
}
ostream& Livre::getInfo(ostream& out) {
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
    out << "Résumé : " << endl << this->_resume << endl << endl;

    return out;
}

bool Livre::recherche (string search) {

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
    else
        return false;

}