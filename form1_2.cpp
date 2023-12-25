#include "form1_2.h"
#include "ui_form1_2.h"

#include "../CustomWidget/qimagewidget.h"

Form1_2::Form1_2(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("Просмотр 1 x 2");
    VLayuot = new QVBoxLayout(this);
    VLayuot_skrean = new QVBoxLayout(this);
    HLayuot_button = new QHBoxLayout(this);

    button_exit = new QPushButton("Назад");
    Foto = new QPushButton("Фото");

    QImageWidget* image1_1 = new QImageWidget();
    QImageWidget* image1_2 = new QImageWidget();

    image1_1 -> setMinimumSize(300, 300);
    image1_2 -> setMinimumSize(300, 300);

    VLayuot_skrean -> addWidget(image1_1);
    VLayuot_skrean -> addWidget(image1_2);

    HLayuot_button -> addWidget(button_exit);
    HLayuot_button -> addWidget(Foto);

    VLayuot -> addLayout(HLayuot_button);
    VLayuot -> addLayout(VLayuot_skrean);

    connect(button_exit, &QPushButton::clicked, this, &Form1_2::ClikedSlotExit);
    connect(Foto, &QPushButton::clicked, this, &Form1_2::Foto_1_2);
}

Form1_2::~Form1_2()
{
}

void Form1_2::ClikedSlotExit()
{
    this->close();
    emit firstwindow();
}

void Form1_2::Foto_1_2()
{
}
