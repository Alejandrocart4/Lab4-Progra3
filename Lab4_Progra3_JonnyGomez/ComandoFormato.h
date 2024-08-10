#ifndef COMANDOFORMATO_H
#define COMANDOFORMATO_H

#include <QTextCursor>

class ComandoFormato
{
public:
    virtual ~ComandoFormato() = default;
    virtual void aplicar(QTextCursor &cursor) const = 0; // Método virtual puro
};

#endif // COMANDOFORMATO_H
