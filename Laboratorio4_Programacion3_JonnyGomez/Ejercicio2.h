#ifndef EJERCICIO2_H
#define EJERCICIO2_H

#include <QPainter>
#include <QPoint>
#include <QGraphicsView>

 QGraphicsView* lienzo;
// Clase base abstracta Figura
class Figura {
public:
    virtual ~Figura() {}

    // Método virtual puro para dibujar la figura
    virtual void dibujar(QPainter* painter) const = 0;

    // Método virtual puro para mover la figura
    virtual void mover(int dx, int dy) = 0;
};

// Clase derivada Circulo
class Circulo : public Figura {
    QPoint centro;
    int radio;

public:
    Circulo(QPoint centro, int radio) : centro(centro), radio(radio) {}

    void dibujar(QPainter* painter) const override {
        painter->drawEllipse(centro, radio, radio);
    }

    void mover(int dx, int dy) override {
        centro += QPoint(dx, dy);
    }
};

// Clase derivada Rectangulo
class Rectangulo : public Figura {
    QRect rect;

public:
    Rectangulo(QPoint topLeft, QPoint bottomRight) : rect(topLeft, bottomRight) {}

    void dibujar(QPainter* painter) const override {
        painter->drawRect(rect);
    }

    void mover(int dx, int dy) override {
        rect.translate(dx, dy);
    }
};

// Clase derivada Triangulo
class Triangulo : public Figura {
    QPoint p1, p2, p3;

public:
    Triangulo(QPoint p1, QPoint p2, QPoint p3) : p1(p1), p2(p2), p3(p3) {}

    void dibujar(QPainter* painter) const override {
        QPolygon polygon;
        polygon << p1 << p2 << p3;
        painter->drawPolygon(polygon);
    }

    void mover(int dx, int dy) override {
        p1 += QPoint(dx, dy);
        p2 += QPoint(dx, dy);
        p3 += QPoint(dx, dy);
    }
};


#endif // EJERCICIO2_H
