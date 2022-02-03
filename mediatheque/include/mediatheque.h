#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <vector>

#include "../include/media.h"

class Mediatheque
{
    private:
        std::vector<Media> _ressource;

    public:
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