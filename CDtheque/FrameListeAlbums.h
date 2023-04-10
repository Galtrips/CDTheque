#pragma once
#include <QListWidget>
#include <QPushButton>
#include <QString>
#include "CatalogueAlbum.h"
#include "observers.h"
#include "ControleurSupprAlbum.h"

class FrameListeAlbums : public QObject, public Observer
{
	Q_OBJECT
private:
	CatalogueAlbum* albums;
	QListWidget* listWidget;
	QPushButton* supprButton;
	ControleurSupprAlbum* delController;

public:
	FrameListeAlbums(CatalogueAlbum* ,QListWidget*, QPushButton*);

public slots:
	void remove();
	void updateModel() override;
};

