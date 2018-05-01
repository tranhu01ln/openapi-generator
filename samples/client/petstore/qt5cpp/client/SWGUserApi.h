/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef _SWG_SWGUserApi_H_
#define _SWG_SWGUserApi_H_

#include "SWGHttpRequest.h"

#include <QList>
#include <QString>
#include "SWGUser.h"

#include <QObject>

namespace Swagger {

class SWGUserApi: public QObject {
    Q_OBJECT

public:
    SWGUserApi();
    SWGUserApi(QString host, QString basePath);
    ~SWGUserApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void createUser(std::shared_ptr<SWGSWGUser>& swg_user);
    void createUsersWithArrayInput(QList<SWGUser*>*& swg_user);
    void createUsersWithListInput(QList<SWGUser*>*& swg_user);
    void deleteUser(QString* username);
    void getUserByName(QString* username);
    void loginUser(QString* username, QString* password);
    void logoutUser();
    void updateUser(QString* username, std::shared_ptr<SWGSWGUser>& swg_user);
    
private:
    void createUserCallback (SWGHttpRequestWorker * worker);
    void createUsersWithArrayInputCallback (SWGHttpRequestWorker * worker);
    void createUsersWithListInputCallback (SWGHttpRequestWorker * worker);
    void deleteUserCallback (SWGHttpRequestWorker * worker);
    void getUserByNameCallback (SWGHttpRequestWorker * worker);
    void loginUserCallback (SWGHttpRequestWorker * worker);
    void logoutUserCallback (SWGHttpRequestWorker * worker);
    void updateUserCallback (SWGHttpRequestWorker * worker);
    
signals:
    void createUserSignal();
    void createUsersWithArrayInputSignal();
    void createUsersWithListInputSignal();
    void deleteUserSignal();
    void getUserByNameSignal(SWGUser* summary);
    void loginUserSignal(QString* summary);
    void logoutUserSignal();
    void updateUserSignal();
    
    void createUserSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void createUsersWithArrayInputSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void createUsersWithListInputSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void deleteUserSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void getUserByNameSignalE(SWGUser* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void loginUserSignalE(QString* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void logoutUserSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void updateUserSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    
    void createUserSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void createUsersWithArrayInputSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void createUsersWithListInputSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void deleteUserSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getUserByNameSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void loginUserSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void logoutUserSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void updateUserSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
