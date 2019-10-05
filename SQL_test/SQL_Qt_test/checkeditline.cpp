#include "checkeditline.h"
#include <QDebug>
#include <QMouseEvent>
#include <QEvent>

CheckEditLine::CheckEditLine(QWidget *edit) : QLineEdit (edit)
{

}

void CheckEditLine::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "mousePressEvent " << event->x() << ", " << event->y();
}

void CheckEditLine::changeEvent(QEvent *)
{

}
