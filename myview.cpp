#include "myview.h"

#include <QWheelEvent>

MyView::MyView(QWidget *parent)
    : QGraphicsView(parent)
{
}

void MyView::wheelEvent(QWheelEvent *event)
{
    int v = event->delta();
    if (v > 0) {
        scale(1.2, 1.2);
    } else {
        scale(1 / 1.2, 1 / 1.2);
    }
}
