#include "form1_1.h"
#include "ui_form1_1.h"

#include "../CustomWidget/qimagewidget.h"


Form1_1::Form1_1(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("Просмотр 1 x 1");
    VLayuot = new QVBoxLayout(this);
    VLayuot_skrean = new QVBoxLayout(this);
    HLayuot_button = new QHBoxLayout(this);

    button_exit = new QPushButton("Назад");
    Foto = new QPushButton("Фото");

    QImageWidget* image1_1 = new QImageWidget();

    image1_1 -> setMinimumSize(300, 300);

    VLayuot_skrean -> addWidget(image1_1);

    HLayuot_button -> addWidget(button_exit);
    HLayuot_button -> addWidget(Foto);

    VLayuot -> addLayout(HLayuot_button);
    VLayuot -> addLayout(VLayuot_skrean);

    connect(button_exit, &QPushButton::clicked, this, &Form1_1::ClikedSlotExit);
    connect(Foto, &QPushButton::clicked, this, &Form1_1::Foto_1_1);

}

Form1_1::~Form1_1()
{
}

void Form1_1::ClikedSlotExit()
{
    this->close();
    emit firstwindow();
}

void Form1_1::Foto_1_1()
{
//    QImageWidget* image1_1 = findChild<QImageWidget*>("image1_1"); // Найдите виджет по имени

//    if (image1_1)
//    {
//        QImage image = image1_1->getImage();

//        QString fileName = QFileDialog::getSaveFileName(this, "Сохранить изображение", "", "Изображения (*.png *.jpg)");

//        if (!fileName.isEmpty())
//        {
//            image.save(fileName);
//        }
//    }




    //QPixmap myGrab = grab(QRect(QPoint(10, 10), QSize(100, 100)));
    //QPixmap QWidget::grab(const QRect &rectangle = QRect(QPoint(0, 0), QSize(-1, -1));
}
