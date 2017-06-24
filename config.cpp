#include "config.h"
#include "ui_config.h"
#include <QPixmap>

Config::Config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Config)
{
    ui->setupUi(this);
    ui->logo->setPixmap(QPixmap(":/logo XIBERTEC.png"));
}

Config::~Config()
{
    delete ui;
}

void Config::Init(QSqlDatabase _m_db)
{
    this->m_db = _m_db;
}

void Config::setData(QStandardItemModel *_model)
{
    model = _model;
}

void Config::addAgent(){


    QMap<QString, genericType* > map;
    map["proveedor"]      = new genericType(genericType::STRING, 0, 0                                                      , ui->comboBox_aduanero_proveedor->currentText());
    map["gastos_admon"]   = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_gastos_admon->text().toFloat()   , "");
    map["comision"]       = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_comision->text().toFloat()       , "");
    map["dvas"]           = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_dvas->text().toFloat()           , "");
    map["duas"]           = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_duas->text().toFloat()           , "");
    map["almacenamiento"] = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_almacenamiento->text().toFloat() , "");
    map["multas"]         = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_multas->text().toFloat()         , "");
    map["dai"]            = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_dai->text().toFloat()            , "");
    map["std"]            = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_std->text().toFloat()            , "");
    map["inspeccion"]     = new genericType(genericType::FLOAT  , 0, ui->lineEdit_aduanero_inspeccion->text().toFloat()     , "");
    addDBValue("agente", map);

}
void Config::editAgent(){}
void Config::deletegent(){}

void Config::addContainer(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::editContainer(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::deleteContainer(){}

void Config::addOrigin(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::editOrigin(){}
void Config::deleteOrigin(){}

void Config::addDestination(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::editDestination(){}
void Config::deleteDestination(){}

void Config::addFCL(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::editFCL(){}
void Config::deleteFCL(){}

void Config::addLCL(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::editLCL(){}
void Config::deleteLCL(){}

void Config::addOPC(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::editOPC(){}
void Config::deleteOPC(){}

void Config::addMediumFee(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::editMediumFee(){}
void Config::deleteMediumFee(){}

void Config::addOtherFee(){
    QMap<QString, genericType* > map;
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    map[""]      = new genericType(genericType::STRING, 0, 0                                                      , "");
    addDBValue("agente", map);
}
void Config::editOtherFee(){}
void Config::deleteOtherFee(){}

void Config::addDBValue(QString table, QMap<QString, genericType*> map)
{
    QString colValues = "INSERT INTO "+table+" (";
    QString values = " VALUES (";
    int cont = 0;


    QMapIterator<QString, genericType*> i(map);
    while (i.hasNext()) {
        i.next();
        if(cont != 0){
            colValues+= ",";
            values+= ",";
        }
        colValues +=      i.key();
        switch (i.value()->type) {
            case genericType::INTEGER:
                values    += QString::number(i.value()->iValue) ;
                break;
            case genericType::FLOAT:
                values    +=  QString::number(i.value()->fValue) ;
                break;
            case genericType::STRING:
                values    +=  "'"+ i.value()->sValue+ "'" ;
                break;
        }
    cont++;
    }
    colValues += ")";
    values    += ")";

    QSqlQuery query;
    qDebug()<< colValues + values ;
    qDebug()<< "AGREGANDO A TABLA: "+table+" Resultado: "+query.exec(colValues + values);

//    QSqlQuery query2;
//    query2.exec("INSERT INTO agente (proveedor) "
//                  "VALUES ( 'Thad Beaumont2')");
}



void Config::on_pushButton_agregar_aduanero_clicked()
{
    addAgent();
}
