#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QStringList>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QList>
#include <QLineEdit>
#include <QLabel>
#include <QWidget>
#include <QFont>
#include <QTextEdit>
#include <QPixmap>
#include "generictype.h"

//NETWORK
#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

//BASE DE DATOS
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include "mainwindow.h"
#include <QStandardItemModel>
#include <QMap>
#include <QMapIterator>

namespace Ui {
class Config;
}

class Config : public QWidget
{
    Q_OBJECT

public:
    explicit Config(QWidget *parent = 0);
    ~Config();

    //DATABASE
    QSqlDatabase m_db;

    void Init(QSqlDatabase _m_db);
    void setData(QStandardItemModel *_model);

    void addAgent();
    void editAgent();
    void deletegent();

    void addContainer();
    void editContainer();
    void deleteContainer();

    void addOrigin();
    void editOrigin();
    void deleteOrigin();

    void addDestination();
    void editDestination();
    void deleteDestination();

    void addFCL();
    void editFCL();
    void deleteFCL();

    void addLCL();
    void editLCL();
    void deleteLCL();

    void addOPC();
    void editOPC();
    void deleteOPC();

    void addMediumFee();
    void editMediumFee();
    void deleteMediumFee();

    void addOtherFee();
    void editOtherFee();
    void deleteOtherFee();

    void addDBValue(QString table, QMap<QString, genericType *> map);

    QStandardItemModel *model;

private slots:


    void on_pushButton_agregar_aduanero_clicked();

private:
    Ui::Config *ui;
};

#endif // CONFIG_H
