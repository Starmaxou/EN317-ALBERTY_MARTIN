#include <iostream>
#include <string>

#include "../include/mediatheque.h"
#include "../include/livre.h"
#include "../include/DVD.h"
#include "../include/VHS.h"
#include "../include/CD.h"
#include "../include/media.h"

int main(void)
{
    Mediatheque alpha;

    VHS test;
    
    alpha.addMedia(&test);
    cout << endl;
    alpha.showID(0);
    cout << endl;
    alpha.deleteID(0);
    cout << endl;
    alpha.showID(0);

    return 0;
}