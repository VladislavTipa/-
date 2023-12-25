#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <form1_1.h>
#include <form1_2.h>
#include <form2_1.h>
#include <form2_2.h>
#include <form2_3.h>
#include <form3_2.h>
#include <form3_3.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBox_activated(int index);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Form1_1 *window1_1;
    Form2_1 *window2_1;
    Form1_2 *window1_2;
    Form2_2 *window2_2;
    Form2_3 *window2_3;
    Form3_2 *window3_2;
    Form3_3 *window3_3;
};
#endif // MAINWINDOW_H
