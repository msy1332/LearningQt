#include "studyqpushbutton.h"
#include "ui_studyqpushbutton.h"
#include <iostream>

StudyQPushButton::StudyQPushButton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudyQPushButton)
{
    ui->setupUi(this);
    QString style = "color: red; background-color: green;";
    ui->pushButton_4->setStyleSheet(style);

}

StudyQPushButton::~StudyQPushButton()
{
    delete ui;
}

void StudyQPushButton::on_pushButton_1_clicked()
{
    if(ui->pushButton_1->text() == "停止")
    {
        ui->pushButton_1->setText("启动");
        ui->pushButton_1->setIcon(QIcon(":/res/start.ico"));
    }
    else
    {
        ui->pushButton_1->setText("停止");
        ui->pushButton_1->setIcon(QIcon(":/res/stop.ico"));
    }
}


void StudyQPushButton::on_pushButton_2_clicked()
{
    if(ui->pushButton_2->text() == "连接")
    {
        ui->pushButton_2->setText("断开连接");
        ui->pushButton_3->setEnabled(true);
    }
    else
    {
        ui->pushButton_2->setText("连接");
        ui->pushButton_3->setEnabled(false);
    }
}


void StudyQPushButton::on_pushButton_5_clicked()
{
    std::cout << "button clicked..." << std::endl;
}


void StudyQPushButton::on_pushButton_5_pressed()
{
    std::cout << "button pressed..." << std::endl;
}


void StudyQPushButton::on_pushButton_5_released()
{
    std::cout << "button released..." << std::endl;
}

