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
        //friend ostream& operator<<(ostream& out, DVD s);
        virtual ostream& getInfo(ostream& out);
        void test();
        virtual bool recherche (string search);
};

#endif // DVD_H