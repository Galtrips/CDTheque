#pragma once
#include "Album.h"
#include <QVector>
#include <iostream>
#include "observers.h"

#include <QListWidget>
#include <QPushButton>
#include <QString>



class CatalogueAlbum : public Observable
{
private:
	QVector<Album*> albums;
	Album* selected;
	bool albumsChanged;

public:
	CatalogueAlbum();

	void initAlbums(int nb);
	void ajoutAlbum(Album* a);
	void supprAlbum(QString name);
	void selectAlbum(QString name);

	const QVector<Album*> getAlbums() { return albums; }
	Album* getSelected() { return selected; }
	bool valueChanged() { return albumsChanged; }
	void setChanged(bool changed) { this->albumsChanged = changed; }

	friend std::ostream& operator<<(std::ostream& os, const CatalogueAlbum& ca);
};
