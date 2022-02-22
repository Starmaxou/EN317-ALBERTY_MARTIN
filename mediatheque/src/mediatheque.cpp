#include <iostream>
#include "../include/mediatheque.h"

int ID_generate = 0;

Mediatheque::Mediatheque()
{
  //cout << "[DEBUG] - " << __PRETTY_FUNCTION__ << endl;
}

Mediatheque::~Mediatheque()
{
  
}

int Mediatheque::addMedia(Media * mediaAdd) {
  mediaAdd->_id = ID_generate;
  _ressource.push_back(mediaAdd);

  ID_generate++;

  return 0;
}

int Mediatheque::searchMedia() {
  string search;
  cout << "Recherche à effectuer : " << endl;
  cin >> search;
  
  if (_search_mode == false)
    _save_ressource = _ressource;
    
  _search_mode = true;
  
  vector<Media *> temp = _ressource;

  _ressource.clear();

  for (int i = 0; i < temp.size() ; i++) {
    if (temp[i]->recherche(search) == true) {
      _ressource.push_back(temp[i]);
      cout << *(temp[i]);
    }
  }

  temp.clear();

  return 0;
}

int Mediatheque::clearMedia() {
  _search_mode = false;
  _ressource = _save_ressource;
  _save_ressource.clear();

  return 0;
}

int Mediatheque::showID(int ID_search) {
  for (int i = 0; i < _ressource.size() ; i++) {
    if (_ressource[i]->_id == ID_search) {
      cout << *(_ressource[i]);
      return 0;
    }
  }
  cout << "Cet ID n'est pas présent dans la base de donnée" << endl; 

  return 0;
}

int Mediatheque::listMedia() {

    for (int i = 0; i < _ressource.size() ; i++) {
      _ressource[i]->printList();
    }

  return 0;
}