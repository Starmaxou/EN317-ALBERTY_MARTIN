#include "../include/mediatheque.h"

Mediatheque::Mediatheque()
{
  //cout << "[DEBUG] - " << __PRETTY_FUNCTION__ << endl;
}

Mediatheque::~Mediatheque()
{
  
}

int Mediatheque::addMedia(Media * mediaAdd) {
  _ressource.push_back(mediaAdd);

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

  return 0;
}
