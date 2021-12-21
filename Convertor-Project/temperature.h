#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <QDialog>

namespace Ui {
class temperature;
}

class temperature : public QDialog
{
    Q_OBJECT

public:
    explicit temperature(QWidget *parent = nullptr);
    ~temperature();

private slots:
    void on_mainwindow_button_clicked();

    void on_clear_button_clicked();

    void on_convert_button_clicked();

private:
    Ui::temperature *ui;
};

#endif // TEMPERATURE_H
