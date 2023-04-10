#include "Album.h"
#include <QjsonArray>

Album::Album(const QString& nomAlbum, const QString& artistes, const QStringList& listeTitres, const QString& genre) :
	nomAlbum(nomAlbum), artistes(artistes), listeTitres(listeTitres), genre(genre)
{
}
//Non Fonctionnel
/*Album::Album(const QString& nomAlbum, const QString& artistes, const QJsonArray& listeTitres, const QString& genre) :
	nomAlbum(nomAlbum), artistes(artistes), listeTitres(listeTitres), genre(genre)
{
}*/


/**
 * @brief Print the albums information
*/
std::ostream& operator<<(std::ostream& os, const Album& album)
{

	os << album.nomAlbum.toStdString();

	return os;
}
