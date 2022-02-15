#ifndef DVD_H
#define DVD_H

#include <string>
#include "VHS.h"

class DVD : public VHS
{
    protected:
        int _nbPiste;
        
    public:
        DVD();
};

#endif // DVD_H