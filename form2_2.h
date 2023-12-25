#ifndef FORM2_2_H
#define FORM2_2_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

namespace Ui {
class Form2_2;
}

class Form2_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2_2(QWidget *parent = nullptr);
    ~Form2_2();

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
    void Foto_2_2();
};

#endif // FORM2_2_H
