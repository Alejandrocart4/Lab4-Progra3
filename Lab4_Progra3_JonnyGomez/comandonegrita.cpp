#include "comandonegrita.h"

void ComandoNegrita::aplicar(QTextCursor &cursor) const
{
    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);
    cursor.setCharFormat(format);
}
