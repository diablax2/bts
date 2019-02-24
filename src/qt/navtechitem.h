#ifndef BTSTECHITEM_H
#define BTSTECHITEM_H

#include <QWidget>

namespace Ui {
class navtechitem;
}

class navtechitem : public QWidget
{
    Q_OBJECT

public:
    explicit navtechitem(QWidget *parent = 0);
    ~navtechitem();
    void setHost(QString hostStr);
    void setName(QString nameStr);

private:
    Ui::navtechitem *ui;
    QString host;
    QString name;
};

#endif // BTSTECHITEM_H
