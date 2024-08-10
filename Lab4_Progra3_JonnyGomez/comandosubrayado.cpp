#include "comandosubrayado.h"

void ComandoSubrayado::aplicar(QTextCursor &cursor) const
{
    QTextCharFormat format;
    format.setFontUnderline(true);
    cursor.setCharFormat(format);
}
