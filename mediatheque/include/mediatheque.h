#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <vector>

#include "media.h"

class Mediatheque
{
    public:
        std::vector<Media> _ressource;

        Mediatheque();
        int addMedia();
        int deleteMedia();
        int listMedia();
        int searchMedia();
        int saveToFile();
        int loadFromFile();
        int bookMedia();
};


#endif // MEDIATHEQUE_H