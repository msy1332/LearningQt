/*
    下面这些代码就是为了防止头文件被重复包含
    #ifndef MAINWINDOW_H
    #define MAINWINDOW_H
    #endif // MAINWINDOW_H
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow> //包含QMainWindow这个窗口的这个头文件

QT_BEGIN_NAMESPACE
namespace Ui {  // 定义了一个UI的命名空间，并在这个命名空间里面声明了一个MainWindow的这个类
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow // 定义MainWindow类，并继承QMainWindow这个类
{
    Q_OBJECT // 启动元对象系统,那为什么要启用元对象系统呢，那是因为只有启用元对象系统才能使用Qt的信号与槽机制

public:
    MainWindow(QWidget *parent = nullptr); // 定义了一个有参构造函数，用来初始化这个对象的
    ~MainWindow(); // 析构函数，用来释放该对象所用到的资源

private:
    Ui::MainWindow *ui; // 定义了一个MainWindow指针，因为有了这个指针之后才能访问使用Qt设计器里面的拖拽出的控件

public slots: // 公共的槽函数
    void Processing_Users_Login(); // 处理用户的登录
};
#endif // MAINWINDOW_H
