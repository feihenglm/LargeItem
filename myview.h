#ifndef MYVIEW_H
#define MYVIEW_H

#include <QGraphicsView>

class MyView : public QGraphicsView
{
public:
    MyView(QWidget *parent = nullptr);

    void wheelEvent(QWheelEvent *event) override;
};

#endif // MYVIEW_H
