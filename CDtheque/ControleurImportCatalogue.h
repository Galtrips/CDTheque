#pragma once
#include "CatalogueAlbum.h"
#include <qobject.h>
#include <QtNetwork/QNetworkAccessManager>
#include <QNetworkAccessManager>


class ControleurImportCatalogue : public QObject
{
	Q_OBJECT
private:
	CatalogueAlbum* albums;
	QNetworkAccessManager* netmanager;
public:
	ControleurImportCatalogue(CatalogueAlbum* albums = nullptr);
	~ControleurImportCatalogue();
	void Control(const QString&);

public slots:
	void replyFinished(QNetworkReply* reply);
};

