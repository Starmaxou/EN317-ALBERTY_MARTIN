#include "../include/commande.h"

using namespace std;

string str_to_upper (string str)
{
    string str_up = str ;
    std::transform( str_up.begin(), str_up.end(), str_up.begin( ), ::toupper ) ;

    return str_up ;
}