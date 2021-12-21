#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "length.h"
#include "area.h"
#include "temperature.h"
#include "time_convert.h"
#include "volume.h"
#include "weight.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());

    //hover effect
    ui->temperature_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\nfont: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n QPushButton:hover{background-color: rgb(51, 101, 138);}");
    ui->area_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\nfont: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n QPushButton:hover{background-color: rgb(51, 101, 138);}");
    ui->length_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\nfont: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n QPushButton:hover{background-color: rgb(51, 101, 138);}");
    ui->time_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\nfont: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n QPushButton:hover{background-color: rgb(51, 101, 138);}");
    ui->volume_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\nfont: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n QPushButton:hover{background-color: rgb(51, 101, 138);}");
    ui->weight_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\nfont: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n QPushButton:hover{background-color: rgb(51, 101, 138);}");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_length_button_clicked()
{
    hide();
    length lengthWindow;
    lengthWindow.setModal(true);
    lengthWindow.exec();
}


void MainWindow::on_temperature_button_clicked()
{
    hide();
    temperature temperatureWindow;
    temperatureWindow.setModal(true);
    temperatureWindow.exec();
}


void MainWindow::on_area_button_clicked()
{
    hide();
    area areaWindow;
    areaWindow.setModal(true);
    areaWindow.exec();

}


void MainWindow::on_weight_button_clicked()
{
    hide();
    weight weightWindow;
    weightWindow.setModal(true);
    weightWindow.exec();
}


void MainWindow::on_time_button_clicked()
{
    hide();
    time_convert timeConvertWindow;
    timeConvertWindow.setModal(true);
    timeConvertWindow.exec();
}


void MainWindow::on_volume_button_clicked()
{
    hide();
    volume volumeWindow;
    volumeWindow.setModal(true);
    volumeWindow.exec();
}

