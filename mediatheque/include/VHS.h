#ifndef VHS_H
#define VHS_H

#include <string>
#include "media.h"

using namespace std;

class VHS : public Media
{
    protected:
        int _duree;
        string _maisonProd;
        
    public:
        VHS();
};

#endif // VHS_H
