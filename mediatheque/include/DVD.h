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
        
        virtual ostream& getInfo(ostream& out);
        virtual bool recherche (string search);
};

#endif // DVD_H