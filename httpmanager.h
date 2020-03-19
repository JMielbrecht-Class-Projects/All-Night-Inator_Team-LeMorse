#ifndef HTTPMANAGER_H
#define HTTPMANAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class HttpManager : public QObject
{
    Q_OBJECT
public:
    explicit HttpManager(QObject *parent = nullptr);
    ~HttpManager();

    void sendCoffeeRequest();
    void sendLightsRequest();

signals:
    void CoffeeJsonReady(QJsonObject *json);
    void LightsJsonReady(QJsonObject *json);


private slots:
    void CoffeeDownloadedHandler(QNetworkReply *reply);
    void LightsDownloadedHandler(QNetworkReply *reply);


private:
    QNetworkAccessManager *coffeeAPIManager;
    QNetworkAccessManager *lightsAPIManager;

};

#endif // HTTPMANAGER_H
