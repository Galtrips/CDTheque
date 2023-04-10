#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_cdtheque.h"
#include "FrameCamembertStat.h"
#include "FrameDetailAlbum.h"
#include "FrameListeAlbums.h"
#include "CatalogueAlbum.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>


class CDtheque : public QMainWindow
{
    Q_OBJECT

public:
    CDtheque(CatalogueAlbum* albums = nullptr, QWidget *parent = nullptr);
    ~CDtheque();

private:
    Ui::CDthequeClass ui;
    CatalogueAlbum* albums;
    FrameCamembertStat *fcs;
    FrameDetailAlbum *fda;
    FrameListeAlbums *fla;
    QNetworkAccessManager* netmanager;

public slots:
  void importJson();
  void replyFinished(QNetworkReply* reply);
};
