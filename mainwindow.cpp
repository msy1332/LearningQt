#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) // 有参构造函数
    : QMainWindow(parent) // 初始化基类，建立父子关系等
    , ui(new Ui::MainWindow) // 初始化ui指针对象
{
    ui->setupUi(this); // 调用这个setupUi函数来将在设计里面放至的控件给显示到主窗口里面

    // 初始化信号槽
    connect(ui->Login_PushButton,SIGNAL(clicked()),this,SLOT(Processing_Users_Login())); // 将登录按钮的点击信号与自己的处理用户登录的槽函数绑定到一起
    connect(ui->Cancel_PushButton,SIGNAL(clicked()),this,SLOT(close())); // 将取消按钮的点击信号与自己的退出程序的槽函数绑定到一起
}

MainWindow::~MainWindow()
{
    delete ui;  // 因为我们在堆上new了一个指针对象所以一定要在析构函数中释放这个指针所占的内存，如果不释放的话，就是导致内存泄漏
}

void MainWindow::Processing_Users_Login()
{
    if(ui->User_lineEdit->text() == "mski" && ui->Password_lineEdit->text() == "mski") // 判断用户名和密码是否正确
    {
        std::cout << "Login successful" << std::endl;
    }
    else
    {
        std::cout << "Login failed" << std::endl;
    }
}
