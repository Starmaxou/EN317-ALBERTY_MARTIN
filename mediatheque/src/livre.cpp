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
    out << (Media) s;
    out << "Titre : " << s._titre << endl;
    out << "Collection : " << s._collection << endl;
    out << "Annee : " << s._annee << endl;
    out << "Nb de Pages : " << s._nbPage << endl;
    out << "Résumé : " << endl << s._resume << endl << endl;

    return out;
}