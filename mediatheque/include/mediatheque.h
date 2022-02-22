#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <vector>
#include <iostream>
#include <string>

#include "media.h"

using namespace std;

class Mediatheque
{
    private :
        vector<Media *> _save_ressource;
        bool _search_mode = false;
    protected:
        vector<Media *> _ressource;

    public :
        Mediatheque();
        ~Mediatheque();

        int addMedia(Media * mediaAdd);
        int deleteMedia();

        int showID(int ID_search);
        int deleteID(int ID_delete);

        int listMedia();
        int searchMedia();
        int clearMedia();

        int saveToFile();
        int loadFromFile();
        int bookMedia();

};


#endif // MEDIATHEQUE_H