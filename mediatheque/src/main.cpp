#include <iostream>
#include <string>
#include <fstream>

#include "../include/main.h"
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

    cout << COLOR_GREEN;
    cout << "Bienvenue dans le gestionnaire de médiathèque !" << endl << "Tapez HELP pour avoir la liste des commandes" << endl << endl;
    cout << COLOR_RESET;
    while(!exit_prog) {
        // Récupération de la commande et paramétrage
        cout << endl
             << COLOR_WHITE
             << "Saisissez une commande >> "
             << COLOR_BLUE;
        getline(cin, in_board);
        cout << COLOR_RESET;

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
        //cout << endl;
        // Test successif pour connaitre la commande. Un switch case n'est pas possible avec des string :'(
        // BYE : sortir
        if  (in_command == "BYE") {
            cout <<"Au revoir!" << endl << endl;
            exit_prog = 1;
        }
        // ADD : ajouter un media
        else if (in_command == "ADD") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout <<"Ajout de : " << in_argument << endl << endl;
            }
        }
        // RESERVE : Reserver un media
        else if (in_command == "RESERVE") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout << COLOR_GREEN;
                cout << "Demande de reservation du média (id : " 
                     << COLOR_RED
                     << in_argument << COLOR_GREEN << ")" << endl << endl
                     << COLOR_RESET;
                if(!alpha.reserveMedia(stoi(in_argument))){
                    cout << COLOR_GREEN;
                    cout << "Reservation" << COLOR_BOLDGREEN << " acceptée !";
                    cout << COLOR_RESET;
                } else {
                    cout << COLOR_GREEN;
                    cout << "Reservation" << COLOR_BOLDRED << " refusée !";
                    cout << COLOR_RESET;
                }
            }
        }
        // BORROW : Emprunter un media
        else if (in_command == "BORROW") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout << COLOR_GREEN;
                cout << "Demande de d'emprunt du média (id : " 
                     << COLOR_RED
                     << in_argument << COLOR_GREEN << ")" << endl << endl
                     << COLOR_RESET;
                if(!alpha.borrowMedia(stoi(in_argument))){
                    cout << COLOR_GREEN;
                    cout << "Emprunt" << COLOR_BOLDGREEN << " acceptée !";
                    cout << COLOR_RESET;
                } else {
                    cout << COLOR_GREEN;
                    cout << "Emprunt" << COLOR_BOLDRED << " refusée !";
                    cout << COLOR_RESET;
                }
            }
        }
        // RETURN : Emprunter un media
        else if (in_command == "RETURN") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout << COLOR_GREEN;
                cout << "Demande de retour du média (id : " 
                     << COLOR_RED
                     << in_argument << COLOR_GREEN << ")" << endl << endl
                     << COLOR_RESET;
                if(!alpha.returnMedia(stoi(in_argument))){
                    cout << COLOR_GREEN;
                    cout << "Retour" << COLOR_BOLDGREEN << " effectué !";
                    cout << COLOR_RESET;
                } else {
                    cout << COLOR_GREEN;
                    cout << "Retour" << COLOR_BOLDRED << " refusée !";
                    cout << COLOR_RESET;
                }
            }
        }
        // LOAD : Chargement dans un fichier
        else if (in_command == "LOAD") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout <<"chargement de : " << in_argument << endl << endl;
            }
        }
        // SAVE : Sauvegarde de la médiathèque dans un fichier
        else if (in_command == "SAVE") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout << COLOR_GREEN;
                cout << "Sauvegarde de la médiathèque dans le fichier: ";
                cout << COLOR_RED;
                cout << in_argument << ".txt" << endl << endl;
                cout << COLOR_RESET;
                alpha.saveToFile(in_argument);
            }
        }
        // SEARCH : Recherche dans la médiathèque
        else if (in_command == "SEARCH") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout << "Recherche de : " << in_argument << " dans la médiathèque" << endl << endl;
            }
        }
        // CLEAR : Clear de la recherche
        else if (in_command == "CLEAR") {
            cout << COLOR_BOLDGREEN;
            cout << "Historique clear!" << endl << endl;
            cout << COLOR_RESET;
        }
        // LIST : Liste la totalité des médias présent dans la médiathèque
        else if (in_command == "LIST") {
            cout << COLOR_BOLDGREEN;
            cout << "Les médias présent dans la médiathèque sont : " << endl << endl;
            cout << COLOR_RESET << COLOR_GREEN;
            alpha.listMedia();
            cout << COLOR_RESET;
        }
        // SHOW : Affichage des informations détaillées
        else if (in_command == "SHOW") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout << COLOR_GREEN;
                cout << "Affichage des informations de l'ID " 
                     << COLOR_RED
                     << in_argument << endl << endl
                     << COLOR_RESET;
                alpha.showID(stoi(in_argument));
            }
        }
        // DELETE : Suppression d'une ressource
        else if (in_command == "DELETE") {
            if (in_argument == "") {
                cout << COLOR_RED;
                cout << "Pas d'argument!" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout << COLOR_GREEN;
                cout << "Suppression de l'ID : " 
                     << COLOR_RED
                     << in_argument << endl << endl
                     << COLOR_RESET;
                alpha.deleteID(stoi(in_argument));
            }
        }
        // RESET : Remise à zero de la médiathèque
        else if (in_command == "RESET") {
            cout << COLOR_RED;
            cout << "Etes-vous sur de vouloir tout supprimer (Y/N) :" << endl << endl;
            cout << COLOR_RESET;
            getline(cin, in_board);
            in_board = str_to_upper (in_board);
            if (in_board == "Y") {
                cout << COLOR_BOLDGREEN;
                cout << "Reset de la médiathèque" << endl << endl;
                cout << COLOR_RESET;
            }
            else {
                cout << COLOR_BOLDGREEN;
                cout << "Annulation du reset" << endl << endl;
                cout << COLOR_RESET;
            }
        }
        else if (in_command == "HELP") {
            cout << COLOR_BOLDGREEN;
            cout << "Liste des commandes : " << endl
                 << COLOR_RESET << COLOR_GREEN 
                 << "BYE             : Quitte le progremmae" << endl
                 << "ADD t_media     : Ajout d'une nouvelle ressource de type 't_media'" << endl
                 << "Reserve <id>    : Reserver le média ID" << endl
                 << "Borrow <id>     : Emprunter le média ID" << endl
                 << "Return <id>     : Rendre le media ID" <<endl    
                 << "LOAD <filename> : Charge le contenu du fichier filename  dans la médiathèque" << endl
                 << "SAVE <filename> : Sauvegarde le contenu du fichier filename dans la médiathèque" << endl 
                 << "SEARCH chaine   : Cherche dans la base de donnée l'argument 'chaine', la recherche est incrémental jusqu'au prochain clear" << endl
                 << "CLEAR           : Clear la recherche" << endl
                 << "LIST            : Affichage de la base de donnée" << endl
                 << "SHOW <id>       : Affichage des informations du média à l'emplacement 'ID'" << endl
                 << "DELETE <id>     : Supprime le média ID de la base de donnée" << endl 
                 << "RESET           : Remise à zéro de l'ensemble de la base de donnée" << endl << endl
                 << COLOR_RESET;
        }
        // Commande non detecté
        else {
            cout << COLOR_RED;
            cout << "La commande n'existe pas..." << endl;
            cout << COLOR_GREEN;
            cout << "Veuillez réessayer" << endl << endl;
            cout << COLOR_RESET;
        }

    }
    return 0;
}
