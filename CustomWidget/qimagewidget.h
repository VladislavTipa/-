#ifndef QIMAGEWIDGET_H
#define QIMAGEWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QMargins>

class QImageWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QImageWidget(QWidget *parent = nullptr);
private:
    QPixmap _originalImage;
    QString _noImageMessage;
    int _margin;
    QMargins _margins;
    QColor _backgroundColor;
    QRect actualImageRect();

public:
    void setPixmap(QPixmap pixmap);
    QPixmap pixmap(){ return _originalImage;}

    void setMargin(int value);
    int margin(){ return _margin;}
signals:
    void pixmapChanged();
    void marginChanged();


    // QWidget interface
protected:
    virtual void mouseDoubleClickEvent(QMouseEvent *event);
    virtual void paintEvent(QPaintEvent *event);
};

#endif // QIMAGEWIDGET_H
