#ifndef CHECKEDITLINE_H
#define CHECKEDITLINE_H

#include <QObject>
#include <qlineedit.h>

class CheckEditLine : public QLineEdit
{
public:
    CheckEditLine(QWidget *edit/* = nullptr*/);

    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void changeEvent(QEvent *) override;
};

#endif // CHECKEDITLINE_H
