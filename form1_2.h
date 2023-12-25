#ifndef FORM1_2_H
#define FORM1_2_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

namespace Ui {
class Form1_2;
}

class Form1_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form1_2(QWidget *parent = nullptr);
    ~Form1_2();

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
    void Foto_1_2();
};

#endif // FORM1_2_H
