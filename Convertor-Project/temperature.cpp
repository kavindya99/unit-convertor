#include "temperature.h"
#include "ui_temperature.h"
#include "mainwindow.h"

MainWindow *mainWindow3;

temperature::temperature(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::temperature)
{
    ui->setupUi(this);

    ui->convert_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\n"
                                      "color: rgb(255, 255, 255);\nfont: 75 15pt;\n"
                                      "border:none;\nborder-radius:10px;\nfont-weight:bold;} \n "
                                      "QPushButton:hover{background-color: rgb(51, 101, 138);}");

    ui->from_combobox->addItem("Celsius");
    ui->from_combobox->addItem("Kelvin");
    ui->from_combobox->addItem("Fahrenheit");

    ui->to_combobox->addItem("Celsius");
    ui->to_combobox->addItem("Kelvin");
    ui->to_combobox->addItem("Fahrenheit");
}

temperature::~temperature()
{
    delete ui;
}

void temperature::on_mainwindow_button_clicked()
{
    hide();
    mainWindow3 = new MainWindow();
    mainWindow3->show();
}


void temperature::on_clear_button_clicked()
{
    ui->from_value->setText("");
    ui->answer_label->setText("");
}


void temperature::on_convert_button_clicked()
{
    QString from;
    QString to;
    QString value;
    double get_value;
    double answer;
    bool isNum;
    int checkInput;

    value = ui->from_value->text();

    checkInput = value.toDouble(&isNum);

    if (isNum){
        from = ui->from_combobox->currentText();
        to=ui->to_combobox->currentText();

        get_value = value.toDouble();

        if(from==to){
            answer=get_value;
        }

        //celcius
        if(from=="Celsius"){
            if(to=="Kelvin"){
                answer=get_value+273.15;
            }
            else if(to=="Fahrenheit"){
                answer=(get_value*9/5)+32;
            }
        }

        //kelvin
        if(from=="Kelvin"){
            if(to=="Celsius"){
                answer=get_value-273.15;
            }
            else if("Fahrenheit"){
                answer=((get_value-273.15)*9/5)+32;
            }
        }

        //fahrenheit
        if(from=="Fahrenheit"){
            if(to=="Celsius"){
                answer=(get_value-32)*5/9;
            }
            else if(to=="Kelvin"){
                answer=((get_value-32)*5/9)+273.15;
            }
        }

        ui->answer_label->setText("");
        ui->answer_label->setText(QString::number(answer));
    }
    else{
        ui->answer_label->setText("Invalid Input");
        ui->answer_label->setStyleSheet("QLabel{ color: rgb(170, 14, 48);\nfont: 75 25pt;font-weight:bold;}");
    }

    if(from=="Kelvin" && to=="Kelvin"){
        ui->answer_label->setText(QString::number(get_value));
    }
}

