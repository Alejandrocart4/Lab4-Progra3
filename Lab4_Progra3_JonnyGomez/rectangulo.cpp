#include "rectangulo.h"
#include <QPainter>
#include <QRect>


void Rectangulo::dibujar(QPainter *painter) const
{
    painter->drawRect(rect);
}
