#include "FrameListeAlbums.h"

FrameListeAlbums::FrameListeAlbums(CatalogueAlbum* albums, QListWidget* lw, QPushButton* b): albums(albums),listWidget(lw), supprButton(b)
{
	this->updateModel();
	this->delController = new ControleurSupprAlbum(albums);
}


void FrameListeAlbums::remove()
{
	QList<QListWidgetItem*> items = this->listWidget->selectedItems();
	QStringList listStringSelected;
	for (QListWidgetItem*  item : items)
	{
		listStringSelected.append(item->text());
	}
	
	this->delController->Control(listStringSelected);
}

void FrameListeAlbums::updateModel() {

	if (albums->valueChanged() == false) {
		return;
	}

	QVector<Album* > vector = this->albums->getAlbums();
	QList<QString> listValues;

	for (Album* a : vector) {
		listValues.push_back(a->getNomAlbum());
	}

	listWidget->clear();

	listWidget->addItems(listValues);
}