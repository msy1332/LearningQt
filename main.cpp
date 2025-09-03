#include "mainwindow.h" // 包含我们定义的这个窗口类的这个头文件
#include <QApplication> // 包含这个Qt的这个应用程序类的这个头文件

int main(int argc, char *argv[]) // 这个话就是这个Qt应用程序的入口文件
{
    QApplication a(argc, argv); // 实例化了一个QApplication对象
    MainWindow w;   // 实例化了一个窗口类对象
    w.show(); // 调用了这个窗口类的这个show方法，来将这个窗口给显示出来
    return a.exec(); // 调用了应用程序类的exec方法，那这个方法有什么用呢，其实啊这个的作用就是进入到窗口的事件循环，因为只有进入到了事件循环之后窗口它才会处理一些鼠标事件和键盘事件等等
}
