#ifndef VHS_H
#define VHS_H

#include <string>
#include <fstream>
#include "media.h"

using namespace std;

class VHS : public Media
{
    protected:
        int _duree;
        string _maisonProd;
        
    public:
        VHS();
        ostream& getInfo(ostream& out);
        virtual bool recherche(string search);
};

#endif // VHS_H
