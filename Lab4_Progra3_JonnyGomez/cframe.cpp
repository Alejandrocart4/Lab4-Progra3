#include "cframe.h"
#include "ui_cframe.h"
#include "Ejercicio1.h"
#include "Ejercicio2.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Figura.h"
#include "canvas.h"
#include <QListWidget>
#include <QMessageBox>
#include <QInputDialog>
#include "QPolygon"
#include "QRect"



cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
    , canvas(new Canvas(this))
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
    delete canvas;
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
    /*QString tipoFigura = ui->figuraTipo->currentText();
    bool ok;

    canvas->clearFiguras();

    if (tipoFigura == "Círculo") {
        int radio = QInputDialog::getInt(this, "Agregar Círculo", "Radio del círculo:", 50, 1, 1000, 1, &ok);
        if (ok) {
            int canvasWidth = canvas->width();
            int canvasHeight = canvas->height();

            QPoint centro(canvasWidth / 2, canvasHeight / 2);
            Circulo *circulo = new Circulo(centro, radio);
            canvas->addFigura(circulo);
        }
    } else if (tipoFigura == "Rectángulo") {
        int ancho = QInputDialog::getInt(this, "Agregar Rectángulo", "Ancho del rectángulo:", 100, 1, 1000, 1, &ok);
        if (ok) {
            int alto = QInputDialog::getInt(this, "Agregar Rectángulo", "Alto del rectángulo:", 100, 1, 1000, 1, &ok);
            if (ok) {
                int canvasWidth = canvas->width();
                int canvasHeight = canvas->height();

                int x = (canvasWidth - ancho) / 2;
                int y = (canvasHeight - alto) / 2;

                QRect rect(QPoint(x, y), QSize(ancho, alto));
                Rectangulo *rectangulo = new Rectangulo(rect);
                canvas->addFigura(rectangulo);
            }
        }
    } else if (tipoFigura == "Triángulo") {
        int tamaño = QInputDialog::getInt(this, "Agregar Triángulo", "Tamaño del triángulo (base):", 100, 1, 1000, 1, &ok);
        if (ok) {
            int canvasWidth = canvas->width();
            int canvasHeight = canvas->height();

            int halfSize = tamaño / 2;
            QPoint p1(canvasWidth / 2, canvasHeight / 2 - tamaño);
            QPoint p2(canvasWidth / 2 - halfSize, canvasHeight / 2);
            QPoint p3(canvasWidth / 2 + halfSize, canvasHeight / 2);

            QPolygon polygon;
            polygon << p1 << p2 << p3;

            Triangulo *triangulo = new Triangulo(polygon);
            canvas->addFigura(triangulo);
        }
    }*/

    QString tipoFigura = ui->figuraTipo->currentText();
    bool ok;

    //stackedWidget->setCurrentWidget(canvas);

    // Verificar el tamaño del 'canvas'
    qDebug() << "Canvas size:" << canvas->size();

    // Verificar la visibilidad del 'canvas'
    qDebug() << "Canvas visible:" << canvas->isVisible();
    canvas->clearFiguras();

    if (tipoFigura == "Círculo") {
        int radio = QInputDialog::getInt(this, "Agregar Círculo", "Radio del círculo:", 50, 1, 1000, 1, &ok);
        if (ok) {
            int canvasWidth = canvas->width();
            int canvasHeight = canvas->height();

            // Calcular el centro del canvas
            QPoint centro(canvasWidth / 2, canvasHeight / 2);

            // Crear la figura y agregarla al canvas
            Circulo *circulo = new Circulo(centro, radio);
            canvas->addFigura(circulo);
        }
    } else if (tipoFigura == "Rectángulo") {
        int ancho = QInputDialog::getInt(this, "Agregar Rectángulo", "Ancho del rectángulo:", 100, 1, 1000, 1, &ok);
        if (ok) {
            int alto = QInputDialog::getInt(this, "Agregar Rectángulo", "Alto del rectángulo:", 100, 1, 1000, 1, &ok);
            if (ok) {
                int canvasWidth = canvas->width();
                int canvasHeight = canvas->height();

                // Calcular el centro del rectángulo en el canvas
                int x = (canvasWidth - ancho) / 2;
                int y = (canvasHeight - alto) / 2;

                QRect rect(QPoint(x, y), QSize(ancho, alto));

                // Crear la figura y agregarla al canvas
                Rectangulo *rectangulo = new Rectangulo(rect);
                canvas->addFigura(rectangulo);
            }
        }
    } else if (tipoFigura == "Triángulo") {
        int tamaño = QInputDialog::getInt(this, "Agregar Triángulo", "Tamaño del triángulo (base):", 100, 1, 1000, 1, &ok);
        if (ok) {
            int canvasWidth = canvas->width();
            int canvasHeight = canvas->height();

            // Calcular el centro del triángulo en el canvas
            int halfSize = tamaño / 2;
            QPoint p1(canvasWidth / 2, canvasHeight / 2 - halfSize);
            QPoint p2(canvasWidth / 2 - halfSize, canvasHeight / 2 + halfSize);
            QPoint p3(canvasWidth / 2 + halfSize, canvasHeight / 2 + halfSize);

            QPolygon polygon;
            polygon << p1 << p2 << p3;

            // Crear la figura y agregarla al canvas
            Triangulo *triangulo = new Triangulo(polygon);
            canvas->addFigura(triangulo);
        }
    }
}


void cframe::on_normalButton_clicked()
{
    ui->negritaButton->setEnabled(false);
    ui->cursivaButton->setEnabled(false);
    ui->subrayadoButton->setEnabled(false);

    QTextCursor cursor = ui->TE_Editor->textCursor();

    if (cursor.hasSelection()) {
        QTextCharFormat normalFormat;
        normalFormat.setFontWeight(QFont::Normal);
        normalFormat.setFontItalic(false);
        normalFormat.setFontUnderline(false);

        cursor.setCharFormat(normalFormat);
        ui->TE_Editor->setTextCursor(cursor);
    }

    ui->negritaButton->setEnabled(true);
    ui->cursivaButton->setEnabled(true);
    ui->subrayadoButton->setEnabled(true);
}


void cframe::on_negritaButton_clicked()
{
    QTextCursor cursor = ui->TE_Editor->textCursor();
    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);
    cursor.mergeCharFormat(format);
    ui->TE_Editor->mergeCurrentCharFormat(format);
}


void cframe::on_cursivaButton_clicked()
{
    QTextCursor cursor = ui->TE_Editor->textCursor();
    QTextCharFormat format;
    format.setFontItalic(true);
    cursor.mergeCharFormat(format);
    ui->TE_Editor->mergeCurrentCharFormat(format);
}


void cframe::on_subrayadoButton_clicked()
{
    QTextCursor cursor = ui->TE_Editor->textCursor();
    QTextCharFormat format;
    format.setFontUnderline(true);
    cursor.mergeCharFormat(format);
    ui->TE_Editor->mergeCurrentCharFormat(format);
}

