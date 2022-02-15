#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <vector>
#include <iostream>

#include "media.h"

using namespace std;

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

    public :
        Mediatheque();
        ~Mediatheque();
        // DEBUG
        void test_command();
};


#endif // MEDIATHEQUE_H