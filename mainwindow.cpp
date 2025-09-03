#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) // 有参构造函数
    : QMainWindow(parent) // 还不是很懂
    , ui(new Ui::MainWindow) // 初始化ui指针对象
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;  // 因为我们在堆上new了一个指针对象所以一定要在析构函数中释放这个指针所占的内存，如果不释放的话，就是导致内存泄漏
}
