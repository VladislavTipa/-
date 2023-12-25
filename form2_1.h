#ifndef FORM2_1_H
#define FORM2_1_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

namespace Ui {
class Form2_1;
}

class Form2_1 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2_1(QWidget *parent = nullptr);
    ~Form2_1();

signals:
    void firstwindow();

private:
    QPushButton *button_exit;
    QPushButton *Foto;

    QHBoxLayout *HLayuot_skrean;
    QHBoxLayout *HLayuot_button;
    QVBoxLayout *VLayuot;

private slots:
    void ClikedSlotExit();
    void Foto_2_1();
};

#endif // FORM2_1_H
