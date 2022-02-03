#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <vector>

#include "../include/media.h"

enum type_media_t {LIVRE, REVUE, CD, VHS, DVD, NUM};

class Mediatheque
{
    private:
        std::vector<Media> _ressource;
        void push_back_ressource(const Media media_in);
    public:
        Mediatheque();
        int addMedia(type_media_t type_media);
        int deleteMedia();
        int listMedia();
        int searchMedia();
        int saveToFile();
        int loadFromFile();
        int bookMedia();
};


#endif // MEDIATHEQUE_H