#ifndef VHS_H
#define VHS_H

#include <string>
#include "media.h"

using namespace std;

class VHS : public Media
{
    public:
        int _duree;
        string _maisonProd;

        VHS();
};

#endif // VHS_H
