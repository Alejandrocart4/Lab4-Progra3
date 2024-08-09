#include "cframe.h"
#include "ui_cframe.h"
#include "Ejercicio1.h"


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

