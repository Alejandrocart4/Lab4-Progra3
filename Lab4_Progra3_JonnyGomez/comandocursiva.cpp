#include "comandocursiva.h"

void ComandoCursiva::aplicar(QTextCursor &cursor) const
{
    QTextCharFormat format;
    format.setFontItalic(true);
    cursor.setCharFormat(format);
}
