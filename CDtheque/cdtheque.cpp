#include "cdtheque.h"
#include <QByteArray>

#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QJsonArray>
#include <QDateTime>

CDtheque::CDtheque(CatalogueAlbum* albums, QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    netmanager = new QNetworkAccessManager(this);

    connect(netmanager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));

    FrameListeAlbums* fla = new FrameListeAlbums(albums, ui.listWidget, ui.pushButton_Delete);
    FrameDetailAlbum* fda = new FrameDetailAlbum(albums, ui.label);
    FrameCamembertStat* fcs = new FrameCamembertStat(albums, ui.widget);

    albums->addObserver(fla);
    albums->addObserver(fcs);

    connect(ui.pushButton_Delete, &QPushButton::pressed, fla, &FrameListeAlbums::remove);
    connect(ui.listWidget, &QListWidget::itemClicked, fda, &FrameDetailAlbum::print);
    connect(ui.actionImport_Json_File, &QAction::triggered, this, &CDtheque::importJson);
}

CDtheque::~CDtheque()
{}

void CDtheque::importJson() {

    QString URL = "https://perso.univ-lyon1.fr/lionel.buathier/apiCDtheque/liste-albums.php";
    QUrl url(URL);
    QNetworkRequest request;

    request.setUrl(url);
    //--header ’Accept: application/json’
    request.setRawHeader("Accept", "application/json");
    qDebug() << Q_FUNC_INFO << request.url();
    netmanager->get(request);
}

void CDtheque::replyFinished(QNetworkReply* reply) {
    if (reply->error() != QNetworkReply::NoError)
    {
        //Network Error
        qDebug() << reply->error() << "=>" << reply->errorString();
    }
    else if (reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() == 200) {

        QByteArray datas = reply->readAll();

        QJsonDocument jsonResponse = QJsonDocument::fromJson(datas);
        QJsonObject jsonObj = jsonResponse.object();

        QJsonArray weatherArray = jsonObj["album"].toArray();
        QJsonObject object;
        QVector <Album*> vector;

        for (auto w : weatherArray) {
            object = w.toObject();

            //vector.append(new Album(object.value("album").toString(), object.value("artiste").toString(), object.value("titres").toArray(), object.value("genre").toString()));
            
        }
       

    }
    else {

        qDebug() << "Echec de connection à L'API";
    }
}