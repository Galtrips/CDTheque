#pragma once
#include "CatalogueAlbum.h"

class ControleurDetailAlbum
{
private:
	CatalogueAlbum* albums;

public:
	ControleurDetailAlbum(CatalogueAlbum*);
	void Control(QString);
};

