#include <iostream>
#include "../include/CD.h"

CD::CD()
    :DVD()
{
    cout << "Entrez le titre : "; cin >> this->_titre;
}

ostream& operator<<(ostream& out, CD s) {
    out << (DVD) s;
    out << "Titre du CD : " << s._titre << endl;
    return out;
}