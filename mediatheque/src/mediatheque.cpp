#include <iostream>
#include <vector>
#include "../include/mediatheque.h"
#include "../include/livre.h"
#include "../include/media.h"

using namespace std;

Mediatheque::Mediatheque()
{
    
}

void Mediatheque::push_back_ressource(const Media media_in) {
    this->_ressource.push_back(media_in);
}

int Mediatheque::addMedia(type_media_t type_media) {

    switch (type_media) {
        case LIVRE :
            Livre tmp();
            this->push_back_ressource(tmp);
            break;
        /*case : REVUE
            _ressource.push_back(Revue());
            break;
        case : CD
            _ressource.push_back(CD());
            break;
        case : VHS
            _ressource.push_back(VHS());
            break;
        case : DVD
            _ressource.push_back(DVD());
            break;
        case : NUM
            _ressource.push_back(NUM());
            break;*/
        default :
            cout << "Mauvais type de media!" << endl;
            return 1;
            break;
    }

}