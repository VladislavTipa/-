#include "qimagewidget.h"
#include <QMouseEvent>
#include <QPainter>
#include <QFileDialog>

QImageWidget::QImageWidget(QWidget *parent) : QWidget(parent)
{
    _noImageMessage = "NO IMAGE";
    _backgroundColor = Qt::white;
    _margin = 5;
    connect(this, SIGNAL(pixmapChanged()), SLOT(repaint()));
}

QRect QImageWidget::actualImageRect()
{
    QRect imageRect = rect();
    imageRect.setSize(_originalImage.size().scaled(size(), Qt::KeepAspectRatio));
    imageRect.moveCenter(rect().center());
    return imageRect;
}

void QImageWidget::setPixmap(QPixmap pixmap)
{
    _originalImage = pixmap;
    emit pixmapChanged();
}

void QImageWidget::setMargin(int value)
{

}


void QImageWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event -> button() != Qt::LeftButton)
        return;
    QString filename = QFileDialog::getOpenFileName(this);
    if (filename.isNull())
        return;
    setPixmap(QPixmap(filename));
}

void QImageWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.save();

    painter.setBrush(_backgroundColor);
    painter.drawRect(rect());

    painter.restore();
    if (_originalImage.isNull())
    {
        painter.drawText(rect(), Qt::AlignCenter, _noImageMessage);
    }
    else
    {
        QRect imageRect = actualImageRect();
        painter.drawPixmap(imageRect, _originalImage);
    }
}
