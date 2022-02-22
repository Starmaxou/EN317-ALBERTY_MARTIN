#include <iostream>
#include <string>
#include <fstream>

#include "../include/commande.h"
#include "../include/mediatheque.h"
#include "../include/livre.h"
#include "../include/DVD.h"
#include "../include/VHS.h"
#include "../include/CD.h"
#include "../include/media.h"

using namespace std;

int main (void) {

    Mediatheque alpha;
    VHS test;
    alpha.addMedia(&test);
    /*
    
    alpha.showID(0);
    cout << endl;
    alpha.deleteID(0);
    cout << endl;
    alpha.showID(0);
    */

    int exit_prog = 0;
    int place_space = 0;

    string in_board, in_command, in_argument;
    int taille_board;

    cout << "Bienvenue dans le gestionnaire de médiathèque !" << endl << "Tapez HELP pour avoir la liste des commandes" << endl << endl;
    
    while(!exit_prog) {
        // Récupération de la commande et paramétrage
        getline(cin, in_board);

        taille_board = in_board.size();
        place_space = in_board.find(" ");
        
        // Détection si argument ou non et récupération de la commande
        if (place_space == -1) {
            place_space = taille_board;   
            in_argument = "";
        }
        else {
            in_argument = in_board.substr(place_space + 1, taille_board - (place_space +1));
        }

        in_command = in_board.substr(0, place_space);
        in_command = str_to_upper (in_command);
        cout << endl;
        // Test successif pour connaitre la commande. Un switch case n'est pas possible avec des string :'(
        // BYE : sortir
        if  (in_command == "BYE") {
            cout <<"Au revoir!" << endl << endl;
            exit_prog = 1;
        }
        // ADD : ajouter un media
        else if (in_command == "ADD") {
            if (in_argument == "") {
                cout << "Pas d'argument!" << endl << endl;
            }
            else {
                cout <<"Ajout de : " << in_argument << endl << endl;
            }
        }
        // LOAD : Chargement dans un fichier
        else if (in_command == "LOAD") {
            if (in_argument == "") {
                cout << "Pas d'argument!" << endl << endl;
            }
            else {
                cout <<"chargement de : " << in_argument << endl << endl;
            }
        }
        // SAVE : Sauvegarde de la médiathèque dans un fichier
        else if (in_command == "SAVE") {
            if (in_argument == "") {
                cout << "Pas d'argument!" << endl << endl;
            }
            else {
                cout << "Sauvegarde de la médiathèque dans le fichier: " << in_argument << endl << endl;
            }
        }
        // SEARCH : Recherche dans la médiathèque
        else if (in_command == "SEARCH") {
            if (in_argument == "") {
                cout << "Pas d'argument!" << endl << endl;
            }
            else {
                cout << "Recherche de : " << in_argument << " dans la médiathèque" << endl << endl;
            }
        }
        // CLEAR : Clear de la recherche
        else if (in_command == "CLEAR") {
            cout << "Historique clear!" << endl << endl;
        }
        // LIST : Liste la totalité des médias présent dans la médiathèque
        else if (in_command == "LIST") {
            cout << "Les médias présent dans la médiathèque sont : " << endl << endl;
        }
        // SHOW : Affichage des informations détaillées
        else if (in_command == "SHOW") {
            if (in_argument == "") {
                cout << "Pas d'argument!" << endl << endl;
            }
            else {
                cout << "Afffichage des informations de l'ID " << in_argument << endl << endl;
                alpha.showID(stoi(in_argument));
            }
        }
        // DELETE : Suppression d'une ressource
        else if (in_command == "DELETE") {
            if (in_argument == "") {
                cout << "Pas d'argument!" << endl << endl;
            }
            else {
                cout << "Suppression de l'ID : " << in_argument << endl << endl;
            }
        }
        // RESET : Remise à zero de la médiathèque
        else if (in_command == "RESET") {
            cout << "Etes-vous sur de vouloir tout supprimer (Y/N) :" << endl << endl;
            getline(cin, in_board);
            in_board = str_to_upper (in_board);
            if (in_board == "Y") {
                cout << "Reset de la médiathèque" << endl << endl;
            }
            else {
                cout << "Annulation du reset" << endl << endl;
            }
        }
        else if (in_command == "HELP") {
            cout << "Liste des commandes : " << endl
                 << "BYE           : Quitte le progremmae" << endl
                 << "ADD t_media   : Ajout d'une nouvelle ressource de type 't_media'" << endl
                 << "LOAD filename : Charge le contenu du fichier filename  dans la médiathèque" << endl
                 << "SAVE filename : Sauvegarde le contenu du fichier filename dans la médiathèque" << endl 
                 << "SEARCH chaine : Cherche dans la base de donnée l'argument 'chaine', la recherche est incrémental jusqu'au prochain clear" << endl
                 << "CLEAR         : Clear la recherche" << endl
                 << "LIST          : Affichage de la base de donnée" << endl
                 << "SHOW id       : Affichage des informations du média à l'emplacement 'ID'" << endl
                 << "DELETE id     : Supprime le média ID de la base de donnée" << endl 
                 << "RESET         : Remise à zéro de l'ensemble de la base de donnée" << endl << endl;
        }
        // Commande non detecté
        else {
            cout << "La commande n'existe pas..." << endl;
            cout << "Veuillez réessayer" << endl << endl;
        }

    }
    return 0;
}
