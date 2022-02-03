#include <iostream>
#include "../include/media.h"

Media::Media(status_media_t status, string auteur)
{
    this->_auteur = auteur;
    this->_status = status;
}