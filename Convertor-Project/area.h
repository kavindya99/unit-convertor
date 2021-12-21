#ifndef AREA_H
#define AREA_H

#include <QDialog>

namespace Ui {
class area;
}

class area : public QDialog
{
    Q_OBJECT

public:
    explicit area(QWidget *parent = nullptr);
    ~area();

private slots:
    void on_mainwindow_button_clicked();

    void on_clear_button_clicked();

    void on_convert_button_clicked();

private:
    Ui::area *ui;
};

#endif // AREA_H
