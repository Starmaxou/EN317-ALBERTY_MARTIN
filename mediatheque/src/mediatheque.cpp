#include <iostream>
#include <fstream>
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

int Mediatheque::deleteID(int ID_delete) {
  for (int i = 0; i < _ressource.size() ; i++) {
    if (_ressource[i]->_id == ID_delete) {
      _ressource.erase(_ressource.begin() + i);
      cout << "L'ID " << i << " a bien été supprimé !" << endl;
      return 0;
    }
  }
  cout << "ID non trouvé" << endl;

  return 0;
}

int Mediatheque::listMedia() {

    for (int i = 0; i < _ressource.size() ; i++) {
      _ressource[i]->printList();
    }

  return 0;
}


int Mediatheque::resetRessource() {
  _ressource.clear();
  return 0;
}

int Mediatheque::saveToFile(string fileName) {
  ofstream out (fileName + ".txt");
  std::streambuf *coutbuf = std::cout.rdbuf(); //sauvegarde du buffer cout
  std::cout.rdbuf(out.rdbuf()); //redirection de cout vers le fichier!

  for (int i = 0; i < _ressource.size() ; i++) {
      this->showID(i);
    }
  std::cout.rdbuf(coutbuf); //Reset de cout vers la sortie standart
  out.close(); //Fermeture du fichier
  return 0;
}

int Mediatheque::reserveMedia(int id) {
  for (int i = 0; i < _ressource.size() ; i++) {
    if (_ressource[i]->_id == id) {
      if(!_ressource[i]->changeStatus(HOLD))
      {
        return EXIT_SUCCESS;
      } else {
        return EXIT_FAILURE;
      }
      
    }
  }
  cout << "Cet ID n'est pas présent dans la base de donnée" << endl; 
  return EXIT_FAILURE;
}

int Mediatheque::borrowMedia(int id) {
  for (int i = 0; i < _ressource.size() ; i++) {
    if (_ressource[i]->_id == id) {
      if(!_ressource[i]->changeStatus(OUT))
      {
        return EXIT_SUCCESS;
      } else {
        return EXIT_FAILURE;
      }
      
    }
  }
  cout << "Cet ID n'est pas présent dans la base de donnée" << endl; 
  return EXIT_FAILURE;
}

int Mediatheque::returnMedia(int id) {
  for (int i = 0; i < _ressource.size() ; i++) {
    if (_ressource[i]->_id == id) {
      if(!_ressource[i]->changeStatus(IN))
      {
        return EXIT_SUCCESS;
      } else {
        return EXIT_FAILURE;
      }
      
    }
  }
  cout << "Cet ID n'est pas présent dans la base de donnée" << endl; 
  return EXIT_FAILURE;
}