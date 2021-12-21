#ifndef WEIGHT_H
#define WEIGHT_H

#include <QDialog>

namespace Ui {
class weight;
}

class weight : public QDialog
{
    Q_OBJECT

public:
    explicit weight(QWidget *parent = nullptr);
    ~weight();

private slots:
    void on_mainwindow_button_clicked();

    void on_clear_button_clicked();

    void on_convert_button_clicked();

private:
    Ui::weight *ui;
};

#endif // WEIGHT_H
