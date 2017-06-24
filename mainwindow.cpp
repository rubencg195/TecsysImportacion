
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    if(!createConnection())
        return;

    QSqlQuery query;
    query.exec("INSERT INTO agente (proveedor) "
                  "VALUES ( 'Thad Beaumont')");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::msg(QString title, QString msg)
{
    QMessageBox::information(this, title, msg);
}
bool MainWindow::createConnection()
{
    QString path = DBdir;
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);
    if (!m_db.open())
    {
       msg("ERROR"," NO SE ENCUENTRA LA BASE DE DATOS"+m_db.lastError().text());
    }
    else
    {
       qDebug() << "BASE DE DATOS: CONEXION EXITOSA";
       return true;
    }
    return false;
}

void MainWindow::on_pushButton_config_clicked()
{
    Config* c = new Config;
    c->setData(model);
    c->Init(m_db);
    c->show();
    //import("C:\\Users\\ruben\\Documents\\QT Proyectos\\TecsysImportacion\\LISTA ARTICULOS SAP CLASIFICACION ARANCELARIA.xlsx", 3);
}

void MainWindow::import(QString fileName, int sheetNumber)
{

    QAxObject* excel = new QAxObject( "Excel.Application", 0 );
    QAxObject* workbooks = excel->querySubObject( "Workbooks" );
    QAxObject* workbook = workbooks->querySubObject( "Open(const QString&)", fileName );
    QAxObject* sheets = workbook->querySubObject( "Worksheets" );
    int sheetCount = sheets->dynamicCall("Count()").toInt();        //worksheets count
    QAxObject* sheet = sheets->querySubObject( "Item( int )", sheetNumber );

    // Find the cells that actually have content
    QAxObject* usedrange = sheet->querySubObject( "UsedRange");
    QAxObject * rows = usedrange->querySubObject("Rows");
    QAxObject * columns = usedrange->querySubObject("Columns");
    int intRowStart = 3;//usedrange->property("Row").toInt();
    int intColStart = 3;//usedrange->property("Column").toInt();
    int intCols = columns->property("Count").toInt();
    int intRows = rows->property("Count").toInt();

    // replicate the Excel content in the QTableWidget
    //this->setColumnCount(intColStart+intCols);
    //this->setRowCount(intRowStart+intRows);
     model = new QStandardItemModel(intRowStart+intRows, intColStart+intCols); //rows - col


    for (int row=intRowStart ; row < intRowStart+intRows ; row++) {
        QString rowValue;
        for (int col=intColStart ; col < intColStart+intCols ; col++) {
            QAxObject* cell = sheet->querySubObject( "Cells( int, int )", row, col );
            QVariant value = cell->dynamicCall( "Value()" );
            if (value.toString().isEmpty())
                continue;

            QTableWidgetItem * twi = new QTableWidgetItem(value.toString());
            //this->setItem(row-1, col-1, twi);
            rowValue += value.toString()+",";
            QStandardItem *firstRow = new QStandardItem(value.toString());
            model->setItem(row,col,firstRow);

        }
        qDebug() << rowValue;
    }
    qDebug() << "FINISH";
    ui->tableView->setModel(model);
    return;
    // clean up and close up
    workbook->dynamicCall("Close()");
    excel->dynamicCall("Quit()");

}

void MainWindow::calcVol(bool modular, int noParts, float d, float w, float h, int typeDimension,int typeInput, int typeOutput, int transport, QWidget *output)
{
    //AEREO Dimensiones Pulgadas --> Volumen Kilos   Fórmula = L x W x H ÷ 366 = Peso volúmen en Kilos
    //AEREO Dimensiones Centimetros --> Volumen Kilos   Fórmula = L x W x H ÷ 6000 = Peso volúmen en kilos
    //AEREO Dimensiones Pulgadas --> Volumen Libras  Fórmula = L x W x H ÷ 166 = Peso Volúmen en Libras
    //MARITIMO Dimensiones Pulgadas --> Volumen M3   Fórmula = L x W x H ÷ 1728 ÷ 35.3147 = Metros cúbicos : M³
    //MARITIMO Dimensiones Pulgadas --> Volumen Pulgadas3   Fórmula = L x W x H ÷ 1728 = Pies Cúbicos
    //MARITIMO Dimensiones Centimetros --> Volumen Metros   Fórmula = L x W x H ÷ 1000000 = Metros cúbicos : M³
    if(!modular){
        noParts = 0;
        d = 0;
        w = 0;
        h = 0;
        typeDimension = 0;
        typeInput = 0;
        typeOutput = 0;
    }
    int value = noParts * ( d * w * h);
    switch (typeInput) {
        case MainWindow::KG  :
            value = conVol(typeInput,typeOutput, value);
            break;
        case MainWindow::PDS :
            value = conVol(typeInput,typeOutput, value);
            break;
        case MainWindow::CM3 :
            value = conVol(typeInput,typeOutput, value);
            break;
        case MainWindow::M3  :
            value = conVol(typeInput,typeOutput, value);
            break;
        case MainWindow::P3  :
            value = conVol(typeInput,typeOutput, value);
            break;
        default:
            break;
    }
}

float MainWindow::conVol(int typeInput, int typeOutput, float value)
{
    switch (typeInput) {
        case MainWindow::KG  :

            break;
        case MainWindow::PDS :

            break;
        case MainWindow::CM3 :

            break;
        case MainWindow::M3  :

            break;
        case MainWindow::P3  :

            break;
        default:
            break;
    }
}
