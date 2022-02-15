#include "../include/livre.h"

/**
 * @brief Construct a new Livre:: Livre object
 * 
 */
Livre::Livre()
    :Media()
{
    cout << "Entrez le titre : "; cin >> this->_titre;
    cout << "Entrez la collection : "; cin >> this->_collection;
    cout << "Entrez l'année : "; cin >> this->_annee;
    cout << "Entrez le nombre de page : "; cin >> this->_nbPage;
    cout << "Entrez un résumé (facultatif) : "; cin >> this->_resume;
    cout << endl;
    this->_type = livre_t;
}

/**
 * @brief Construct a new Livre:: Livre object
 * 
 * @param auteur 
 * @param titre 
 * @param collection 
 * @param annee 
 * @param nbPage 
 * @param resume 
 */
Livre::Livre(string auteur, string titre, string collection, int annee, int nbPage, string resume)
    : Media(IN, auteur)
{
    this->_titre = titre;
    this->_collection = collection;
    this->_annee = annee;
    this->_nbPage = nbPage;
    this->_resume = resume;
}

/**
 * @brief Surcharge de l'opérateur "<<" pour affichage des informations
 * 
 * @param out 
 * @param s 
 * @return ostream& 
 */
ostream& operator<<(ostream& out, Livre s) {
    out << s.afficheInfo();
    return out;
}

/**
 * @brief Affichage des informations
 * 
 */
string Livre::afficheInfo() const
{
    string out;

    out = Media::afficheInfo() +
        "Titre : " + this->_titre + '\n' +
        "Collection : " + this->_collection + '\n' +
        "Résumé : " + '\n' + this->_resume + '\n' + '\n';

    return out;
}