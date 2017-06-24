#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QStringList>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QList>
#include <QTextEdit>
#include <QLabel>
#include <QListView>
#include <QStringListModel>
#include <QModelIndex>
#include <QTime>
#include <QEventLoop>
#include <QCoreApplication>
#include <QAxObject>
#include <QStandardItemModel>
#include <QStandardItem>
#include "generictype.h"
#include <QMapIterator>

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
#include <QMap>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void msg(QString title, QString msg);
    void import(QString fileName, int sheetNumber);

    const static int KG  = 0;
    const static int PDS = 1;
    const static int CM3 = 2;
    const static int M3  = 3;
    const static int P3  = 4;

    const static int AIR  = 0;
    const static int SEA  = 1;

    void calcVol(bool modular, int noParts, float d, float w, float h, int typeDimension,int typeInput, int typeOutput, int transport, QWidget *output);
    float conVol(int typeInput, int typeOutput, float value);


    //DATABASE
    bool createConnection();
    QSqlDatabase m_db;
    QStringListModel *model_add;
    QStringListModel *model_ignore;
    QString DBdir = "tecsys.sqlite";
    QStandardItemModel *model;



    static int getKG();
    static void setKG(int value);

private slots:
    void on_pushButton_config_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
