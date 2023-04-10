#include "ControleurSupprAlbum.h"

ControleurSupprAlbum::ControleurSupprAlbum(CatalogueAlbum* albums) : albums(albums)
{
}

void ControleurSupprAlbum::Control(QStringList name)
{
    if (name.size() != 0) {
        albums->supprAlbum(name[0]);
    }
}