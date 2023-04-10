#include "FrameDetailAlbum.h"

FrameDetailAlbum::FrameDetailAlbum(CatalogueAlbum* albums, QLabel* label): albums(albums), label(label)
{
	label->setText("Texte de decription");
}

void FrameDetailAlbum::print(QListWidgetItem* item) {
	
	this->albums->selectAlbum(item->text());

	Album* al = this->albums->getSelected();

	if (al == nullptr) {
		return;
	}

	QString listTitre = "";

	for (QString one : al->getListeTitres()) {
		listTitre += one + "\n";
	}

	this->label->setText(al->getNomAlbum() + " ("+al->getArtistes()+") \n"+ listTitre+ "\n" +al->getGenre());

	albums->setChanged(false);
	albums->notifyObserver();
	albums->setChanged(true);
}