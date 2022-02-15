#include <iostream>
#include "../include/DVD.h"

DVD::DVD()
    :VHS()
{
    cout << "Entrez le nombre de piste : "; cin >> this->_nbPiste;
}