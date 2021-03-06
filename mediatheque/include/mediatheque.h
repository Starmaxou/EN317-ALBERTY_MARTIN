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
        int addMedia(int media_type);
        int deleteMedia();

        int showID(int ID_search);
        int deleteID(int ID_delete);

        int listMedia();
        int searchMedia();
        int clearMedia();

        int resetRessource();

        int saveToFile(string fileName);
        int loadFromFile(string fileName);

        int reserveMedia(int id);
        int borrowMedia(int id);
        int returnMedia(int id);

};


#endif // MEDIATHEQUE_H