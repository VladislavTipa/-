#include "form2_1.h"
#include "ui_form2_1.h"

#include "../CustomWidget/qimagewidget.h"

Form2_1::Form2_1(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("Просмотр 2 x 1");
    VLayuot = new QVBoxLayout(this);
    HLayuot_skrean = new QHBoxLayout(this);
    HLayuot_button = new QHBoxLayout(this);

    button_exit = new QPushButton("Назад");
    Foto = new QPushButton("Фото");

    QImageWidget* image1_1 = new QImageWidget();
    QImageWidget* image2_1 = new QImageWidget();

    image1_1 -> setMinimumSize(300, 300);
    image2_1 -> setMinimumSize(300, 300);

    HLayuot_skrean -> addWidget(image1_1);
    HLayuot_skrean -> addWidget(image2_1);

    HLayuot_button -> addWidget(button_exit);
    HLayuot_button -> addWidget(Foto);

    VLayuot -> addLayout(HLayuot_button);
    VLayuot -> addLayout(HLayuot_skrean);

    connect(button_exit, &QPushButton::clicked, this, &Form2_1::ClikedSlotExit);
    connect(Foto, &QPushButton::clicked, this, &Form2_1::Foto_2_1);
}

Form2_1::~Form2_1()
{
}

void Form2_1::ClikedSlotExit()
{
    this->close();
    emit firstwindow();
}

void Form2_1::Foto_2_1()
{
}
