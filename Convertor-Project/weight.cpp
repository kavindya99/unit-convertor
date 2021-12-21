#include "weight.h"
#include "ui_weight.h"
#include "mainwindow.h"

MainWindow *mainWindow6;

weight::weight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weight)
{
    ui->setupUi(this);

    ui->convert_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\n"
                                      "font: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n "
                                      "QPushButton:hover{background-color: rgb(51, 101, 138);}");

    ui->from_combobox->addItem("Kilogram");
    ui->from_combobox->addItem("Gram");
    ui->from_combobox->addItem("Miligram");
    ui->from_combobox->addItem("Metric Ton");
    ui->from_combobox->addItem("Long Ton");
    ui->from_combobox->addItem("Short Ton");
    ui->from_combobox->addItem("Pound");
    ui->from_combobox->addItem("Ounce");
    ui->from_combobox->addItem("Carrat");
    ui->from_combobox->addItem("Atomic Mass Unit");

    ui->to_combobox->addItem("Kilogram");
    ui->to_combobox->addItem("Gram");
    ui->to_combobox->addItem("Miligram");
    ui->to_combobox->addItem("Metric Ton");
    ui->to_combobox->addItem("Long Ton");
    ui->to_combobox->addItem("Short Ton");
    ui->to_combobox->addItem("Pound");
    ui->to_combobox->addItem("Ounce");
    ui->to_combobox->addItem("Carrat");
    ui->to_combobox->addItem("Atomic Mass Unit");
}

weight::~weight()
{
    delete ui;
}

void weight::on_mainwindow_button_clicked()
{
    hide();
    mainWindow6 = new MainWindow();
    mainWindow6->show();
}


void weight::on_clear_button_clicked()
{
    ui->from_value->setText("");
}


void weight::on_convert_button_clicked()
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

        //kilogram
        if(from=="Kilogram"){
            if(to=="Gram"){
                answer=get_value*1000.00;
            }
            else if (to=="Miligram") {
                answer=get_value*1000000.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value/1000.00;
            }
            else if (to=="Long Ton") {
                answer=get_value/1016.00;
            }
            else if (to=="Short Ton") {
                answer=get_value/907.00;
            }
            else if (to=="Pound") {
                answer=get_value*2.205;
            }
            else if (to=="Ounce") {
                answer=get_value*35.274;
            }
            else if (to=="Carrat") {
                answer=get_value*5000.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000;
            }
        }

        //gram
        if(from=="Gram"){
            if(to=="Kilogram"){
                answer=get_value/1000.00;
            }
            else if (to=="Miligram") {
                answer=get_value*1000.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value/1000000.00;
            }
            else if (to=="Long Ton") {
                answer=get_value/1016000.00;
            }
            else if (to=="Short Ton") {
                answer=get_value/907185.00;
            }
            else if (to=="Pound") {
                answer=get_value/454.00;
            }
            else if (to=="Ounce") {
                answer=get_value*28.35;
            }
            else if (to=="Carrat") {
                answer=get_value*5.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000;
            }
        }

        //miligram
        if(from=="Miligram"){
            if(to=="Kilogram"){
                answer=get_value/1000000.00;
            }
            else if (to=="Gram") {
                answer=get_value/1000.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value/1000000000.00;
            }
            else if (to=="Long Ton") {
                answer=get_value/1016000000.00;
            }
            else if (to=="Short Ton") {
                answer=get_value/907185000.00;
            }
            else if (to=="Pound") {
                answer=get_value/453592.00;
            }
            else if (to=="Ounce") {
                answer=get_value/28350;
            }
            else if (to=="Carrat") {
                answer=get_value/200.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000;
            }
        }

        //metric ton
        if(from=="Metric Ton"){
            if(to=="Kilogram"){
                answer=get_value*1000.00;
            }
            else if (to=="Gram") {
                answer=get_value*1000000.00;
            }
            else if (to=="Miligram") {
                answer=get_value/1000000000.00;
            }
            else if (to=="Long Ton") {
                answer=get_value/1.016;
            }
            else if (to=="Short Ton") {
                answer=get_value*1.102;
            }
            else if (to=="Pound") {
                answer=get_value*2205.00;
            }
            else if (to=="Ounce") {
                answer=get_value*35274.00;
            }
            else if (to=="Carrat") {
                answer=get_value*5000000.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000;
            }
        }

        //long ton
        if(from=="Long Ton"){
            if(to=="Kilogram"){
                answer=get_value*1016.00;
            }
            else if (to=="Gram") {
                answer=get_value*1016000.00;
            }
            else if (to=="Miligram") {
                answer=get_value*1016000000.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value*1.016;
            }
            else if (to=="Short Ton") {
                answer=get_value*1.12;
            }
            else if (to=="Pound") {
                answer=get_value*2240.00;
            }
            else if (to=="Ounce") {
                answer=get_value*35840.00;
            }
            else if (to=="Carrat") {
                answer=get_value*5086000.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000.00;
            }
        }

        //short ton
        if(from=="Short Ton"){
            if(to=="Kilogram"){
                answer=get_value*907.00;
            }
            else if (to=="Gram") {
                answer=get_value*907185.00;
            }
            else if (to=="Miligram") {
                answer=get_value*907200000.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value/1.102;
            }
            else if (to=="Long Ton") {
                answer=get_value/1.12;
            }
            else if (to=="Pound") {
                answer=get_value*2000.00;
            }
            else if (to=="Ounce") {
                answer=get_value*32000.00;
            }
            else if (to=="Carrat") {
                answer=get_value*4536000.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000.00;
            }
        }

        //pound
        if(from=="Pound"){
            if(to=="Kilogram"){
                answer=get_value/2.205;
            }
            else if (to=="Gram") {
                answer=get_value*454.00;
            }
            else if (to=="Miligram") {
                answer=get_value*453592.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value/2205.00;
            }
            else if (to=="Long Ton") {
                answer=get_value/2240.00;
            }
            else if (to=="Short Ton") {
                answer=get_value/2000.00;
            }
            else if (to=="Ounce") {
                answer=get_value*16.00;
            }
            else if (to=="Carrat") {
                answer=get_value*2268.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000.00;
            }
        }

        //ounce
        if(from=="Ounce"){
            if(to=="Kilogram"){
                answer=get_value/35.274;
            }
            else if (to=="Gram") {
                answer=get_value*28.35;
            }
            else if (to=="Miligram") {
                answer=get_value*28350.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value/35274.00;
            }
            else if (to=="Long Ton") {
                answer=get_value/35840.00;
            }
            else if (to=="Short Ton") {
                answer=get_value/32000.00;
            }
            else if (to=="Pound") {
                answer=get_value/16.00;
            }
            else if (to=="Carrat") {
                answer=get_value*142.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000.00;
            }
        }

        //carrat
        if(from=="Carrat"){
            if(to=="Kilogram"){
                answer=get_value/5000.00;
            }
            else if (to=="Gram") {
                answer=get_value/5.00;
            }
            else if (to=="Miligram") {
                answer=get_value*200.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value/5000000.00;
            }
            else if (to=="Long Ton") {
                answer=get_value/5080000.00;
            }
            else if (to=="Short Ton") {
                answer=get_value/4536000.00;
            }
            else if (to=="Pound") {
                answer=get_value/2268.00;
            }
            else if (to=="Ounce") {
                answer=get_value/142.00;
            }
            else if (to=="Atomic Mass Unit") {
                answer=get_value*9223000000000000000.00;
            }
        }

        //atomic mass unit
        if(from=="Atomic Mass Unit"){
            if(to=="Kilogram"){
                answer=get_value/9223000000000000000.00;
            }
            else if (to=="Gram") {
                answer=get_value/9223000000000000000.00;
            }
            else if (to=="Miligram") {
                answer=get_value/9223000000000000000.00;
            }
            else if (to=="Metric Ton") {
                answer=get_value/9223000000000000000.00;
            }
            else if (to=="Long Ton") {
                answer=get_value/9223000000000000000.00;
            }
            else if (to=="Short Ton") {
                answer=get_value/9223000000000000000.00;
            }
            else if (to=="Pound") {
                answer=get_value/9223000000000000000.00;
            }
            else if (to=="Ounce") {
                answer=get_value/9223000000000000000.00;
            }
            else if (to=="Carrot") {
                answer=get_value*9223000000000000000.00;
            }
        }
        ui->answer_label->setText("");
        ui->answer_label->setStyleSheet("QLabel{color:rgba(97, 144, 198, 1);font: 75 25pt;font-weight:bold;}");
        ui->answer_label->setText(QString::number(answer));
    }
    else if(value==""){
        ui->answer_label->setStyleSheet("QLabel{ color: rgb(170, 14, 48);\nfont: 75 25pt;font-weight:bold;}");
        ui->answer_label->setText("Enter a Value");
    }
    else{
        ui->answer_label->setStyleSheet("QLabel{ color: rgb(170, 14, 48);\nfont: 75 25pt;font-weight:bold;}");
        ui->answer_label->setText("Invalid Input");
    }
}

