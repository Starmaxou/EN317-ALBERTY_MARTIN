#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Enumération du status du média
 * 
 */
enum status_media_t
{
    IN = 0, //< Rendu, présent
    HOLD,   //< Reserver
    OUT     //< Emprunter
};


/**
 * @brief Enumération des types de média possible
 * 
 */
enum type_media_t
{
    livre_t = 0,
    revue_t,
    cd_t,
    vhs_t,
    dvd_t,
    revue_t
};

class Media
{
    protected:
        int _id;                //< identifiant du média
        type_media_t _type;     //< type du média
        string _auteur;         //< auteur du média
        status_media_t _status; //< Status du média
        

    public:
        Media();
        Media(status_media_t status, string auteur);
        virtual ~Media(){};
        friend ostream& operator<<(ostream& out, Media s);
};


#endif // MEDIA_H