#ifndef FORM3_2_H
#define FORM3_2_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

namespace Ui {
class Form3_2;
}

class Form3_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form3_2(QWidget *parent = nullptr);
    ~Form3_2();

signals:
    void firstwindow();

private:
    QPushButton *button_exit;
    QPushButton *Foto;

    QGridLayout *GLayuot_skrean;
    QHBoxLayout *HLayuot_button;
    QVBoxLayout *VLayuot;

private slots:
    void ClikedSlotExit();
    void Foto_3_2();
};

#endif // FORM3_2_H
