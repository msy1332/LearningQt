#ifndef STUDYQLABEL_H
#define STUDYQLABEL_H

#include <QWidget>

/*
    这次我要学习的是QLabel这个类
    那这个是什么类呢？其实啊这个类是一个QLabel标签控件
    那我们该如何显示这个标签呢，显示标签的话有两种方法
    首先吗第一种方法就是通过调用QLabel这个类的show方法来将这个标签控件给独立显示出来
    而第二种方法就是给标签指定一个父窗口，来将这个标签给显示到父窗口里面
    那QLabel这个类有哪些常用的方法和属性
    **********************首先是第一个常用的方法，也就是下面的这个方法，这个方法的作用就是获取标签的文本**********************
    QString text() const

    **********************然后就是第二个常用的方法，也就是下面这个方法，这个方法的作用就是设置标签的文本**********************
    void setText(const QString&)

    **********************然后就是第三个常用的方法，也就是下面的这个方法，这个方法的作用就是设置标签文本的对齐方式**********************
    void setAlignment(QT::ALIgnment)

    **********************然后就是第三个常用的方法，也就是下面的这个方法，这个方法的作用就是获取标签文本的对齐方式**********************
    QT::ALIgnment alignmnet() const

    **********************然后就是第四个常用的方法，也就是下面的这个方法，这个方法的作用就是设置标签文本是否换行**********************
    void setWordWrap(bool on)

    **********************然后就是第五个常用的方法，也就是下面的这个方法，这个方法的作用就是获取标签是否换行了**********************
    bool wordWrap() conat;

    **********************然后就是第六个常用的方法，也即是下面的这个方法，这个方法的作用就是给标签设置一个图像**********************
    void setPixmap(const QPixmap & pixmap)

    **********************然后就是第七个常用的方法，也就是下面的这个方法，这个方法的作用就是获取标签里面的图像**********************
    const QPixmap *pixmap() const

    接下来就通过一个样例复习一下所学习的QLabel这个类的一些常用的属性和方法
*/



namespace Ui {
class StudyQLable;
}

class StudyQLable : public QWidget
{
    Q_OBJECT

public:
    explicit StudyQLable(QWidget *parent = nullptr);
    ~StudyQLable();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::StudyQLable *ui;
};

#endif // STUDYQLABEL_H
