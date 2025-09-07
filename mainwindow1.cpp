#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include <string>

MainWindow1::MainWindow1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow1)
{
    ui->setupUi(this);

    // 初始化信号槽
    connect(ui->PushButton_1,SIGNAL(clicked()),this,SLOT(Add()));            // 将用于计算加法运算的按钮的点击信号与自己的计算加法的函数绑定到一起
    connect(ui->PushButton_2,SIGNAL(clicked()),this,SLOT(Minus()));          // 将用于计算减法运算的按钮的点击信号与自己的计算减法的函数绑定到一起
    connect(ui->PushButton_3,SIGNAL(clicked()),this,SLOT(Multiply()));       // 将用于计算乘法运算的按钮的点击信号与自己的计算乘法的函数绑定到一起
    connect(ui->PushButton_4,SIGNAL(clicked()),this,SLOT(Divide()));         // 将用于计算除法运算的按钮的点击信号与自己的计算除法的函数绑定到一起
    connect(ui->PushButton_5,&ui->PushButton_5->clicked,ui->lineEdit_1,&ui->lineEdit_1->clear); // 将清空按钮的点击信号与第一个行编辑框的清空文本的槽函数绑定到一起为什么会报错
    connect(ui->PushButton_5,&ui->PushButton_5->clicked,ui->lineEdit_2,&ui->lineEdit_2->clear); // 将清空按钮的点击信号与第二个行编辑框的清空文本的槽函数绑定到一起为什么会报错
    connect(ui->PushButton_5,&ui->PushButton_5->clicked,ui->lineEdit_3,&ui->lineEdit_3->clear); // 将清空按钮的点击信号与第三个行编辑框的清空文本的槽函数绑定到一起为什么会报错
}

MainWindow1::~MainWindow1()
{
    delete ui;
}

void MainWindow1::Add()
{
    int a = (ui->lineEdit_1->text()).toInt();
    int b = (ui->lineEdit_2->text()).toInt();
    int num = a + b;
    ui->lineEdit_3->setText(QString::fromStdString(std::to_string(num)));
}

void MainWindow1::Minus()
{
    int a = (ui->lineEdit_1->text()).toInt();
    int b = (ui->lineEdit_2->text()).toInt();
    int num = a - b;
    ui->lineEdit_3->setText(QString::fromStdString(std::to_string(num)));
}

void MainWindow1::Multiply()
{
    int a = (ui->lineEdit_1->text()).toInt();
    int b = (ui->lineEdit_2->text()).toInt();
    int num = a * b;
    ui->lineEdit_3->setText(QString::fromStdString(std::to_string(num)));
}

void MainWindow1::Divide()
{
    int a = (ui->lineEdit_1->text()).toInt();
    int b = (ui->lineEdit_2->text()).toInt();
    int num = a / b;
    ui->lineEdit_3->setText(QString::fromStdString(std::to_string(num)));
}

