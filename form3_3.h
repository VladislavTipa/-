#ifndef FORM3_3_H
#define FORM3_3_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

namespace Ui {
class Form3_3;
}

class Form3_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Form3_3(QWidget *parent = nullptr);
    ~Form3_3();

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
    void Foto_3_3();
};

#endif // FORM3_3_H
