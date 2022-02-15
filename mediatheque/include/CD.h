#ifndef CD_H
#define CD_H

#include <string>
#include "DVD.h"

using namespace std;

class CD : public DVD
{
    protected:
        string _titre;

    public:
        CD();
};

#endif // CD_H