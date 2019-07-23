#include "m_sqlquery.h"
#include <QMessageBox>

M_SqlQuery::M_SqlQuery()
{

}

void M_SqlQuery::getFromLibrary()
{
    QMessageBox msgBox;
    msgBox.setText("ANY TEXT FROM DLL");
    msgBox.exec();
}
