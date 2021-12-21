#include "time_convert.h"
#include "ui_time_convert.h"
#include "mainwindow.h"

MainWindow *mainWindow4;

time_convert::time_convert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::time_convert)
{
    ui->setupUi(this);

    ui->convert_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\n"
                                      "color: rgb(255, 255, 255);\nfont: 75 15pt;\n"
                                      "border:none;\nborder-radius:10px;\nfont-weight:bold;} \n "
                                      "QPushButton:hover{background-color: rgb(51, 101, 138);}");

    ui->from_combobox->addItem("Second");
    ui->from_combobox->addItem("Milisecond");
    ui->from_combobox->addItem("Microsecond");
    ui->from_combobox->addItem("Nanosecond");
    ui->from_combobox->addItem("Picosecond");
    ui->from_combobox->addItem("Minute");
    ui->from_combobox->addItem("Hour");
    ui->from_combobox->addItem("Day");
    ui->from_combobox->addItem("Week");
    ui->from_combobox->addItem("Month");
    ui->from_combobox->addItem("Year");

    ui->to_combobox->addItem("Second");
    ui->to_combobox->addItem("Milisecond");
    ui->to_combobox->addItem("Microsecond");
    ui->to_combobox->addItem("Nanosecond");
    ui->to_combobox->addItem("Picosecond");
    ui->to_combobox->addItem("Minute");
    ui->to_combobox->addItem("Hour");
    ui->to_combobox->addItem("Day");
    ui->to_combobox->addItem("Week");
    ui->to_combobox->addItem("Month");
    ui->to_combobox->addItem("Year");
}

time_convert::~time_convert()
{
    delete ui;
}

void time_convert::on_mainwindow_button_clicked()
{
    hide();
    mainWindow4 = new MainWindow();
    mainWindow4->show();
}

void time_convert::on_clear_button_clicked()
{
    ui->from_value->setText("");
    ui->answer_label->setText("");
}


void time_convert::on_convert_button_clicked()
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

        //second
        if(from=="Second"){
            if(to=="Milisecond"){
                answer=get_value*1000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value*1000000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*1000000000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value*1000000000000.00;
            }
            else if (to=="Minute") {
                answer=get_value/60.00;
            }
            else if (to=="Hour") {
                answer=get_value/3600.00;
            }
            else if (to=="Day") {
                answer=get_value/86400.00;
            }
            else if (to=="Week") {
                answer=get_value/604800.00;
            }
            else if (to=="Month") {
                answer=get_value/2628000.00;
            }
            else if (to=="Year") {
                answer=get_value/31540000.00;
            }
        }

        //milisecond
        if(from=="Milisecond"){
            if(to=="Second"){
                answer=get_value/1000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value*1000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*1000000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value*1000000000.00;
            }
            else if (to=="Minute") {
                answer=get_value/6000.00;
            }
            else if (to=="Hour") {
                answer=get_value/3600000.00;
            }
            else if (to=="Day") {
                answer=get_value/86400000.00;
            }
            else if (to=="Week") {
                answer=get_value/604800000.00;
            }
            else if (to=="Month") {
                answer=get_value/2628000000.00;
            }
            else if (to=="Year") {
                answer=get_value/31540000000.00;
            }
        }

        //microsecond
        if(from=="Microsecond"){
            if(to=="Second"){
                answer=get_value/1000000.00;
            }
            else if (to=="Milisecond") {
                answer=get_value/1000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*1000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value*1000000.00;
            }
            else if (to=="Minute") {
                answer=get_value/60000000.00;
            }
            else if (to=="Hour") {
                answer=get_value/3600000000.00;
            }
            else if (to=="Day") {
                answer=get_value/86400000000.00;
            }
            else if (to=="Week") {
                answer=get_value/604800000000.00;
            }
            else if (to=="Month") {
                answer=get_value/2628000000000.00;
            }
            else if (to=="Year") {
                answer=get_value/31540000000000.00;
            }
        }

        //nanosecond
        if(from=="Nanosecond"){
            if(to=="Second"){
                answer=get_value/1000000000.00;
            }
            else if (to=="Milisecond") {
                answer=get_value/1000000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value/1000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value*1000.00;
            }
            else if (to=="Minute") {
                answer=get_value/60000000000.00;
            }
            else if (to=="Hour") {
                answer=get_value/3600000000000.00;
            }
            else if (to=="Day") {
                answer=get_value/86400000000000.00;
            }
            else if (to=="Week") {
                answer=get_value/604800000000000.00;
            }
            else if (to=="Month") {
                answer=get_value/2628000000000000.00;
            }
            else if (to=="Year") {
                answer=get_value/31540000000000000.00;
            }
        }

        //picosecond
        if(from=="Picosecond"){
            if(to=="Second"){
                answer=get_value/1000000000000.00;
            }
            else if (to=="Milisecond") {
                answer=get_value/1000000000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value/1000000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value/1000.00;
            }
            else if (to=="Minute") {
                answer=get_value/60000000000000.00;
            }
            else if (to=="Hour") {
                answer=get_value/3600000000000000.00;
            }
            else if (to=="Day") {
                answer=get_value/86400000000000000.00;
            }
            else if (to=="Week") {
                answer=get_value/604800000000000000.00;
            }
            else if (to=="Month") {
                answer=get_value/2628000000000000000.00;
            }
            else if (to=="Year") {
                answer=get_value/9233000000000000000.00;
            }
        }

        //minute
        if(from=="Minute"){
            if(to=="Second"){
                answer=get_value*60.00;
            }
            else if (to=="Milisecond") {
                answer=get_value*60000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value*60000000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*60000000000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value/60000000000000.00;
            }
            else if (to=="Hour") {
                answer=get_value/60.00;
            }
            else if (to=="Day") {
                answer=get_value/1440.00;
            }
            else if (to=="Week") {
                answer=get_value/10080.00;
            }
            else if (to=="Month") {
                answer=get_value/43800.00;
            }
            else if (to=="Year") {
                answer=get_value/525600.00;
            }
        }

        //hour
        if(from=="Hour"){
            if(to=="Second"){
                answer=get_value*3600.00;
            }
            else if (to=="Milisecond") {
                answer=get_value*3600000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value*3600000000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*3600000000000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value/3600000000000000.00;
            }
            else if (to=="Minute") {
                answer=get_value*60.00;
            }
            else if (to=="Day") {
                answer=get_value/24.00;
            }
            else if (to=="Week") {
                answer=get_value/168.00;
            }
            else if (to=="Month") {
                answer=get_value/730.00;
            }
            else if (to=="Year") {
                answer=get_value/8760.00;
            }
        }

        //day
        if(from=="Day"){
            if(to=="Second"){
                answer=get_value*86400.00;
            }
            else if (to=="Milisecond") {
                answer=get_value*3600000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value*86400000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*86400000000000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value/86400000000000000.00;
            }
            else if (to=="Minute") {
                answer=get_value*1440.00;
            }
            else if (to=="Hour") {
                answer=get_value*24.00;
            }
            else if (to=="Week") {
                answer=get_value/7.00;
            }
            else if (to=="Month") {
                answer=get_value/30.417;
            }
            else if (to=="Year") {
                answer=get_value/365.00;
            }
        }

        //week
        if(from=="Week"){
            if(to=="Second"){
                answer=get_value*604800.00;
            }
            else if (to=="Milisecond") {
                answer=get_value*3600000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value*604800000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*604800000000000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value/604800000000000000.00;
            }
            else if (to=="Minute") {
                answer=get_value*10080.00;
            }
            else if (to=="Hour") {
                answer=get_value*168.00;
            }
            else if (to=="Day") {
                answer=get_value/7.00;
            }
            else if (to=="Month") {
                answer=get_value/4.345;
            }
            else if (to=="Year") {
                answer=get_value/52.143;
            }
        }

        //month
        if(from=="Month"){
            if(to=="Second"){
                answer=get_value*2628000;
            }
            else if (to=="Milisecond") {
                answer=get_value*2628000000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value*2628000000000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*2628000000000000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value*2628000000000000000.00;
            }
            else if (to=="Minute") {
                answer=get_value*4380.00;
            }
            else if (to=="Hour") {
                answer=get_value*730.00;
            }
            else if (to=="Day") {
                answer=get_value*30.417;
            }
            else if (to=="Week") {
                answer=get_value*4.345;
            }
            else if (to=="Year") {
                answer=get_value/12.00;
            }
        }

        //year
        if(from=="Year"){
            if(to=="Second"){
                answer=get_value*31540000;
            }
            else if (to=="Milisecond") {
                answer=get_value*31540000000.00;
            }
            else if (to=="Microsecond") {
                answer=get_value*31540000000000.00;
            }
            else if (to=="Nanosecond") {
                answer=get_value*31540000000000000.00;
            }
            else if (to=="Picosecond") {
                answer=get_value*9223000000000000000.00;
            }
            else if (to=="Minute") {
                answer=get_value*525600.00;
            }
            else if (to=="Hour") {
                answer=get_value*8760.00;
            }
            else if (to=="Day") {
                answer=get_value*365.00;
            }
            else if (to=="Week") {
                answer=get_value*52.143;
            }
            else if (to=="Month") {
                answer=get_value/12.00;
            }
        }


        ui->answer_label->setText("");
        ui->answer_label->setText(QString::number(answer));
    }
    else{
        ui->answer_label->setText("Invalid Input");
        ui->answer_label->setStyleSheet("QLabel{ color: rgb(170, 14, 48);\nfont: 75 25pt;font-weight:bold;}");
    }

}
