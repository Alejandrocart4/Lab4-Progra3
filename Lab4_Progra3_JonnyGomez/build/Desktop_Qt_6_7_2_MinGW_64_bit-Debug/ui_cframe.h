/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QWidget *page_5;
    QLabel *label_2;
    QLineEdit *inputTitulo;
    QTextEdit *inputDescripcion;
    QDateEdit *inputFecha;
    QComboBox *tipoTarea;
    QPushButton *btnAgregarTarea;
    QLabel *label_6;
    QListWidget *listaTareas;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QWidget *page_4;
    QPushButton *pushButton_7;
    QComboBox *figuraTipo;
    QLabel *label_3;
    QPushButton *btnAgregarFigura;
    QWidget *canvasWidget;
    QWidget *page_3;
    QLabel *label_4;
    QPushButton *pushButton_8;
    QTextEdit *TE_Editor;
    QPushButton *negritaButton;
    QPushButton *cursivaButton;
    QPushButton *normalButton;
    QPushButton *subrayadoButton;
    QWidget *page_2;
    QLabel *label_14;
    QLabel *label_11;
    QTextBrowser *textBrowser;
    QLabel *label_15;
    QDateEdit *dateCaducidadEdit;
    QComboBox *comboBoxTipoProducto;
    QLineEdit *nombreEdit;
    QLineEdit *lineEditMarca;
    QLabel *label_5;
    QLabel *label_10;
    QDoubleSpinBox *SBprecioEdit;
    QLabel *label_8;
    QLabel *label_31;
    QSpinBox *spinBoxCantidad;
    QLineEdit *lineEditTalla;
    QLabel *label_12;
    QLabel *label_33;
    QLabel *label_13;
    QListWidget *listWidget;
    QPushButton *btnAgg;
    QPushButton *btnDelete;
    QPushButton *btnMod;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(942, 608);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 931, 561));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 39, 141, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(22);
        font.setUnderline(true);
        label->setFont(font);
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 130, 131, 31));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(390, 220, 131, 31));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(390, 310, 131, 31));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(390, 400, 131, 31));
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(710, 490, 111, 41));
        stackedWidget->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_2 = new QLabel(page_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 40, 221, 20));
        inputTitulo = new QLineEdit(page_5);
        inputTitulo->setObjectName("inputTitulo");
        inputTitulo->setGeometry(QRect(140, 60, 351, 31));
        inputDescripcion = new QTextEdit(page_5);
        inputDescripcion->setObjectName("inputDescripcion");
        inputDescripcion->setGeometry(QRect(140, 130, 351, 141));
        inputFecha = new QDateEdit(page_5);
        inputFecha->setObjectName("inputFecha");
        inputFecha->setGeometry(QRect(620, 60, 131, 29));
        inputFecha->setDate(QDate(2024, 8, 9));
        tipoTarea = new QComboBox(page_5);
        tipoTarea->addItem(QString());
        tipoTarea->addItem(QString());
        tipoTarea->setObjectName("tipoTarea");
        tipoTarea->setGeometry(QRect(620, 130, 111, 28));
        btnAgregarTarea = new QPushButton(page_5);
        btnAgregarTarea->setObjectName("btnAgregarTarea");
        btnAgregarTarea->setGeometry(QRect(640, 250, 111, 31));
        label_6 = new QLabel(page_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 110, 221, 20));
        listaTareas = new QListWidget(page_5);
        listaTareas->setObjectName("listaTareas");
        listaTareas->setGeometry(QRect(140, 300, 601, 192));
        label_7 = new QLabel(page_5);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(140, 280, 221, 20));
        pushButton_5 = new QPushButton(page_5);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(720, 500, 91, 31));
        stackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pushButton_7 = new QPushButton(page_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(770, 510, 91, 31));
        figuraTipo = new QComboBox(page_4);
        figuraTipo->addItem(QString());
        figuraTipo->addItem(QString());
        figuraTipo->addItem(QString());
        figuraTipo->setObjectName("figuraTipo");
        figuraTipo->setGeometry(QRect(230, 80, 171, 28));
        label_3 = new QLabel(page_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 60, 201, 20));
        btnAgregarFigura = new QPushButton(page_4);
        btnAgregarFigura->setObjectName("btnAgregarFigura");
        btnAgregarFigura->setGeometry(QRect(500, 100, 111, 29));
        canvasWidget = new QWidget(page_4);
        canvasWidget->setObjectName("canvasWidget");
        canvasWidget->setGeometry(QRect(208, 190, 481, 281));
        canvasWidget->setStyleSheet(QString::fromUtf8("border: 1px solid red;"));
        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(300, 10, 391, 61));
        QFont font1;
        font1.setPointSize(20);
        label_4->setFont(font1);
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(740, 510, 91, 31));
        TE_Editor = new QTextEdit(page_3);
        TE_Editor->setObjectName("TE_Editor");
        TE_Editor->setGeometry(QRect(290, 90, 481, 401));
        negritaButton = new QPushButton(page_3);
        negritaButton->setObjectName("negritaButton");
        negritaButton->setGeometry(QRect(110, 220, 141, 51));
        QFont font2;
        font2.setBold(true);
        negritaButton->setFont(font2);
        cursivaButton = new QPushButton(page_3);
        cursivaButton->setObjectName("cursivaButton");
        cursivaButton->setGeometry(QRect(110, 300, 141, 51));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        cursivaButton->setFont(font3);
        normalButton = new QPushButton(page_3);
        normalButton->setObjectName("normalButton");
        normalButton->setGeometry(QRect(110, 140, 141, 51));
        normalButton->setFont(font2);
        subrayadoButton = new QPushButton(page_3);
        subrayadoButton->setObjectName("subrayadoButton");
        subrayadoButton->setGeometry(QRect(110, 380, 141, 51));
        subrayadoButton->setFont(font2);
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(260, 210, 301, 21));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        label_14->setFont(font4);
        label_11 = new QLabel(page_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 190, 301, 21));
        label_11->setFont(font4);
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(680, 90, 221, 221));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(470, 210, 301, 21));
        label_15->setFont(font4);
        dateCaducidadEdit = new QDateEdit(page_2);
        dateCaducidadEdit->setObjectName("dateCaducidadEdit");
        dateCaducidadEdit->setGeometry(QRect(260, 160, 161, 41));
        dateCaducidadEdit->setFont(font4);
        dateCaducidadEdit->setDate(QDate(2024, 8, 9));
        comboBoxTipoProducto = new QComboBox(page_2);
        comboBoxTipoProducto->addItem(QString());
        comboBoxTipoProducto->addItem(QString());
        comboBoxTipoProducto->addItem(QString());
        comboBoxTipoProducto->setObjectName("comboBoxTipoProducto");
        comboBoxTipoProducto->setGeometry(QRect(250, 80, 121, 31));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setItalic(false);
        comboBoxTipoProducto->setFont(font5);
        nombreEdit = new QLineEdit(page_2);
        nombreEdit->setObjectName("nombreEdit");
        nombreEdit->setGeometry(QRect(10, 80, 211, 31));
        lineEditMarca = new QLineEdit(page_2);
        lineEditMarca->setObjectName("lineEditMarca");
        lineEditMarca->setGeometry(QRect(480, 230, 131, 41));
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 130, 301, 21));
        label_5->setFont(font4);
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(230, -10, 551, 41));
        QFont font6;
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setItalic(true);
        label_10->setFont(font6);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        SBprecioEdit = new QDoubleSpinBox(page_2);
        SBprecioEdit->setObjectName("SBprecioEdit");
        SBprecioEdit->setGeometry(QRect(10, 150, 171, 31));
        SBprecioEdit->setMaximum(100000.990000000005239);
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 50, 301, 21));
        label_8->setFont(font4);
        label_31 = new QLabel(page_2);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(590, 60, 301, 21));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(true);
        label_31->setFont(font7);
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(222, 0, 0);"));
        spinBoxCantidad = new QSpinBox(page_2);
        spinBoxCantidad->setObjectName("spinBoxCantidad");
        spinBoxCantidad->setGeometry(QRect(10, 220, 181, 31));
        lineEditTalla = new QLineEdit(page_2);
        lineEditTalla->setObjectName("lineEditTalla");
        lineEditTalla->setGeometry(QRect(260, 230, 113, 41));
        label_12 = new QLabel(page_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(250, 50, 251, 21));
        label_12->setFont(font4);
        label_33 = new QLabel(page_2);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(430, 170, 191, 21));
        label_33->setFont(font4);
        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(260, 140, 331, 21));
        label_13->setFont(font4);
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 280, 631, 271));
        listWidget->setFont(font7);
        btnAgg = new QPushButton(page_2);
        btnAgg->setObjectName("btnAgg");
        btnAgg->setGeometry(QRect(650, 340, 83, 29));
        btnDelete = new QPushButton(page_2);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(650, 410, 83, 29));
        btnMod = new QPushButton(page_2);
        btnMod->setObjectName("btnMod");
        btnMod->setGeometry(QRect(650, 490, 83, 29));
        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(790, 490, 91, 31));
        stackedWidget->addWidget(page_2);
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 942, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        label->setText(QCoreApplication::translate("cframe", "MENU", nullptr));
        pushButton->setText(QCoreApplication::translate("cframe", "Ejercicio1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cframe", "Ejercicio 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cframe", "Ejercicio 3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("cframe", "Ejercicio 4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("cframe", "Finalizar", nullptr));
        label_2->setText(QCoreApplication::translate("cframe", "Ingrese un titulo a su tarea:", nullptr));
        tipoTarea->setItemText(0, QCoreApplication::translate("cframe", "Diaria", nullptr));
        tipoTarea->setItemText(1, QCoreApplication::translate("cframe", "Semanal", nullptr));

        btnAgregarTarea->setText(QCoreApplication::translate("cframe", "Agregar", nullptr));
        label_6->setText(QCoreApplication::translate("cframe", "Ingrese un descripcion a su tarea:", nullptr));
        label_7->setText(QCoreApplication::translate("cframe", "Descripcion de la tarea:", nullptr));
        pushButton_5->setText(QCoreApplication::translate("cframe", "Regresar", nullptr));
        pushButton_7->setText(QCoreApplication::translate("cframe", "Regresar", nullptr));
        figuraTipo->setItemText(0, QCoreApplication::translate("cframe", "C\303\255rculo", nullptr));
        figuraTipo->setItemText(1, QCoreApplication::translate("cframe", "Rect\303\241ngulo", nullptr));
        figuraTipo->setItemText(2, QCoreApplication::translate("cframe", "Tri\303\241ngulo", nullptr));

        label_3->setText(QCoreApplication::translate("cframe", "Selecciona el tipo de figura:", nullptr));
        btnAgregarFigura->setText(QCoreApplication::translate("cframe", "Agregar Figura", nullptr));
        label_4->setText(QCoreApplication::translate("cframe", "Modificador de Texto", nullptr));
        pushButton_8->setText(QCoreApplication::translate("cframe", "Regresar", nullptr));
        negritaButton->setText(QCoreApplication::translate("cframe", "NEGRITA", nullptr));
        cursivaButton->setText(QCoreApplication::translate("cframe", "CURSIVA", nullptr));
        normalButton->setText(QCoreApplication::translate("cframe", "NORMAL", nullptr));
        subrayadoButton->setText(QCoreApplication::translate("cframe", "SUBRAYADO", nullptr));
        label_14->setText(QCoreApplication::translate("cframe", "Ingrese Talla de Producto:", nullptr));
        label_11->setText(QCoreApplication::translate("cframe", "Ingrese Cantidad de Producto:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("cframe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic; color:#ffff00;\">-</span><span style=\" font-size:10pt; font-style:italic;\"> Para hacer una modificacion, seleccione la fila que desea editar y en las mismas casillas edite los valores, aunque estos no sean del mismo. Al terminar de editar nuevamente presione modificar otra vez y sus valores nuevos se mostraran.</span></p>\n"
"<p style=\"-qt-paragraph"
                        "-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic; color:#ffff00;\">-</span><span style=\" font-size:10pt; font-style:italic;\"> Para eliminar seleccione la casilla deseada, oprima&quot;Eliminar&quot; y listo.</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("cframe", "Ingrese Marca de Producto:", nullptr));
        comboBoxTipoProducto->setItemText(0, QCoreApplication::translate("cframe", "Electronico", nullptr));
        comboBoxTipoProducto->setItemText(1, QCoreApplication::translate("cframe", "Ropa", nullptr));
        comboBoxTipoProducto->setItemText(2, QCoreApplication::translate("cframe", "Alimento", nullptr));

        label_5->setText(QCoreApplication::translate("cframe", "Ingrese Precio de Producto:", nullptr));
        label_10->setText(QCoreApplication::translate("cframe", "SISTEMA DE GESTION DE INVENTARIO", nullptr));
        label_8->setText(QCoreApplication::translate("cframe", "Ingrese Nombre de Producto:", nullptr));
        label_31->setText(QCoreApplication::translate("cframe", "- De NO aplicar dicha casilla a producto,", nullptr));
        label_12->setText(QCoreApplication::translate("cframe", "Ingrese TIPO DE PRODUCTO:", nullptr));
        label_33->setText(QCoreApplication::translate("cframe", "SOLO SI ES ALIMENTO", nullptr));
        label_13->setText(QCoreApplication::translate("cframe", "Ingrese Fecha de Caducidad de Producto:", nullptr));
        btnAgg->setText(QCoreApplication::translate("cframe", "AGREGAR", nullptr));
        btnDelete->setText(QCoreApplication::translate("cframe", "ELIMINAR", nullptr));
        btnMod->setText(QCoreApplication::translate("cframe", "MODIFICAR", nullptr));
        pushButton_9->setText(QCoreApplication::translate("cframe", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
