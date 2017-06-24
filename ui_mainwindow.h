/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_5;
    QLabel *label_15;
    QLineEdit *lineEdit_6;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *tab_4;
    QLabel *label_6;
    QLabel *label_7;
    QTextEdit *textEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_9;
    QLabel *label_18;
    QLineEdit *lineEdit_10;
    QLabel *label_19;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_config;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_4;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QWidget *tab_2;
    QTableView *tableView;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1413, 808);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 1281, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(16, 79, 1381, 661));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(1000, 10, 361, 271));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(230, 30, 131, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        comboBox->setFont(font2);
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(230, 70, 131, 31));
        comboBox_2->setFont(font2);
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(230, 110, 131, 31));
        comboBox_3->setFont(font2);
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(230, 150, 131, 31));
        comboBox_4->setFont(font2);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 40, 221, 21));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 70, 221, 31));
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 110, 221, 31));
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 150, 221, 31));
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 190, 221, 31));
        label_14->setFont(font3);
        label_14->setAlignment(Qt::AlignCenter);
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(230, 190, 131, 31));
        QFont font4;
        font4.setPointSize(8);
        lineEdit_5->setFont(font4);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 231, 221, 20));
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignCenter);
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(230, 230, 131, 31));
        lineEdit_6->setFont(font4);
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 991, 291));
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setWeight(75);
        tableWidget->setFont(font5);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(410, 300, 431, 321));
        groupBox_3->setFont(font2);
        tabWidget_2 = new QTabWidget(groupBox_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 30, 421, 271));
        tabWidget_2->setFont(font3);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 10, 121, 21));
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 91, 21));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 91, 31));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 40, 131, 31));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 0, 181, 31));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 0, 111, 31));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(tab_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 120, 391, 101));
        textEdit->setFont(font4);
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 80, 301, 31));
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 40, 181, 20));
        lineEdit_3->setFont(font4);
        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(250, 40, 111, 20));
        lineEdit_4->setFont(font4);
        tabWidget_2->addTab(tab_4, QString());
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(860, 420, 121, 71));
        pushButton_5->setFont(font2);
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(1000, 280, 361, 241));
        groupBox_2->setFont(font1);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 180, 221, 31));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);
        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(220, 180, 121, 31));
        lineEdit_7->setFont(font4);
        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(220, 140, 121, 31));
        lineEdit_8->setFont(font4);
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 150, 181, 21));
        label_16->setFont(font2);
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 110, 181, 21));
        label_17->setFont(font2);
        label_17->setAlignment(Qt::AlignCenter);
        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(220, 100, 121, 31));
        lineEdit_9->setFont(font4);
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 60, 181, 31));
        label_18->setFont(font2);
        label_18->setAlignment(Qt::AlignCenter);
        lineEdit_10 = new QLineEdit(groupBox_2);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(220, 60, 121, 31));
        lineEdit_10->setFont(font4);
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 30, 181, 31));
        label_19->setFont(font2);
        label_19->setAlignment(Qt::AlignCenter);
        lineEdit_11 = new QLineEdit(groupBox_2);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(220, 20, 121, 31));
        lineEdit_11->setFont(font4);
        pushButton_config = new QPushButton(tab);
        pushButton_config->setObjectName(QStringLiteral("pushButton_config"));
        pushButton_config->setGeometry(QRect(1030, 580, 331, 41));
        pushButton_config->setFont(font2);
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(1030, 530, 331, 41));
        pushButton_7->setFont(font2);
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 300, 401, 321));
        groupBox_4->setFont(font2);
        tableWidget_2 = new QTableWidget(groupBox_4);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 40, 381, 271));
        tableWidget_2->setFont(font3);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(50);
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(860, 500, 121, 71));
        pushButton_6->setFont(font2);
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(860, 330, 121, 71));
        pushButton_4->setFont(font2);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 1251, 531));
        tabWidget->addTab(tab_2, QString());
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(20, 50, 1371, 23));
        progressBar->setValue(24);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1413, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "IMPORTACIONES TECSYS", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "CONFIGURACION", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "HONDURAS", 0)
         << QApplication::translate("MainWindow", "NICARAGUA", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "MARITIMO", 0)
         << QApplication::translate("MainWindow", "AEREO", 0)
         << QApplication::translate("MainWindow", "TERRESTRE", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "AGENTE 1", 0)
         << QApplication::translate("MainWindow", "AGENTE 2", 0)
         << QApplication::translate("MainWindow", "AGENTE 3", 0)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "BODEGA 1", 0)
         << QApplication::translate("MainWindow", "BODEGA 2", 0)
         << QApplication::translate("MainWindow", "BODEGA 3", 0)
        );
        label_10->setText(QApplication::translate("MainWindow", "REGION", 0));
        label_11->setText(QApplication::translate("MainWindow", "MEDIO DE TRANSPORTE", 0));
        label_12->setText(QApplication::translate("MainWindow", "AGENTE ADUANERO", 0));
        label_13->setText(QApplication::translate("MainWindow", "BODEGA FISICA", 0));
        label_14->setText(QApplication::translate("MainWindow", "D\303\215AS DE RETENCI\303\223N", 0));
        label_15->setText(QApplication::translate("MainWindow", "GASTOS ADMINISTRATIVOS", 0));
        lineEdit_6->setText(QApplication::translate("MainWindow", "75", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "CODIGO SAP", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "CANTIDAD", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "P. UNITARIO", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "PRECIO TOTAL", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "PARTIDA", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "% CIF", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "VALOR CIF", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "% DAI", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "VALOR DAI", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "AGREGAR - EDITAR - BORRAR", 0));
        label_5->setText(QApplication::translate("MainWindow", "CANTIDAD", 0));
        label_4->setText(QApplication::translate("MainWindow", "CODIGO", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "ITEM", 0));
        label_6->setText(QApplication::translate("MainWindow", "NOMBRE", 0));
        label_7->setText(QApplication::translate("MainWindow", "VALOR", 0));
        label_8->setText(QApplication::translate("MainWindow", "DESCRIPCION", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "OTROS COSTOS", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "EDITAR", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "RESULTADOS", 0));
        label_9->setText(QApplication::translate("MainWindow", "% IMPORTACIONES :", 0));
        lineEdit_7->setText(QString());
        lineEdit_8->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "Gasto Destino", 0));
        label_17->setText(QApplication::translate("MainWindow", "Gasto de Transito", 0));
        lineEdit_9->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "Gasto de Origen", 0));
        lineEdit_10->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "IMPUESTO", 0));
        lineEdit_11->setText(QString());
        pushButton_config->setText(QApplication::translate("MainWindow", "CONFIGURACION", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "CALCULTAR", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "OTROS COSTOS", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "NOMBRE", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "DESCRIPCION", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "VALOR", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "BORRAR", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "AGREGAR", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
