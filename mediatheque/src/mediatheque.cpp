#include "../include/mediatheque.h"

/**
 * @brief Construct a new Mediatheque:: Mediatheque object
 * 
 */
Mediatheque::Mediatheque()
{
  cout << "[DEBUG] - " << __PRETTY_FUNCTION__ << endl;
}

/**
 * @brief Destroy the Mediatheque:: Mediatheque object
 * 
 */
Mediatheque::~Mediatheque()
{
  
}

int Mediatheque::addMedia(Media mediaAdd) {
  _ressource.push_back(mediaAdd);

  return 0;
}

/**
 * @brief Affiche les informations d'un média
 * 
 * @return int
 */
int Mediatheque::showMedia()
{
  int user_id;
  cout << "Entrez l'ID d'un média : "; cin >> user_id;

  for (int i = 0 ; i < _ressource.size() ; i++)
  {
    if (_ressource[i].getID() == user_id)
    {
        cout << _ressource[i];
    }
    return EXIT_SUCCESS;
  }

  //L'ID n'existe pas
  return EXIT_FAILURE;
}

void Mediatheque::test_command() {

  cout << "Test de la commande" << endl << endl;
  
  // Command to test

}
