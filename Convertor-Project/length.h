#ifndef LENGTH_H
#define LENGTH_H

#include <QDialog>

namespace Ui {
class length;
}

class length : public QDialog
{
    Q_OBJECT

public:
    explicit length(QWidget *parent = nullptr);
    ~length();

private slots:
    void on_mainwindow_button_clicked();

    void on_convert_button_clicked();

    void on_clear_button_clicked();

private:
    Ui::length *ui;
};

#endif // LENGTH_H
