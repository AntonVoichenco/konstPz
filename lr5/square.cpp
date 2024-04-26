#include "square.h"
#include <QPainter>

Square::Square(QPointF point, QObject *parent) :
    Figure(point,parent)
{
    Q_UNUSED(point)
}

Square::~Square()
{

}

// Реализуем метод отрисовки
void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::black, 2));

    qreal sideLength = qMin(qAbs(endPoint().x() - startPoint().x()), qAbs(endPoint().y() - startPoint().y()));
    QRectF squareRect(startPoint(), QSizeF(sideLength, sideLength));

    painter->drawRect(squareRect);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

