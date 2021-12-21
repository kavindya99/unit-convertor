#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_length_button_clicked();

    void on_temperature_button_clicked();

    void on_area_button_clicked();

    void on_weight_button_clicked();

    void on_time_button_clicked();

    void on_volume_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
