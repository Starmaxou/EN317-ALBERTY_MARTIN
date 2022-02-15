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

void Mediatheque::test_command() {

  cout << "Test de la commande" << endl << endl;
  
  // Command to test

}
