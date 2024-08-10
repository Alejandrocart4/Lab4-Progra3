#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include "canvas.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class cframe;
}
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

private slots:
    void on_btnAgregarTarea_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_btnAgregarFigura_clicked();

    void on_normalButton_clicked();

    void on_negritaButton_clicked();

    void on_cursivaButton_clicked();

    void on_subrayadoButton_clicked();

private:
    Ui::cframe *ui;
    Canvas *canvas;
};
#endif // CFRAME_H
