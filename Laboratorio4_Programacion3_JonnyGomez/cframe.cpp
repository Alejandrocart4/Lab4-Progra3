#include "cframe.h"
#include "ui_cframe.h"
#include "Ejercicio1.h"
#include "Ejercicio2.h"
#include <QGraphicsRectItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsScene>
#include <QGraphicsView>


cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
}

void cframe::on_btnAgregarTarea_clicked()
{
    QString titulo = ui->inputTitulo->text();
    QString descripcion = ui->inputDescripcion->toPlainText();
    QDate fecha = ui->inputFecha->date();
    QString tipo = ui->tipoTarea->currentText();

    Tarea* nuevaTarea = nullptr;
    if (tipo == "Diaria") {
        nuevaTarea = new TareaDiaria(titulo, descripcion, fecha);
    } else if (tipo == "Semanal") {
        nuevaTarea = new TareaSemanal(titulo, descripcion, fecha);
    }

    if (nuevaTarea) {
        QString detalles = nuevaTarea->obtenerTipo() + ": " + nuevaTarea->obtenerTitulo() +
                           " - " + nuevaTarea->obtenerDescripcion() + " (" + nuevaTarea->obtenerFecha().toString() + ")";
        ui->listaTareas->addItem(detalles);
        nuevaTarea->mostrarDetalles();
    }
}


void cframe::on_pushButton_6_clicked()
{
    QCoreApplication::quit();
}


void cframe::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void cframe::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}


void cframe::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}


void cframe::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}


void cframe::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}


void cframe::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}


void cframe::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}


void cframe::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}


void cframe::on_btnAgregarFigura_clicked()
{
    QString figuraSeleccionada = ui->seleccionFigura->currentText();
    QGraphicsScene* escena = ui->lienzo->scene();

    if (!escena) {
        escena = new QGraphicsScene();
        ui->lienzo->setScene(escena);
    }

    if (figuraSeleccionada == "Circulo") {
        int radio = ui->inputRadio->value();
        QGraphicsEllipseItem* circulo = escena->addEllipse(-radio, -radio, radio*2, radio*2);
        circulo->setPos(lienzo->width() / 2, lienzo->height() / 2);

    } else if (figuraSeleccionada == "Rectangulo") {
        int ancho = ui->inputAncho->value();
        int alto = ui->inputAlto->value();
        QGraphicsRectItem* rectangulo = escena->addRect(-ancho/2, -alto/2, ancho, alto);
        rectangulo->setPos(lienzo->width() / 2, lienzo->height() / 2);

    } else if (figuraSeleccionada == "Triangulo") {
        QPointF punto1(ui->inputPunto1->value(), ui->inputPunto1->value());
        QPointF punto2(ui->inputPunto2->value(), ui->inputPunto2->value());
        QPointF punto3(ui->inputPunto3->value(), ui->inputPunto3->value());
        QPolygonF triangulo;
        triangulo << punto1 << punto2 << punto3;
        QGraphicsPolygonItem* itemTriangulo = escena->addPolygon(triangulo);
        itemTriangulo->setPos(lienzo->width() / 2, lienzo->height() / 2);
    }
}

