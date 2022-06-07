#include "myitem.h"

#include <QPainter>

MyItem::MyItem(QPointF p)
    : m_p(p)
{
}

QRectF MyItem::boundingRect() const { return QRectF(m_p.x(), m_p.y(), 4, 4); }

void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawLine(m_p.x(), m_p.y(), m_p.x() + 2, m_p.y() + 2);
}
