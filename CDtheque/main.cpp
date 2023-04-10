#include "cdtheque.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CatalogueAlbum* albums = new CatalogueAlbum;

    CDtheque w(albums, nullptr);
    w.show();
    return a.exec();
}
