#ifndef MYITEM2_H
#define MYITEM2_H

#include <QGraphicsItem>

class MyItem2 : public QGraphicsItem
{
public:
    MyItem2();
    void addPoint(QPointF p);

    // QGraphicsItem interface
public:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    QList<QPointF> m_p;
};

#endif // MYITEM2_H
