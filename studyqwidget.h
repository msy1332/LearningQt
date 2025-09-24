#ifndef STUDYQWIDGET_H
#define STUDYQWIDGET_H

#include <QWidget>


/*
    这次我学习一下QWidget这个类
    那什么是QWidget,QWidget其实是一个窗口类
    并且啊，这个QWidth是所有窗口类的基类并且啊也是所有控件的基类
    那如何显示这个QWidget这个窗口呢，首先吗就是显示这个窗口的话总共有两种方法
    第一种方法就是将这个QWidget这个窗口当一个独立的窗口来显示，也就是通过QWidget的show这个方法就可以将这个窗口独立的显示出来
    然后的话就是第二种方法，就是将这个QWidget这个窗口当作别的窗口的子类，也就是将这个窗口内嵌到别的窗口
    那怎么内嵌呢，方法其实也很简单，也就是将别的窗口作为自己的父类就可以实现了，首先就是在创建这个窗口类的时候将别的窗口的指针传进来就可以将别的窗口作为自己的父类了，并且啊如果你是指针的话，父类也会帮你自动的释放内存，并且啊你不需要显示的调用show方法来显示出来，因为这个窗口是父类的这个窗口的内嵌窗口所以的话当父类的窗口显示的出来的时候，子类的窗口也会显示出来，并且啊这个窗口是内嵌到这个父类这个窗口里面的
    如果是控件的话，你就一定要指定父窗口的，如果不指定的话，你这个控件他是不会设置到窗口上的，但是的话还有一种方法可以设置父窗口的方法，也即是调用这个函数setParent(),并将父窗口传进去就可以设置父窗口了

    那QWidget这个类有哪些常用的属性和方法呢
    1.设置窗口的位置和大小，也就是下面这些方法
    **************下面这个两个方法的话就是可以给这个窗口设置位置和窗口的宽度和高度**************
    void setGeometry(const QRect&)
    void setGeometry(int x,int y,int w,int h)

    *******然后就是这个方法，这个方法的话就是可以获取窗口的位置信息的，包括窗口的宽度和高度
    const QRect& geometry() const

    **************如何的话就是下面这两个方法，这两个方法的话就是可以移动这个窗口**************
    void move(int x,int y)
    void move(const QPoint&)

    2.设置窗口的大小
    **************下面这个方法的话就是可以给这个窗口设置宽度和高度的**************
    void resize(int w,int h)
    void resize(const QSize&)

    **************然后的话就是下面这个方法，下面这个方法的话就是可以获取这个窗口的宽度和高度**************
    QSize size() const

    **************首先的话就是下面的这两个方法，这两个方法的话，就是可以给这个窗口设置这个最大大小的**************
    void setMaximumSize(const QSize&)
    void setMaximunmSize(int maxw,int maxh)

    **************然后的话就是获取这个窗口的最大大小的方法**************
    QSize maximumSize() const

    **************然后的话就是这个方法，也就是设置这个窗口的最小大小**************
    void setMinimumSize(const QSize&)
    void setMinimunmSize(int minw,int minh)

    **************竟然可以获取窗口的最大大小了，那肯定也有获取窗口的最小大小的方法了，也就是下面的这个方法**************
    QSize mimimumSize() const

    **************当然了也可以给这个窗口设置这个窗口的固定大小，也即是下面的这两两个方法**************
    void setFixedSize(const QSize&)
    void setFixedSize(int w,int h)

    当然了设置窗口的大小的方法还有很多，这里就不列举了
    3.设置标题，图标
    **************首先是如何给这个方法设置标题呢，其实也很简单，也就调用下面这个方法就可以给这个窗口设置标题了**************
    void setWindowTitle(const QString&)

    **************当然了有设置的话，呢肯定也有获取窗口标题的方法，也就是下面这个方法**************
    QString windowTitle() const

    **************那如何给这个窗口设置标题呢，其实也很简单，也就是使用下面的这个方法就可以实现**************
    void setWindowIcon(const QIcon& icon)

    **************当然啦有设置呢肯定也有获取，也即是使用下面的这个方法**************
    QIcon windowIcon() const

    当然啦，这个QWidget这个类中也有很多常用的一些槽函数
    1. void showMaximized()     这个槽函数的话是用于设置窗口为最大化显示的槽函数
    2. void showMinimized()     这个槽函数的话就是给这个窗口设置为最小化显示的槽函数
    3. void showNormal()        这个函数的话就是给给这个窗口设置为正常的显示这个窗口
    4. void close(bool)         然后的话就是这个槽函数，这个槽函数的话作用就很大了，这个槽函数的话是用于关闭窗口的槽函数


    现在的就是我写一个案例来总结我学的知识，也即是我学的这个QWidget这个类的常用的属性和方法和槽函数
*/

namespace Ui {
class StudyQWidget;
}

class StudyQWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StudyQWidget(QWidget *parent = nullptr);
    ~StudyQWidget();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();

private:
    Ui::StudyQWidget *ui;
};

#endif // STUDYQWIDGET_H
