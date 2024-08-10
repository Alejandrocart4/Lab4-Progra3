#include "Triangulo.h"
#include <QPainter>
#include "QPolygon"


void Triangulo::dibujar(QPainter *painter) const
{
    painter->drawPolygon(polygon);
}
