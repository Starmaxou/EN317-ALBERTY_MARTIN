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

    DVD test;
    
    alpha.addMedia(&test);
    //cout << test;
    alpha.searchMedia();

    return 0;
}