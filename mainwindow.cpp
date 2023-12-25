#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Выбор режима просмотра");
    window1_1 = new Form1_1();
    connect(window1_1, &Form1_1::firstwindow, this, &MainWindow::show);
    window1_2 = new Form1_2();
    connect(window1_2, &Form1_2::firstwindow, this, &MainWindow::show);
    window2_1 = new Form2_1();
    connect(window2_1, &Form2_1::firstwindow, this, &MainWindow::show);
    window2_2 = new Form2_2();
    connect(window2_2, &Form2_2::firstwindow, this, &MainWindow::show);
    window2_3 = new Form2_3();
    connect(window2_3, &Form2_3::firstwindow, this, &MainWindow::show);
    window3_2 = new Form3_2();
    connect(window3_2, &Form3_2::firstwindow, this, &MainWindow::show);
    window3_3 = new Form3_3();
    connect(window3_3, &Form3_3::firstwindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_activated(int index)
{
    if (index == 0)
    {
        window1_1 -> show();
        this -> close();
    }
    if (index == 1)
    {
        window1_2 -> show();
        this -> close();
    }
    if (index == 2)
    {
        window2_1 -> show();
        this -> close();
    }
    if (index == 3)
    {
        window2_2 -> show();
        this -> close();
    }
    if (index == 4)
    {
        window2_3 -> show();
        this -> close();
    }
    if (index == 5)
    {
        window3_2 -> show();
        this -> close();
    }
    if (index == 6)
    {
        window3_3 -> show();
        this -> close();
    }
}


void MainWindow::on_pushButton_clicked()
{
    this->close();
}

