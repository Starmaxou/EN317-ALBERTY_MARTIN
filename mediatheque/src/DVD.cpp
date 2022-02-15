#include <iostream>
#include "../include/DVD.h"

DVD::DVD()
    :VHS()
{
    cout << "Entrez le nombre de piste : "; cin >> this->_nbPiste;
}

ostream& operator<<(ostream& out, DVD s) {
    out << (VHS) s;
    out << "Nb de Piste : " << s._nbPiste << endl;
    return out;
}