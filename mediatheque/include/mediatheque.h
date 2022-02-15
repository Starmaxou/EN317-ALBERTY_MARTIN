#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <vector>
#include <iostream>

#include "media.h"

using namespace std;

class Mediatheque
{
    protected:
        

    public :
    std::vector<Media> _ressource;
        Mediatheque();
        ~Mediatheque();
        int addMedia(Media mediaAdd);
        int deleteMedia();
        int listMedia();
        int searchMedia();
        int saveToFile();
        int loadFromFile();
        int bookMedia();
        int showMedia();
        // DEBUG
        void test_command();
};


#endif // MEDIATHEQUE_H