#include "circulo.h"
#include <QPainter>


void Circulo::dibujar(QPainter *painter) const
{
    painter->drawEllipse(centro, radio, radio);
}

