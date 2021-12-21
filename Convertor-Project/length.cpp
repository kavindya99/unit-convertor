#include "length.h"
#include "ui_length.h"
#include "mainwindow.h"

MainWindow *mainWindow2;

length::length(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::length)

{
    ui->setupUi(this);

    ui->convert_button->setStyleSheet("QPushButton{ background: rgba(29, 49, 72, 1);\n"
                                      "color: rgb(255, 255, 255);\nfont: 75 15pt;\n"
                                      "border:none;\nborder-radius:10px;\nfont-weight:bold;} \n "
                                      "QPushButton:hover{background-color: rgb(51, 101, 138);}");

    ui->from_combobox->addItem("Meter");
    ui->from_combobox->addItem("Kilometer");
    ui->from_combobox->addItem("Centimeter");
    ui->from_combobox->addItem("Milimeter");
    ui->from_combobox->addItem("Micrometer");
    ui->from_combobox->addItem("Nanometer");
    ui->from_combobox->addItem("Mile");
    ui->from_combobox->addItem("Yard");
    ui->from_combobox->addItem("Foot");
    ui->from_combobox->addItem("Inch");

    ui->to_combobox->addItem("Meter");
    ui->to_combobox->addItem("Kilometer");
    ui->to_combobox->addItem("Centimeter");
    ui->to_combobox->addItem("Milimeter");
    ui->to_combobox->addItem("Micrometer");
    ui->to_combobox->addItem("Nanometer");
    ui->to_combobox->addItem("Mile");
    ui->to_combobox->addItem("Yard");
    ui->to_combobox->addItem("Foot");
    ui->to_combobox->addItem("Inch");
}

length::~length()
{
    delete ui;
}


void length::on_mainwindow_button_clicked()
{
    hide();
    mainWindow2 = new MainWindow();
    mainWindow2->show();
}


void length::on_convert_button_clicked()
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

        //meter
        if(from=="Meter"){
            if(to=="Kilometer"){
                answer=get_value/1000.00;
            }
            else if (to=="Centimeter") {
                answer=get_value*100.00;
            }
            else if (to=="Micrometer") {
                answer=get_value*1000000.00;
            }
            else if (to=="Nanometer") {
                answer=get_value/1000000000.00;
            }
            else if (to=="Mile") {
                answer=get_value/1609.00;
            }
            else if (to=="Yard") {
                answer=get_value*1.094;
            }
            else if (to=="Foot") {
                answer=get_value*3.281;
            }
            else if (to=="Inch") {
                answer=get_value*39.37;
            }
            else if (to=="Milimeter") {
                answer=get_value*1000.00;
            }
        }

        //kilometer
        if(from=="Kilometer"){
            if(to=="Meter"){
                answer=get_value*1000.00;
            }
            else if (to=="Centimeter") {
                answer=get_value*100000.00;
            }
            else if (to=="Micrometer") {
                answer=get_value*1000000000.00;
            }
            else if (to=="Nanometer") {
                answer=get_value/1000000000000.00;
            }
            else if (to=="Mile") {
                answer=get_value/1.609;
            }
            else if (to=="Yard") {
                answer=get_value*1094.00;
            }
            else if (to=="Foot") {
                answer=get_value*3281.00;
            }
            else if (to=="Inch") {
                answer=get_value*39370.10;
            }
            else if (to=="Milimeter") {
                answer=get_value*1000000.00;
            }
        }

        //centimeter
        if(from=="Centimeter"){
            if(to=="Meter"){
                answer=get_value/100.00;
            }
            else if (to=="Kilometer") {
                answer=get_value/100000.00;
            }
            else if (to=="Micrometer") {
                answer=get_value*10000.00;
            }
            else if (to=="Milimeter") {
                answer=get_value*10.00;
            }
            else if (to=="Nanometer") {
                answer=get_value*10000000.00;
            }
            else if (to=="Mile") {
                answer=get_value/160934;
            }
            else if (to=="Yard") {
                answer=get_value/91.44;
            }
            else if (to=="Foot") {
                answer=get_value/30.48;
            }
            else if (to=="Inch") {
                answer=get_value/2.54;
            }
        }

        //milimeter
        if(from=="Milimeter"){
            if(to=="Meter"){
                answer=get_value/1000.00;
            }
            else if (to=="Kilometer") {
                answer=get_value/1000000.00;
            }
            else if (to=="Centimeter") {
                answer=get_value/10.00;
            }
            else if (to=="Micrometer") {
                answer=get_value*1000.00;
            }
            else if (to=="Nanometer") {
                answer=get_value*1000000.00;
            }
            else if (to=="Mile") {
                answer=get_value/1.60934;
            }
            else if (to=="Yard") {
                answer=get_value/914;
            }
            else if (to=="Foot") {
                answer=get_value/305;
            }
            else if (to=="Inch") {
                answer=get_value/25.4;
            }
        }

        //micrometer
        if(from=="Micrometer"){
            if(to=="Meter"){
                answer=get_value/1000000.00;
            }
            else if (to=="Kilometer") {
                answer=get_value/1000000000.00;
            }
            else if (to=="Centimeter") {
                answer=get_value/1000.00;
            }
            else if (to=="Milimeter") {
                answer=get_value*1000.00;
            }
            else if (to=="Nanometer") {
                answer=get_value*1000.00;
            }
            else if (to=="Mile") {
                answer=get_value/1.60934;
            }
            else if (to=="Yard") {
                answer=get_value/914400.00;
            }
            else if (to=="Foot") {
                answer=get_value/304800.00;
            }
            else if (to=="Inch") {
                answer=get_value/25400.00;
            }
        }

        //nanometer
        if(from=="Nanometer"){
            if(to=="Meter"){
                answer=get_value/1000000000.00;
            }
            else if (to=="Kilometer") {
                answer=get_value/1000000000000.00;
            }
            else if (to=="Centmeter") {
                answer=get_value/10000000.00;
            }
            else if (to=="Milimeter") {
                answer=get_value/1000000.00;
            }
            else if (to=="Micrometer") {
                answer=get_value/1000.00;
            }
            else if (to=="Mile") {
                answer=get_value/1.60934;
            }
            else if (to=="Yard") {
                answer=get_value/9.144;
            }
            else if (to=="Foot") {
                answer=get_value/304800.00;
            }
            else if (to=="Inch") {
                answer=get_value/3.048;
            }
        }

        //mile
        if(from=="Mile"){
            if(to=="Meter"){
                answer=get_value*1609.00;
            }
            else if (to=="Kilometer") {
                answer=get_value*1.609;
            }
            else if (to=="Centimeter") {
                answer=get_value*160934.00;
            }
            else if (to=="Milimeter") {
                answer=get_value*1.609;
            }
            else if (to=="Nanometer") {
                answer=get_value*1.609;
            }
            else if (to=="Micrometer") {
                answer=get_value*1.609;
            }
            else if (to=="Yard") {
                answer=get_value*1760.00;
            }
            else if (to=="Foot") {
                answer=get_value*5280.00;
            }
            else if (to=="Inch") {
                answer=get_value*63360.00;
            }
        }

        //yard
        if(from=="Yard"){
            if(to=="Meter"){
                answer=get_value/1.094;
            }
            else if (to=="Kilometer") {
                answer=get_value/1094.00;
            }
            else if (to=="Centimeter") {
                answer=get_value*91.44;
            }
            else if (to=="Milimeter") {
                answer=get_value*914.00;
            }
            else if (to=="Nanometer") {
                answer=get_value*9.144;
            }
            else if (to=="Mile") {
                answer=get_value/1760.00;
            }
            else if (to=="Micrometer") {
                answer=get_value/914400.00;
            }
            else if (to=="Foot") {
                answer=get_value*3.00;
            }
            //meter to inch
            else if (to=="Inch") {
                answer=get_value*36.00;
            }
        }

        //foot
        if(from=="Foot"){
            if(to=="Meter"){
                answer=get_value/3.281;
            }
            else if (to=="Kilometer") {
                answer=get_value/3281.00;
            }
            else if (to=="Centimeter") {
                answer=get_value*30.48;
            }
            else if (to=="Milimeter") {
                answer=get_value*304.80;
            }
            else if (to=="Nanometer") {
                answer=get_value*3.048;
            }
            else if (to=="Mile") {
                answer=get_value/5280.00;
            }
            else if (to=="Yard") {
                answer=get_value/3.00;
            }
            else if (to=="Micrometer") {
                answer=get_value*304800.00;
            }
            else if (to=="Inch") {
                answer=get_value*12.00;
            }
        }

        //inch
        if(from=="Inch"){
            if(to=="Meter"){
                answer=get_value/39.37;
            }
            else if (to=="Kilometer") {
                answer=get_value/39370.00;
            }
            else if (to=="Centimeter") {
                answer=get_value*2.54;
            }
            else if (to=="Milimeter") {
                answer=get_value*25.40;
            }
            else if (to=="Nanometer") {
                answer=get_value*2.54;
            }
            else if (to=="Mile") {
                answer=get_value/633360.00;
            }
            else if (to=="Yard") {
                answer=get_value/36.00;
            }
            else if (to=="Foot") {
                answer=get_value/12.00;
            }
            else if (to=="Micrometer") {
                answer=get_value*25400.00;
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

void length::on_clear_button_clicked()
{
    ui->from_value->setText("");
    ui->answer_label->setText("");
}


