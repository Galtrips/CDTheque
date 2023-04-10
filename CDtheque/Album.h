#pragma once
#include <QString>
#include <QStringList>
#include <iostream>

class Album
{
private:
	QString nomAlbum;
	QString artistes;
	QStringList listeTitres;
	QString genre;

public:
	Album(const QString&, const QString&, const QStringList&, const QString&);

	const QString getNomAlbum() { return nomAlbum; }
	const QString getArtistes() { return artistes; }
	const QStringList getListeTitres() { return listeTitres; }
	const QString getGenre() { return genre; }

	friend std::ostream& operator<<(std::ostream& os, const Album& album);
};

