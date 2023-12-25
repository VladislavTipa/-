#ifndef FORM2_3_H
#define FORM2_3_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

namespace Ui {
class Form2_3;
}

class Form2_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2_3(QWidget *parent = nullptr);
    ~Form2_3();

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
    void Foto_2_3();
};

#endif // FORM2_3_H
