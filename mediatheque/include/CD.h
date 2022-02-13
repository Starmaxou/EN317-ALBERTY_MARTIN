#ifndef CD_H
#define CD_H

#include <string>

class CD : public DVD
{
    protected:
        int _duree;
        std::string _maisonProd;

    public:
        CD();
}

#endif // CD_H