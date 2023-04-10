#pragma once
#include "CatalogueAlbum.h"

class ControleurSupprAlbum
{
private:
	CatalogueAlbum* albums;

public:
	ControleurSupprAlbum(CatalogueAlbum*);
	void Control(QStringList);
};

