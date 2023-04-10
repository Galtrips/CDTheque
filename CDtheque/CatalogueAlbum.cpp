#include "CatalogueAlbum.h"

CatalogueAlbum::CatalogueAlbum()
{
	selected = nullptr;
	albumsChanged = true;
	initAlbums(10);
}

void CatalogueAlbum::initAlbums(int nb)
{
	
	QStringList styles; styles << "Classique" << "Jazz" << "Pop/Rock" << "Rap";

	int num;
	for (int i = 0; i < nb; i++) {
		num = (int)(rand() % 4);
		albums.append(new Album(QString("Album_") + QString::number(i), QString("Artistes ") + QString::number(i), QStringList(QString("Titres ") + QString::number(i)), styles[num]));
	}

}


void CatalogueAlbum::ajoutAlbum(Album* a)
{
	albums.append(a);
}


void CatalogueAlbum::supprAlbum(QString name)
{
	for (int i = albums.size() - 1; i >= 0; i--)
	{
		if (albums[i]->getNomAlbum() == name)
		{
			albums.remove(i);
		}
	}
	notifyObserver();
}

void CatalogueAlbum::selectAlbum(QString name)
{
	for (int i = albums.size() - 1; i >= 0; i--)
	{
		if (albums[i]->getNomAlbum() == name)
		{
			this->selected = albums[i];
			return;
		}
	}
	this->selected = nullptr;
}


/**
 * @brief Print the albums information
*/
std::ostream& operator<<(std::ostream& os, const CatalogueAlbum& ca)
{
	for (const Album* album : ca.albums)
	{
		os << album << "\n";
	}

	return os;
}
