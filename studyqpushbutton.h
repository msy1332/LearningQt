#ifndef STUDYQPUSHBUTTON_H
#define STUDYQPUSHBUTTON_H

#include <QWidget>


/*
    这次我要学习的是QPushButton这个类
    那这个是什么类呢，其实啊这个类是一个按钮控件类
    那我们该如何显示这个按钮呢，要显示这个按钮的话有两种方法
    首先是第一种方法，也就是通过调用按钮类的show方法来将这个按钮独立的显示出来
    然后就是第二种，也就是通过给这个按钮指定父窗口来将这个按钮显示到父窗口里面

    那QPushBtuoon这个类有哪些常用的属性和方法和信号呢

    ************首先是第一个常用的方法，也就是下面这个方法，是用来给按钮设置文本的方法************
    void setText(const QString& text)

    ************然后就是第二个常用的方法，也就是用来获取按钮的文本的方法************
    QString text() const

    ************然后就是第三个常用的方法，也就是给这个按钮的文本设置一个文本样式的方法，也就是下面的这个方法************
    void setFont(QFont&)

    ************然后就是第四个常用的方法，也就是用来给按钮设置图标的方法，也就是下面的这个方法************
    void setIcon(const QIcon& icon)

    ************然后就是第五个常用的方法，也就是说当我们给这个按钮设置图标以后，我们就会发现这个按钮的图标很小，这时我们就可以通过下面的这个方法来给这个按钮的图标设置大小************
    void setIconSize(QSize&)

    ************然后就是第六个常用的方法，这个方法的话就是用于获取按钮图标的方法，也就是下面的这个方法************
    QIcon icon() const

    ************然后就是第七个常用的方法，也就是下面的这个方法，下面的方法主要的作用美化这个按钮，那为什么参数是一个字符串类型的参数呢，那是因为这个字符串里面是写的是QSS代码来美化这个按钮的，他有点类似于再前端中的CSS代码
    void setStyleSheet(const Qstring& styleSheet)

    ************然后就是第八个常用的方法，也就是下面的这个方法，下面的这个方法主要是用来获取按钮的样式的代码的方法************
    QString styleSheet() const

    ************然后就是第九个常用的方法，那就是用来设置这个按钮的使能和禁能的方法，那什么是使能和禁能呢，使能就是说当前的这个按钮的话是可以进行交互的，而禁能呢就是当前这个按钮是不可以交互的
    void setEnabled(bool)

    ************然后就是这个QPushButton这个类的一些常用的信号************
    void clicked(bool clicked = false)   // 这个信号是一个点击信号，也就是说当这个按钮被点击时（也就是这个按钮被按下并抬起时）就会触发该信号
    void pressed()                       // 这个信号是一个按钮按下信号，也就是说当这个按钮被按下时就会触发该信号
    void released()                      // 这个信号的话是一个按钮的抬起信号，也就是说当这个按钮按下之后这个按钮被抬起时就会触发该信号

    接下来的话就写一个案例，来总结一下学习的这些常用的方法和信号
*/

namespace Ui {
class StudyQPushButton;
}

class StudyQPushButton : public QWidget
{
    Q_OBJECT

public:
    explicit StudyQPushButton(QWidget *parent = nullptr);
    ~StudyQPushButton();

private slots:
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();

    void on_pushButton_5_pressed();

    void on_pushButton_5_released();

private:
    Ui::StudyQPushButton *ui;
};

#endif // STUDYQPUSHBUTTON_H
