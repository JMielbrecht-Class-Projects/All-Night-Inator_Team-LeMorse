#include "httpmanager.h"
#include <QJsonDocument>
#include <QJsonObject>


HttpManager::HttpManager(QObject *parent) :
    QObject(parent),
    coffeeAPIManager(new QNetworkAccessManager),
    lightsAPIManager(new QNetworkAccessManager)
{
    connect(coffeeAPIManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(CoffeeDownloadedHandler(QNetworkReply*)));

    connect(lightsAPIManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(LightsDownloadedHandler(QNetworkReply*)));

}

HttpManager::~HttpManager()
{
    delete coffeeAPIManager;
    delete lightsAPIManager;

}

void HttpManager::sendCoffeeRequest()
{
    QNetworkRequest request;
    QString url = "https://maker.ifttt.com/trigger/webTrigger1/with/key/bLuYqc640C4zWUsvuuIUQRBZSqgp7yCC1ertl8SEUgD";


    request.setUrl(QUrl(url));
    coffeeAPIManager->get(request);
    qDebug() << "Coffee Request Sent to Address " << request.url();
}

void HttpManager::sendLightsRequest()
{
    QNetworkRequest request;

    QString url = "https://maker.ifttt.com/trigger/webTrigger2/with/key/bLuYqc640C4zWUsvuuIUQRBZSqgp7yCC1ertl8SEUgD";

    request.setUrl(QUrl(url));
    lightsAPIManager->get(request);
    qDebug() << "Lights Request Sent to Address " << request.url();
}


void HttpManager::CoffeeDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Coffee Reply has arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";

    QString answer = reply->readAll();
    reply->deleteLater();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

    emit CoffeeJsonReady(jsonObj);
}

void HttpManager::LightsDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Lights Reply has arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";

    QString answer = reply->readAll();
    reply->deleteLater();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

    emit LightsJsonReady(jsonObj);
}
