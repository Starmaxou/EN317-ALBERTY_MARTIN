#include <iostream>
#include "../include/CD.h"

CD::CD()
    :DVD()
{
    cout << "Entrez le titre : "; cin >> this->_titre;
}