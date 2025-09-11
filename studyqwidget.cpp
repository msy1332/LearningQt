#include "studyqwidget.h"
#include "ui_studyqwidget.h"
#include <iostream>

StudyQWidget::StudyQWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudyQWidget)
{
    ui->setupUi(this);

    // 初始化信号槽
    connect(ui->pushButton_5,&ui->pushButton_5->clicked,this,&showMaximized);
    connect(ui->pushButton_6,&ui->pushButton_6->clicked,this,&showMinimized);
    connect(ui->pushButton_8,&ui->pushButton_8->clicked,this,&showNormal);
}

StudyQWidget::~StudyQWidget()
{
    delete ui;
}

void StudyQWidget::on_pushButton_clicked()
{
    QRect rect;
    rect = this->geometry();
    QPoint pos = rect.topLeft();
    std::cout << "window left top pos: " << pos.x() << "," << pos.y() << std::endl;
    std::cout << "window width: " << rect.width() << std::endl;
    std::cout << "window height: " << rect.height() << std::endl;
}


void StudyQWidget::on_pushButton_2_clicked()
{
    QRect rect(0,0,500,600);
    this->setGeometry(rect);
}


void StudyQWidget::on_pushButton_3_clicked()
{
    this->move(100,100);
}


void StudyQWidget::on_pushButton_16_clicked()
{
    this->setMinimumSize(100,200);
}


void StudyQWidget::on_pushButton_4_clicked()
{
    this->setMaximumSize(200,300);
}


void StudyQWidget::on_pushButton_15_clicked()
{
    this->setFixedSize(100,200);
}


void StudyQWidget::on_pushButton_14_clicked()
{
    QSize size = this->maximumSize();
    std::cout << "Max width:" <<  size.width() << std::endl;
    std::cout << "Max height:" <<  size.height() << std::endl;
}


void StudyQWidget::on_pushButton_12_clicked()
{
    QSize size = this->minimumSize();
    std::cout << "Min width:" <<  size.width() << std::endl;
    std::cout << "Min height:" <<  size.height() << std::endl;
}


void StudyQWidget::on_pushButton_9_clicked()
{
    this->setWindowTitle("ABC");
}


void StudyQWidget::on_pushButton_10_clicked()
{
    QString title = this->windowTitle();
    std::cout << " window title: " << title.toStdString() << std::endl;
}


void StudyQWidget::on_pushButton_11_clicked()
{
    // 下面这个代码是用于给这个窗口设置一个图标的，但是我这个代码有一个致命的问题就是我这个图标文件是存放在项目的根目录的res文件夹下的，但是呢可执行文件并不在这个根目录，那可执行文件在哪里呢，其实啊可执行文件其实在：.\LearningQt\LearningQt\build\Desktop_Qt_6_9_1_MinGW_64_bit-Debug\debug 这个目录并且啊可执行文件运行的时候他的根目录是在 他所在的这个目录，这样就会导致项目找不到这个图标文件，所以说这个图标就显示不出来了
    // 那怎么解决这个问题呢，其实也很简单，总共有两种的解决办法
    // 第一种就是将这个res的这个整个文件夹复制到这个可执行文件所在的目录就可以解决了
    // 而第二种呢就很特殊，也就是将这个文件添加到资源文件中来，但是这里要注意资源文件不是文件夹，而是一个xml文件里面记录了各各文件的路径，等到了编译的时候编译器就会把这些文件编译到可执行文件里面来，这样子的话就不会导致图标加载不出来的问题了，这就是资源文件的好处
    QIcon icon(":/res/Iconflie.ico");
    this->setWindowIcon(icon);
}

