#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <vector>

#include "media.h"

class Mediatheque
{
    protected:
        std::vector<Media> _ressource;

        int addMedia(Media mediaAdd);
        int deleteMedia();
        int listMedia();
        int searchMedia();
        int saveToFile();
        int loadFromFile();
        int bookMedia();

        // DEBUG
        void test_command();
};


#endif // MEDIATHEQUE_H