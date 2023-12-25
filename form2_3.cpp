#include "form2_3.h"
#include "ui_form2_3.h"

#include "../CustomWidget/qimagewidget.h"

Form2_3::Form2_3(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("Просмотр 2 x 3");
    VLayuot = new QVBoxLayout(this);
    GLayuot_skrean = new QGridLayout(this);
    HLayuot_button = new QHBoxLayout(this);

    button_exit = new QPushButton("Назад");
    Foto = new QPushButton("Фото");

    QImageWidget* image1_1 = new QImageWidget();
    QImageWidget* image1_2 = new QImageWidget();
    QImageWidget* image1_3 = new QImageWidget();
    QImageWidget* image2_1 = new QImageWidget();
    QImageWidget* image2_2 = new QImageWidget();
    QImageWidget* image2_3 = new QImageWidget();

    image1_1 -> setMinimumSize(300, 300);
    image1_2 -> setMinimumSize(300, 300);
    image1_3 -> setMinimumSize(300, 200);
    image2_1 -> setMinimumSize(300, 300);
    image2_2 -> setMinimumSize(300, 300);
    image2_3 -> setMinimumSize(300, 300);

    GLayuot_skrean -> addWidget(image1_1, 0, 0);
    GLayuot_skrean -> addWidget(image1_2, 0, 1);
    GLayuot_skrean -> addWidget(image1_3, 0, 2);
    GLayuot_skrean -> addWidget(image2_1, 1, 0);
    GLayuot_skrean -> addWidget(image2_2, 1, 1);
    GLayuot_skrean -> addWidget(image2_3, 1, 2);

    HLayuot_button -> addWidget(button_exit);
    HLayuot_button -> addWidget(Foto);

    VLayuot -> addLayout(HLayuot_button);
    VLayuot -> addLayout(GLayuot_skrean);

    connect(button_exit, &QPushButton::clicked, this, &Form2_3::ClikedSlotExit);
    connect(Foto, &QPushButton::clicked, this, &Form2_3::Foto_2_3);
}

Form2_3::~Form2_3()
{
}

void Form2_3::ClikedSlotExit()
{
    this->close();
    emit firstwindow();
}

void Form2_3::Foto_2_3()
{

}
