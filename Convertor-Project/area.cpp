#include "area.h"
#include "ui_area.h"
#include "mainwindow.h"

MainWindow *mainWindow1;

area::area(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::area)
{
    ui->setupUi(this);

    ui->convert_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\nfont: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n QPushButton:hover{background-color: rgb(51, 101, 138);}");

    ui->from_combobox->addItem("Square Meter");
    ui->from_combobox->addItem("Square Kilometer");
    ui->from_combobox->addItem("Square Centimeter");
    ui->from_combobox->addItem("Square Milimeter");
    ui->from_combobox->addItem("Square Micrometer");
    ui->from_combobox->addItem("Hectare");
    ui->from_combobox->addItem("Square Mile");
    ui->from_combobox->addItem("Square Yard");
    ui->from_combobox->addItem("Square Foot");
    ui->from_combobox->addItem("Square Inch");
    ui->from_combobox->addItem("Acre");

    ui->to_combobox->addItem("Square Meter");
    ui->to_combobox->addItem("Square Kilometer");
    ui->to_combobox->addItem("Square Centimeter");
    ui->to_combobox->addItem("Square Milimeter");
    ui->to_combobox->addItem("Square Micrometer");
    ui->to_combobox->addItem("Hectare");
    ui->to_combobox->addItem("Square Mile");
    ui->to_combobox->addItem("Square Yard");
    ui->to_combobox->addItem("Square Foot");
    ui->to_combobox->addItem("Square Inch");
    ui->to_combobox->addItem("Acre");
}

area::~area()
{
    delete ui;
}

void area::on_mainwindow_button_clicked()
{
    hide();
    mainWindow1 = new MainWindow();
    mainWindow1->show();
}


void area::on_clear_button_clicked()
{
    ui->from_value->setText("");
    ui->answer_label->setText("");
}


void area::on_convert_button_clicked()
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

        //square meter
        if(from=="Square Meter"){
            if(to=="Square Kilometer"){
                answer=get_value/1000000.00;
            }
            else if (to=="Square Centimeter") {
                answer=get_value*10000.00;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*1000000000000.00;
            }
            else if (to=="Square Milimeter") {
                answer=get_value/1000000.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/2.59;
            }
            else if (to=="Square Yard") {
                answer=get_value*1.196;
            }
            else if (to=="Square Foot") {
                answer=get_value*10.764;
            }
            else if (to=="Square Inch") {
                answer=get_value*1550.00;
            }
            else if (to=="Hectare") {
                answer=get_value/10000.00;
            }
            else if(to=="Acre"){
                answer=get_value/4047;
            }
        }

        //square kilometer
        if(from=="Square Kilometer"){
            if(to=="Square Meter"){
                answer=get_value*1000000.00;
            }
            else if (to=="Square Centimeter") {
                answer=get_value*10000000000.00;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*1000000000000000000.00;
            }
            else if (to=="Square Milimeter") {
                answer=get_value/1000000000000.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/2.59;
            }
            else if (to=="Square Yard") {
                answer=get_value*1.196;
            }
            else if (to=="Square Foot") {
                answer=get_value*1.0764;
            }
            else if (to=="Square Inch") {
                answer=get_value*1.550;
            }
            else if (to=="Hectare") {
                answer=get_value*100.00;
            }
            else if(to=="Acre"){
                answer=get_value*247.00;
            }
        }

        //square centimeter
        if(from=="Square Centimeter"){
            if(to=="Square Meter"){
                answer=get_value/10000.00;
            }
            else if (to=="Square Kilometer") {
                answer=get_value/10000000000.00;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*100000000.00;
            }
            else if (to=="Square Milimeter") {
                answer=get_value*100.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/2.59;
            }
            else if (to=="Square Yard") {
                answer=get_value/8361;
            }
            else if (to=="Square Foot") {
                answer=get_value/929.00;
            }
            else if (to=="Square Inch") {
                answer=get_value/6.452;
            }
            else if (to=="Hectare") {
                answer=get_value/100000000.00;
            }
            else if(to=="Acre"){
                answer=get_value/4.047;
            }
        }

        //square milimeter
        if(from=="Square Milimeter"){
            if(to=="Square Meter"){
                answer=get_value/1000000.00;
            }
            else if (to=="Square Kilometer") {
                answer=get_value/1000000000000.00;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*1000000.00;
            }
            else if (to=="Square Centimeter") {
                answer=get_value/100.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/2.59;
            }
            else if (to=="Square Yard") {
                answer=get_value/836127.00;
            }
            else if (to=="Square Foot") {
                answer=get_value/92903.00;
            }
            else if (to=="Square Inch") {
                answer=get_value/645.00;
            }
            else if (to=="Hectare") {
                answer=get_value/10000000000.00;
            }
            else if(to=="Acre"){
                answer=get_value/4.047;
            }
        }

        //square micometer
        if(from=="Square Micrometer"){
            if(to=="Square Meter"){
                answer=get_value/1000000000000.00;
            }
            else if (to=="Square Kilometer") {
                answer=get_value/1000000000000000000.00;
            }
            else if (to=="Square Centimeter") {
                answer=get_value/100000000.00;
            }
            else if (to=="Square Milimeter") {
                answer=get_value/1000000.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/2.59;
            }
            else if (to=="Square Yard") {
                answer=get_value/8.361;
            }
            else if (to=="Square Foot") {
                answer=get_value/929.00;
            }
            else if (to=="Square Inch") {
                answer=get_value/6.452;
            }
            else if (to=="Hectare") {
                answer=get_value/1000000000000000.00;
            }
            else if(to=="Acre"){
                answer=get_value/4.047;
            }
        }

        //square hectare
        if(from=="Hectare"){
            if(to=="Square Meter"){
                answer=get_value*10000.00;
            }
            else if (to=="Square Kilometer") {
                answer=get_value/100.00;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*10000000000000000.00;
            }
            else if (to=="Square Milimeter") {
                answer=get_value*10000000000.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/259.00;
            }
            else if (to=="Square Yard") {
                answer=get_value*11960;
            }
            else if (to=="Square Foot") {
                answer=get_value*107639.00;
            }
            else if (to=="Square Inch") {
                answer=get_value*1.55;
            }
            else if (to=="Square Centimeter") {
                answer=get_value*100000000.00;
            }
            else if(to=="Acre"){
                answer=get_value*2.471;
            }
        }

        //square mile
        if(from=="Square Mile"){
            if(to=="Square Meter"){
                answer=get_value*2.59;
            }
            else if (to=="Square Kilometer") {
                answer=get_value*2.59;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*2.59;
            }
            else if (to=="Square Milimeter") {
                answer=get_value*2.59;
            }
            else if (to=="Square Centimeter") {
                answer=get_value*2.59;
            }
            else if (to=="Square Yard") {
                answer=get_value*3.098;
            }
            else if (to=="Square Foot") {
                answer=get_value*2.788;
            }
            else if (to=="Square Inch") {
                answer=get_value*4.014;
            }
            else if (to=="Hectare") {
                answer=get_value*259.00;
            }
            else if(to=="Acre"){
                answer=get_value*640;
            }
        }

        //square yard
        if(from=="Square Yard"){
            if(to=="Square Meter"){
                answer=get_value/1.196;
            }
            else if (to=="Square Kilometer") {
                answer=get_value/1.196;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*8.361;
            }
            else if (to=="Square Milimeter") {
                answer=get_value*836127.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/3.098;
            }
            else if (to=="Square Centimeter") {
                answer=get_value/8361.00;
            }
            else if (to=="Square Foot") {
                answer=get_value/9.00;
            }
            else if (to=="Square Inch") {
                answer=get_value/1269.00;
            }
            else if (to=="Hectare") {
                answer=get_value/11960.00;
            }
            else if(to=="Acre"){
                answer=get_value/4840.00;
            }
        }

        //square foot
        if(from=="Square Foot"){
            if(to=="Square Meter"){
                answer=get_value/10.764;
            }
            else if (to=="Square Kilometer") {
                answer=get_value/1.076;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*9.29;
            }
            else if (to=="Square Milimeter") {
                answer=get_value*92903.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/2.588;
            }
            else if (to=="Square Yard") {
                answer=get_value/9;
            }
            else if (to=="Square Centimeter") {
                answer=get_value/929.00;
            }
            else if (to=="Square Inch") {
                answer=get_value*144.00;
            }
            else if (to=="Hectare") {
                answer=get_value/107639.00;
            }
            else if(to=="Acre"){
                answer=get_value/43560.00;
            }
        }

        //square inchS
        if(from=="Square Inch"){
            if(to=="Square Meter"){
                answer=get_value/1550.00;
            }
            else if (to=="Square Kilometer") {
                answer=get_value/1.55;
            }
            else if (to=="Square Micrometer") {
                answer=get_value*6.452;
            }
            else if (to=="Square Milimeter") {
                answer=get_value*645.00;
            }
            else if (to=="Square Mile") {
                answer=get_value/4.014;
            }
            else if (to=="Square Yard") {
                answer=get_value/1296;
            }
            else if (to=="Square Foot") {
                answer=get_value/144.00;
            }
            else if (to=="Square Centimeter") {
                answer=get_value*6.452;
            }
            else if (to=="Hectare") {
                answer=get_value/1.55;
            }
            else if(to=="Acre"){
                answer=get_value/6.273;
            }
        }

        //acre
        if(from=="Acre"){
            if(to=="Square Meter"){
                answer=get_value*4047.00;
                ui->answer_label->setText(QString::number(answer));
            }
            else if (to=="Square Kilometer") {
                answer=get_value/247.00;
                ui->answer_label->setText(QString::number(answer));
            }
            else if (to=="Square Micrometer") {
                answer=get_value*4.047;
                ui->answer_label->setText(QString::number(answer));
            }
            else if (to=="Square Milimeter") {
                answer=get_value*4.047;
                ui->answer_label->setText(QString::number(answer));
            }
            else if (to=="Square Mile") {
                answer=get_value/640.00;
                ui->answer_label->setText(QString::number(answer));
            }
            else if (to=="Square Yard") {
                answer=get_value/4840.00;
                ui->answer_label->setText(QString::number(answer));
            }
            else if (to=="Square Foot") {
                answer=get_value*43560.00;
                ui->answer_label->setText(QString::number(answer));
            }
            else if (to=="Square Inch") {
                answer=get_value/6.273;
                ui->answer_label->setText(QString::number(answer));
            }
            else if (to=="Hectare") {
                answer=get_value/2.471;
                ui->answer_label->setText(QString::number(answer));
            }
            else if(to=="Square Centimeter"){
                answer=get_value*4.047;
                ui->answer_label->setText(QString::number(answer));
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

