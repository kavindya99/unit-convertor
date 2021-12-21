#include "volume.h"
#include "ui_volume.h"
#include "mainwindow.h"

MainWindow *mainWindow5;

volume::volume(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::volume)
{
    ui->setupUi(this);

    ui->convert_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\ncolor: rgb(255, 255, 255);\n"
                                      "font: 75 15pt;\nborder:none;\nborder-radius:10px;\nfont-weight:bold;} \n "
                                      "QPushButton:hover{background-color: rgb(51, 101, 138);}");

    ui->from_combobox->addItem("Cubic Meter");
    ui->from_combobox->addItem("Cubic Kilometer");
    ui->from_combobox->addItem("Cubic Centimeter");
    ui->from_combobox->addItem("Cubic Milimeter");
    ui->from_combobox->addItem("Milliliter");
    ui->from_combobox->addItem("Liter");
    ui->from_combobox->addItem("US Gallon");
    ui->from_combobox->addItem("US Quart");
    ui->from_combobox->addItem("US Pint");
    ui->from_combobox->addItem("US Cup");
    ui->from_combobox->addItem("US Fluid Ounce");
    ui->from_combobox->addItem("US Table Spoon");
    ui->from_combobox->addItem("US Tea Spoon");
    ui->from_combobox->addItem("Imperial Gallon");
    ui->from_combobox->addItem("Imperial Quart");
    ui->from_combobox->addItem("Imperial Pint");
    ui->from_combobox->addItem("Imperial Fluid Ounce");
    ui->from_combobox->addItem("Imperial Tabel Spoon");
    ui->from_combobox->addItem("Imperial Tea Spoon");
    ui->from_combobox->addItem("Cubic Mile");
    ui->from_combobox->addItem("Cubic Yard");
    ui->from_combobox->addItem("Cubic Foot");
    ui->from_combobox->addItem("Cubic Inch");

    ui->to_combobox->addItem("Cubic Meter");
    ui->to_combobox->addItem("Cubic Kilometer");
    ui->to_combobox->addItem("Cubic Centimeter");
    ui->to_combobox->addItem("Cubic Milimeter");
    ui->to_combobox->addItem("Milliliter");
    ui->to_combobox->addItem("Liter");
    ui->to_combobox->addItem("US Gallon");
    ui->to_combobox->addItem("US Quart");
    ui->to_combobox->addItem("US Pint");
    ui->to_combobox->addItem("US Cup");
    ui->to_combobox->addItem("US Fluid Ounce");
    ui->to_combobox->addItem("US Table Spoon");
    ui->to_combobox->addItem("US Tea Spoon");
    ui->to_combobox->addItem("Imperial Gallon");
    ui->to_combobox->addItem("Imperial Quart");
    ui->to_combobox->addItem("Imperial Pint");
    ui->to_combobox->addItem("Imperial Fluid Ounce");
    ui->to_combobox->addItem("Imperial Tabel Spoon");
    ui->to_combobox->addItem("Imperial Tea Spoon");
    ui->to_combobox->addItem("Cubic Mile");
    ui->to_combobox->addItem("Cubic Yard");
    ui->to_combobox->addItem("Cubic Foot");
    ui->to_combobox->addItem("Cubic Inch");
}

volume::~volume()
{
    delete ui;
}

void volume::on_mainwindow_button_clicked()
{
    hide();
    mainWindow5 = new MainWindow();
    mainWindow5->show();
}

void volume::on_clear_button_clicked()
{
    ui->from_value->setText("");
}


void volume::on_convert_button_clicked()
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

        //cubic meter
        if(from=="Cubic Meter"){
            if(to=="Cubic Kilometer"){
                answer=get_value/1000000000.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*1000000000.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*1000000.00;
            }
            else if (to=="Liter") {
                answer=get_value*1000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*1000000.00;
            }
            else if (to=="US Gallon") {
                answer=get_value*264.00;
            }
            else if (to=="US Quart") {
                answer=get_value*1057.00;
            }
            else if (to=="US Pint") {
                answer=get_value*2113.00;
            }
            else if (to=="US Cup") {
                answer=get_value*4227.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*33814.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*67628.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*202884.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value*220.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value*880.00;
            }
            else if (to=="Imperial Pin") {
                answer=get_value*1760.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*35195.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*56312.00;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*168936.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/4168000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value*1.308;
            }
            else if (to=="Cubic Foot") {
                answer=get_value*35.315;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*61024.00;
            }
        }

        //cubic kilometer
        if(from=="Cubic Kilometer"){
            if(to=="Cubic Meter"){
                answer=get_value*1000000000.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*1000000000000000000.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*1000000000000000.00;
            }
            else if (to=="Liter") {
                answer=get_value*1000000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*1000000000000000.00;
            }
            else if (to=="US Gallon") {
                answer=get_value*264200000000.00;
            }
            else if (to=="US Quart") {
                answer=get_value*1057000000000.00;
            }
            else if (to=="US Pint") {
                answer=get_value*2113000000000.00;
            }
            else if (to=="US Cup") {
                answer=get_value*4167000000000.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*33814000000000.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*67628000000000.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*202884000000000.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value*220.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value*220000000000.00;
            }
            else if (to=="Imperial Pin") {
                answer=get_value*1760000000000.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*35195000000000.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*56312000000000.00;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*168936000000000.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/4168000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value*1308000000.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value*35315000000.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*61024000000000.00;
            }
        }

        //cubic centimeter
        if(from=="Cubic Centimeter"){
            if(to=="Cubic Meter"){
                answer=get_value/1000000.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*1000.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value*1000000000000000.00;
            }
            else if (to=="Liter") {
                answer=get_value/1000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*1.00;
            }
            else if (to=="US Gallon") {
                answer=get_value/3785.00;
            }
            else if (to=="US Quart") {
                answer=get_value/946.00;
            }
            else if (to=="US Pint") {
                answer=get_value/473.00;
            }
            else if (to=="US Cup") {
                answer=get_value/240.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value/29.547;
            }
            else if (to=="US Table Spoon") {
                answer=get_value/14.787;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value/4.929;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/4546.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/1137.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/568.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value/28.413;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value/17.758;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value/5.919;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/4168000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/764555.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/28317.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value/16.387;
            }
        }

        //cubic milimeter
        if(from=="Cubic Milimeter"){
            if(to=="Cubic Meter"){
                answer=get_value/1000000000.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value/1000.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/1000000000000000000.00;
            }
            else if (to=="Liter") {
                answer=get_value/1000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value/1000.00;
            }
            else if (to=="US Gallon") {
                answer=get_value/3785000.00;
            }
            else if (to=="US Quart") {
                answer=get_value/946353.00;
            }
            else if (to=="US Pint") {
                answer=get_value/473176.00;
            }
            else if (to=="US Cup") {
                answer=get_value/240000.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value/29547.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value/14787.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value/4929.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/4546000.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/1137000.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/568261.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value/28413.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value/17758.00;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value/5919.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/4168000000000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/764555000.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/28320000.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value/16387.00;
            }
        }

        //millileter
        if(from=="Milliliter"){
            if(to=="Cubic Meter"){
                answer=get_value/1000000.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*1.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/1000000000000000.00;
            }
            else if (to=="Liter") {
                answer=get_value/1000.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*1000.00;
            }
            else if (to=="US Gallon") {
                answer=get_value/3785.00;
            }
            else if (to=="US Quart") {
                answer=get_value/946.00;
            }
            else if (to=="US Pint") {
                answer=get_value/473.00;
            }
            else if (to=="US Cup") {
                answer=get_value/240.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value/29.547;
            }
            else if (to=="US Table Spoon") {
                answer=get_value/14.787;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value/4.929;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/4546.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/1137.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/568.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value/28.413;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value/17.758;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value/5.919;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/4.168;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/764555.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/28317.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value/16.387;
            }
        }

        //liter
        if(from=="Liter"){
            if(to=="Cubic Meter"){
                answer=get_value/1000.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*1000.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/1000000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*1000.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*1000000.00;
            }
            else if (to=="US Gallon") {
                answer=get_value/3.785;
            }
            else if (to=="US Quart") {
                answer=get_value*1.057;
            }
            else if (to=="US Pint") {
                answer=get_value*2.113;
            }
            else if (to=="US Cup") {
                answer=get_value*4.167;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*33.814;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*67.628;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*203.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/4.546;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/1.137;
            }
            else if (to=="Imperial Pint") {
                answer=get_value*1.76;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*35.195;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*56.312;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value/169.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/4168000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/765.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/28.317;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*61.024;
            }
        }

        //us gallon
        if(from=="US Gallon"){
            if(to=="Cubic Meter"){
                answer=get_value/264.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*3785.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/264200000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*3785.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*3785000.00;
            }
            else if (to=="Liter") {
                answer=get_value/3.785;
            }
            else if (to=="US Quart") {
                answer=get_value*4.00;
            }
            else if (to=="US Pint") {
                answer=get_value*8.00;
            }
            else if (to=="US Cup") {
                answer=get_value*15.773;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*128.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*256.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*768.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/1.201;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/3.331;
            }
            else if (to=="Imperial Pint") {
                answer=get_value*6.661;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*133.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*56.312;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*213.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/1101000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/202.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/7.481;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*231.00;
            }
        }

        //us quart
        if(from=="US Quart"){
            if(to=="Cubic Meter"){
                answer=get_value/1057.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*946.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/1057000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*3785.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*946.00;
            }
            else if (to=="Liter") {
                answer=get_value/1.057;
            }
            else if (to=="US Gallon") {
                answer=get_value/4.00;
            }
            else if (to=="US Pint") {
                answer=get_value*2.00;
            }
            else if (to=="US Cup") {
                answer=get_value*3.943;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*32.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*64.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*192.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/4.804;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/1.201;
            }
            else if (to=="Imperial Pint") {
                answer=get_value*1.665;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*33.307;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*53.291;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*160.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/4404000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/808.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/29.922;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*57.75;
            }
        }

        //us pint
        if(from=="US Pint"){
            if(to=="Cubic Meter"){
                answer=get_value/2113.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*473.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/2113000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*473.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*473176.00;
            }
            else if (to=="Liter") {
                answer=get_value/2.113;
            }
            else if (to=="US Gallon") {
                answer=get_value/8.00;
            }
            else if (to=="US Quart") {
                answer=get_value/2.00;
            }
            else if (to=="US Cup") {
                answer=get_value*1.972;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*16.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*32.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*96.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/9.608;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/2.402;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/1.201;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*16.653;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*26.646;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*79.937;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/8808000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/1616.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/59.844;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*28.875;
            }
        }

        //us cup
        if(from=="US Cup"){
            if(to=="Cubic Meter"){
                answer=get_value/4227.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*237.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/4227000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*237.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*236588.00;
            }
            else if (to=="Liter") {
                answer=get_value/4.227;
            }
            else if (to=="US Gallon") {
                answer=get_value/16.00;
            }
            else if (to=="US Quart") {
                answer=get_value/4.00;
            }
            else if (to=="US Pint") {
                answer=get_value*2.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*8.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*16.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*48.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/19.215;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/4.804;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/2.402;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*8.327;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*13.323;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*39.968;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/17620000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/3232.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/120.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*14.438;
            }
        }

        //us fluid ounce
        if(from=="US Fluid Ounce"){
            if(to=="Cubic Meter"){
                answer=get_value/33814.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*29.574;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/33810000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*29.574;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*29574.00;
            }
            else if (to=="Liter") {
                answer=get_value/33.814;
            }
            else if (to=="US Gallon") {
                answer=get_value/128.00;
            }
            else if (to=="US Quart") {
                answer=get_value/32.00;
            }
            else if (to=="US Pint") {
                answer=get_value*16.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*32.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*96.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/9.608;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/2.402;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/1.201;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*16.653;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*26.646;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*79.937;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/140900000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/25853.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/958.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*1.805;
            }
        }

        //us table spoon
        if(from=="US Table Spoon"){
            if(to=="Cubic Meter"){
                answer=get_value/67628.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*14.787;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/67630000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*14.787;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*14787.00;
            }
            else if (to=="Liter") {
                answer=get_value/67.628;
            }
            else if (to=="US Gallon") {
                answer=get_value/256.00;
            }
            else if (to=="US Quart") {
                answer=get_value/64.00;
            }
            else if (to=="US Pint") {
                answer=get_value*32.00;
            }
            else if (to=="US Cup") {
                answer=get_value/16.231;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value/2.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*3.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/307.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/76.861;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/38.43;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value/1.922;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value/1.201;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*2.498;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/281900000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/51705.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/1915.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value/1.108;
            }
        }

        //us tea spoon
        if(from=="US Tea Spoon"){
            if(to=="Cubic Meter"){
                answer=get_value/202884.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*4.929;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/202900000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*4.929;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*4929.00;
            }
            else if (to=="Liter") {
                answer=get_value/203.00;
            }
            else if (to=="US Gallon") {
                answer=get_value/768.00;
            }
            else if (to=="US Quart") {
                answer=get_value/192.00;
            }
            else if (to=="US Pint") {
                answer=get_value/96.00;
            }
            else if (to=="US Cup") {
                answer=get_value/48.692;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value/6.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value/3.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/922.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/231.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/115.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value/5.765;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value/3.603;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value/1.201;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/845700000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/155116.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/5745.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value/3.325;
            }
        }

        //imperial gallon
        if(from=="Imperial Gallon"){
            if(to=="Cubic Meter"){
                answer=get_value/220.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*4546.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/220000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*4546.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*4546000.00;
            }
            else if (to=="Liter") {
                answer=get_value*4.546;
            }
            else if (to=="US Gallon") {
                answer=get_value*1.201;
            }
            else if (to=="US Quart") {
                answer=get_value*4.804;
            }
            else if (to=="US Pint") {
                answer=get_value*9.608;
            }
            else if (to=="US Cup") {
                answer=get_value*18.942;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*154.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*307.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*922.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value*4.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value*8.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*160.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*256;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*768;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/916900000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/168.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/6.229;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*277.00;
            }
        }

        //imperial quart
        if(from=="Imperial Quart"){
            if(to=="Cubic Meter"){
                answer=get_value/880.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*1137.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/879900000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*1137.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*1137000.00;
            }
            else if (to=="Liter") {
                answer=get_value*1.137;
            }
            else if (to=="US Gallon") {
                answer=get_value*3.331;
            }
            else if (to=="US Quart") {
                answer=get_value*1.201;
            }
            else if (to=="US Pint") {
                answer=get_value*2.402;
            }
            else if (to=="US Cup") {
                answer=get_value*4.736;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*38.43;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*76.861;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*231.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/4.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value*2.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*40.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*64.00;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*192.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/3667000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/673.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/24.915;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*69.355;
            }
        }

        //imperial pint
        if(from=="Imperial Pint"){
            if(to=="Cubic Meter"){
                answer=get_value/1760.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*568.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/1760000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*568.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*568261.00;
            }
            else if (to=="Liter") {
                answer=get_value*1.76;
            }
            else if (to=="US Gallon") {
                answer=get_value*6.661;
            }
            else if (to=="US Quart") {
                answer=get_value/1.665;
            }
            else if (to=="US Pint") {
                answer=get_value*1.201;
            }
            else if (to=="US Cup") {
                answer=get_value*2.368;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*19.215;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*38.43;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*115.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/8.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/2.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*20.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*32.00;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*96.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/73350000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/1345.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/49.831;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*34.677;
            }
        }

        //imperial table spoon
        if(from=="Imperial Table Spoon"){
            if(to=="Cubic Meter"){
                answer=get_value/56312.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*17.758;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/56310000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*17.758;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*17758.00;
            }
            else if (to=="Liter") {
                answer=get_value/56.312;
            }
            else if (to=="US Gallon") {
                answer=get_value/213.00;
            }
            else if (to=="US Quart") {
                answer=get_value/53.291;
            }
            else if (to=="US Pint") {
                answer=get_value/26.646;
            }
            else if (to=="US Cup") {
                answer=get_value/13.515;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*1.665;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*1.201;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*3.603;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/256.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/64.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/32.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value/1.6;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*1.6;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/234700000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/43054.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/1595.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*1.084;
            }
        }

        //imperial fluid ounce
        if(from=="Imperial Fluid Ounce"){
            if(to=="Cubic Meter"){
                answer=get_value/35195.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*28.413;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/35200000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*28.413;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*38413.10;
            }
            else if (to=="Liter") {
                answer=get_value/35.195;
            }
            else if (to=="US Gallon") {
                answer=get_value/133.00;
            }
            else if (to=="US Quart") {
                answer=get_value/33.307;
            }
            else if (to=="US Pint") {
                answer=get_value/16.653;
            }
            else if (to=="US Cup") {
                answer=get_value/8.327;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*1;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*1.922;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*5.765;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/160.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/40.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/20.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*1.6;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*4.8;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/146700000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/26909.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/997.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*1.734;
            }
        }

        //imperial tea spoon
        if(from=="Imperial Tea Spoon"){
            if(to=="Cubic Meter"){
                answer=get_value/168936.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*5.919;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/168900000000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*5.919;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*5919.00;
            }
            else if (to=="Liter") {
                answer=get_value/169.00;
            }
            else if (to=="US Gallon") {
                answer=get_value/639.00;
            }
            else if (to=="US Quart") {
                answer=get_value/160.00;
            }
            else if (to=="US Pint") {
                answer=get_value/79.937;
            }
            else if (to=="US Cup") {
                answer=get_value/40.545;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*4.996;
            }
            else if (to=="US Table Spoon") {
                answer=get_value/2.498;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*1.201;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value/768.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value/192.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value/96.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value/3;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value/4.8;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/704200000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/129161.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value/4784.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value/2.768;
            }
        }

        //cubic mile
        if(from=="Cubic Mile"){
            if(to=="Cubic Meter"){
                answer=get_value*4168000000.00;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*4168000000000000.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value*4.168;
            }
            else if (to=="Milliliter") {
                answer=get_value*4168000000000000.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*4168000000000000000.00;
            }
            else if (to=="Liter") {
                answer=get_value*4168000000000.00;
            }
            else if (to=="US Gallon") {
                answer=get_value*1101000000000.00;
            }
            else if (to=="US Quart") {
                answer=get_value*4404000000000.00;
            }
            else if (to=="US Pint") {
                answer=get_value*8809000000000.00;
            }
            else if (to=="US Cup") {
                answer=get_value*17370000000000.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*140900000000000.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*281900000000000.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*845700000000000.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value*916900000000.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value*3667000000000.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value*7335000000000.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*234700000000000.00;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*704200000000000.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*146700000000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value*5452000000.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value*147200000000.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*254400000000000.00;
            }
        }

        //cubic yard
        if(from=="Cubic Yard"){
            if(to=="Cubic Meter"){
                answer=get_value/1.308;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*764555.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/1308000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*764555.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*764600000.00;
            }
            else if (to=="Liter") {
                answer=get_value*765.00;
            }
            else if (to=="US Gallon") {
                answer=get_value*202.00;
            }
            else if (to=="US Quart") {
                answer=get_value*808.00;
            }
            else if (to=="US Pint") {
                answer=get_value*1616.00;
            }
            else if (to=="US Cup") {
                answer=get_value*3186.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*25853.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*51705.40;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*155116.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value*168.00;
            }
            else if (to=="Imperial Quart") {
                answer=get_value*673.00;
            }
            else if (to=="Imperial Pint") {
                answer=get_value*1345.00;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*43054.00;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*129161.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*26909.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/5452000000.00;
            }
            else if (to=="Cubic Foot") {
                answer=get_value*27.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*46656.00;
            }
        }

        //cubic foot
        if(from=="Cubic Foot"){
            if(to=="Cubic Meter"){
                answer=get_value/35.315;
            }
            else if (to=="Cubic Centimeter") {
                answer=get_value*28317.00;
            }
            else if (to=="Cubic Kilometer") {
                answer=get_value/35310000000.00;
            }
            else if (to=="Milliliter") {
                answer=get_value*28317.00;
            }
            else if (to=="Cubic Milimeter") {
                answer=get_value*28320000.00;
            }
            else if (to=="Liter") {
                answer=get_value*28.317;
            }
            else if (to=="US Gallon") {
                answer=get_value*7.481;
            }
            else if (to=="US Quart") {
                answer=get_value*29.922;
            }
            else if (to=="US Pint") {
                answer=get_value*59.844;
            }
            else if (to=="US Cup") {
                answer=get_value*118.00;
            }
            else if (to=="US Fluid Ounce") {
                answer=get_value*958.00;
            }
            else if (to=="US Table Spoon") {
                answer=get_value*1915.00;
            }
            else if (to=="US Tea Spoon") {
                answer=get_value*5745.00;
            }
            else if (to=="Imperial Gallon") {
                answer=get_value*6.229;
            }
            else if (to=="Imperial Quart") {
                answer=get_value*24.915;
            }
            else if (to=="Imperial Pint") {
                answer=get_value*49.831;
            }
            else if (to=="Imperial Table Spoon") {
                answer=get_value*1595.00;
            }
            else if (to=="Imperial Tea Spoon") {
                answer=get_value*4784.00;
            }
            else if (to=="Imperial Fluid Ounce") {
                answer=get_value*997.00;
            }
            else if (to=="Cubic Mile") {
                answer=get_value/147200000000.00;
            }
            else if (to=="Cubic Yard") {
                answer=get_value/27.00;
            }
            else if (to=="Cubic Inch") {
                answer=get_value*1728.00;
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


