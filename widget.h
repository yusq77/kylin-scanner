#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
class Widget : public QWidget
{
    Q_OBJECT

public:

    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QFrame *line;
};

#endif // WIDGET_H