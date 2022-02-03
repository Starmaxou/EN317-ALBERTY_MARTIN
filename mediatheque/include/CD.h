#ifndef CD_H
#define CD_H

#include <string>

class CD : public DVD
{
    public:
        int _duree;
        std::string _maisonProd;

        CD();
}

#endif // CD_H