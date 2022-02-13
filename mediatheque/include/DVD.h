#ifndef DVD_H
#define DVD_H

#include <string>

class DVD : public VHS
{
    protected:
        int _duree;
        std::string _maisonProd;
        
    public:
        DVD();
}

#endif // DVD_H