#pragma once
#include <QObject>
#include <QLabel>
#include "CatalogueAlbum.h"

class FrameDetailAlbum : public QObject
{
	Q_OBJECT
private:
	CatalogueAlbum* albums;
	QLabel* label;

public:
	FrameDetailAlbum(CatalogueAlbum* albums, QLabel* label);

public slots:
	void print(QListWidgetItem* item);
};

