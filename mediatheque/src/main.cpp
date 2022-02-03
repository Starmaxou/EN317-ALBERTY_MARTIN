#include <iostream>
#include <string>

#include "../include/mediatheque.h"
#include "../include/livre.h"

using namespace std;

int main(void)
{
    Mediatheque alpha;

    string in_board, in_argument, in_command;

    cout << "Commande ADD test :" << endl;
    getline(cin, in_board);
    int taille_board = in_board.size();
    int place_space = in_board.find(" ");
    
    // Détection si argument ou non et récupération de la commande
    if (place_space == -1) {
        place_space = taille_board;   
        in_argument = "";
    }
    else {
        in_argument = in_board.substr(place_space + 1, taille_board - (place_space +1));
    }

    in_command = in_board.substr(0, place_space);

    if (in_command == "ADD") {
        if (in_argument == "LIVRE") {
            alpha.addMedia(LIVRE);
        }
    }


    return 0;
}