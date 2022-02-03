#ifndef DVD_H
#define DVD_H

#include <string>

class DVD : public VHS
{
    public:
        int _duree;
        std::string _maisonProd;

        DVD();
}

#endif // DVD_H