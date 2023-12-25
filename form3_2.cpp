#include "form3_2.h"
#include "ui_form3_2.h"

#include "../CustomWidget/qimagewidget.h"

Form3_2::Form3_2(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("Просмотр 3 x 2");
    VLayuot = new QVBoxLayout(this);
    GLayuot_skrean = new QGridLayout(this);
    HLayuot_button = new QHBoxLayout(this);

    button_exit = new QPushButton("Назад");
    Foto = new QPushButton("Фото");

    QImageWidget* image1_1 = new QImageWidget();
    QImageWidget* image1_2 = new QImageWidget();
    QImageWidget* image2_1 = new QImageWidget();
    QImageWidget* image2_2 = new QImageWidget();
    QImageWidget* image3_1 = new QImageWidget();
    QImageWidget* image3_2 = new QImageWidget();

    image1_1 -> setMinimumSize(300, 300);
    image1_2 -> setMinimumSize(300, 300);
    image2_1 -> setMinimumSize(300, 200);
    image2_2 -> setMinimumSize(300, 300);
    image3_1 -> setMinimumSize(300, 300);
    image3_2 -> setMinimumSize(300, 300);

    GLayuot_skrean -> addWidget(image1_1, 0, 0);
    GLayuot_skrean -> addWidget(image1_2, 0, 1);
    GLayuot_skrean -> addWidget(image2_1, 1, 0);
    GLayuot_skrean -> addWidget(image2_2, 1, 1);
    GLayuot_skrean -> addWidget(image3_1, 2, 0);
    GLayuot_skrean -> addWidget(image3_2, 2, 1);

    HLayuot_button -> addWidget(button_exit);
    HLayuot_button -> addWidget(Foto);

    VLayuot -> addLayout(HLayuot_button);
    VLayuot -> addLayout(GLayuot_skrean);

    connect(button_exit, &QPushButton::clicked, this, &Form3_2::ClikedSlotExit);
    connect(Foto, &QPushButton::clicked, this, &Form3_2::Foto_3_2);
}

Form3_2::~Form3_2()
{
}

void Form3_2::ClikedSlotExit()
{
    this->close();
    emit firstwindow();
}

void Form3_2::Foto_3_2()
{
}
