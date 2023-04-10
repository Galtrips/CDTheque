#pragma once
#include <QObject>
#include <QWidget>
#include <QPieSeries>
#include "CatalogueAlbum.h"
#include "observers.h"

class FrameCamembertStat : public QObject, public Observer
{
	Q_OBJECT
private:
	CatalogueAlbum* albums;
	QWidget* widget;
	QPieSeries* series;

public:
	FrameCamembertStat(CatalogueAlbum*, QWidget*);

	void updateModel();


};

