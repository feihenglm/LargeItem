#include "myitem2.h"
#include <QPainter>

MyItem2::MyItem2() { }

void MyItem2::addPoint(QPointF p) { m_p << p; }

QRectF MyItem2::boundingRect() const
{
    QRectF ret;
    for (const QPointF &p : m_p) {
        ret |= QRectF(p.x(), p.y(), 4, 4);
    }
    return ret;
}

void MyItem2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    for (const QPointF &p : m_p) {
        painter->drawLine(p.x(), p.y(), p.x() + 2, p.y() + 2);
    }
}
