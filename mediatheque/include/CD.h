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
        friend ostream& operator<<(ostream& out, CD s);
        
};

#endif // CD_H