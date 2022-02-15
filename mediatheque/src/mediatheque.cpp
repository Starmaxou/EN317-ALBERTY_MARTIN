#include <iostream>
#include "../include/mediatheque.h"

Mediatheque::Mediatheque()
{
  std::cout << "[DEBUG] - " << __PRETTY_FUNCTION__ << std::endl;
}

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
