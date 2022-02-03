#include "../include/media.h"


Media::Media(std::string auteur, status_media_t status)
{
    this->_auteur = auteur;
    this->_status = status;
}