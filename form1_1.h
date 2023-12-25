#ifndef FORM1_1_H
#define FORM1_1_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include <QFileDialog>

#include <QWidget>
#include <QPixmap>

namespace Ui {
class Form1_1;
}

class Form1_1 : public QWidget
{
    Q_OBJECT

public:
    explicit Form1_1(QWidget *parent = nullptr);
    ~Form1_1();

signals:
    void firstwindow();

private:
    QPushButton *button_exit;
    QPushButton *Foto;

    QVBoxLayout *VLayuot_skrean;
    QHBoxLayout *HLayuot_button;
    QVBoxLayout *VLayuot;

private slots:
    void ClikedSlotExit();
    void Foto_1_1();
};

#endif // FORM1_1_H
