#include <iostream>
#include <string>

#include "../include/mediatheque.h"
#include "../include/livre.h"

/**
 * @brief Fonction principale du programme
 * 
 * @return int 
 */
int main(void)
{
    Mediatheque alpha;

    Livre book1("Moi","mon titre","new collection", 2015, 152, "Voici mon résumé");    
    Livre book2("Toi","Sans titre","new collection", 2014, 258, "De l'eau");    
    Livre book3("Vous","Dell","new collection", 2012, 478, "Un oiseau");    
    
    book1._id = 1;
    book2._id = 2;
    book3._id = 3;

    alpha.addMedia(book1);
    alpha.addMedia(book2);
    alpha.addMedia(book3);

    alpha.showMedia();

    /*
    cout << alpha._ressource[0];
    cout << alpha._ressource[1];
    cout << alpha._ressource[2];
    */

    return EXIT_SUCCESS;
}