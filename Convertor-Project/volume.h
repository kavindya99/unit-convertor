#ifndef VOLUME_H
#define VOLUME_H

#include <QDialog>

namespace Ui {
class volume;
}

class volume : public QDialog
{
    Q_OBJECT

public:
    explicit volume(QWidget *parent = nullptr);
    ~volume();

private slots:
    void on_mainwindow_button_clicked();

    void on_convert_button_2_clicked();

    void on_clear_button_clicked();

    void on_convert_button_clicked();

private:
    Ui::volume *ui;
};

#endif // VOLUME_H
