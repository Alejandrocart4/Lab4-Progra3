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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
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
    QWidget *page_5;
    QLabel *label_2;
    QLineEdit *inputTitulo;
    QTextEdit *inputDescripcion;
    QDateEdit *inputFecha;
    QComboBox *tipoTarea;
    QPushButton *btnAgregarTarea;
    QLabel *label_6;
    QListWidget *listaTareas;
    QWidget *page_4;
    QLabel *label_3;
    QWidget *page_3;
    QLabel *label_4;
    QWidget *page_2;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(800, 600);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 781, 561));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 0, 63, 20));
        stackedWidget->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_2 = new QLabel(page_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 40, 221, 20));
        inputTitulo = new QLineEdit(page_5);
        inputTitulo->setObjectName("inputTitulo");
        inputTitulo->setGeometry(QRect(90, 60, 351, 31));
        inputDescripcion = new QTextEdit(page_5);
        inputDescripcion->setObjectName("inputDescripcion");
        inputDescripcion->setGeometry(QRect(90, 130, 351, 141));
        inputFecha = new QDateEdit(page_5);
        inputFecha->setObjectName("inputFecha");
        inputFecha->setGeometry(QRect(570, 60, 110, 29));
        inputFecha->setDate(QDate(2024, 8, 9));
        tipoTarea = new QComboBox(page_5);
        tipoTarea->setObjectName("tipoTarea");
        tipoTarea->setGeometry(QRect(570, 130, 111, 28));
        btnAgregarTarea = new QPushButton(page_5);
        btnAgregarTarea->setObjectName("btnAgregarTarea");
        btnAgregarTarea->setGeometry(QRect(590, 250, 111, 31));
        label_6 = new QLabel(page_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 110, 221, 20));
        listaTareas = new QListWidget(page_5);
        listaTareas->setObjectName("listaTareas");
        listaTareas->setGeometry(QRect(110, 320, 601, 192));
        stackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_3 = new QLabel(page_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 40, 63, 20));
        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(510, 90, 63, 20));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(400, 130, 63, 20));
        stackedWidget->addWidget(page_2);
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        label->setText(QCoreApplication::translate("cframe", "menu", nullptr));
        label_2->setText(QCoreApplication::translate("cframe", "Ingrese un titulo a su tarea:", nullptr));
        btnAgregarTarea->setText(QCoreApplication::translate("cframe", "Agregar", nullptr));
        label_6->setText(QCoreApplication::translate("cframe", "Ingrese un descripcion a su tarea:", nullptr));
        label_3->setText(QCoreApplication::translate("cframe", "ejer2", nullptr));
        label_4->setText(QCoreApplication::translate("cframe", "ejer3", nullptr));
        label_5->setText(QCoreApplication::translate("cframe", "ejer4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
