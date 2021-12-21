#ifndef TIME_CONVERT_H
#define TIME_CONVERT_H

#include <QDialog>

namespace Ui {
class time_convert;
}

class time_convert : public QDialog
{
    Q_OBJECT

public:
    explicit time_convert(QWidget *parent = nullptr);
    ~time_convert();

private slots:
    void on_mainwindow_button_clicked();

    void on_clear_button_clicked();

    void on_convert_button_clicked();

private:
    Ui::time_convert *ui;
};

#endif // TIME_CONVERT_H
