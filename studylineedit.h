#ifndef STUDYLINEEDIT_H
#define STUDYLINEEDIT_H

#include <QWidget>

/*
    这次我要学习的是QLineEdit这个类
    那这个是什么类呢，其实啊，这个类是一个行编辑框控件
    那我们给如何显示这个控件呢，其实啊显示这个控件也有两种方法
    方法一就是通过调用这个类的show函数，来将这个控件独立的显示出来
    然后的话就是第二种方法，也就是通过给这个控件设置父类的方式来显示这个控件，也就是说将这个控件显示到其他的窗口里面

    那QLineEdit这个类有哪些常用的属性和方法呢
    ************************首先是第一个常用的方法，也就是下面的这个方法，这个方法的作用就是给行编辑框设置一个占位字符串，也就是设置提示文本************************
    void setPlacsholderText(const QString&)

    ************************然后就是第二个常用的方法，也就是下面的这个方法，这个方法的作用就是获取这个占位字符串，也就是获取这个提示文本************************
    QString placeholderText() const

    ************************然后就第三个常用的方法，也就是下面的这个方法，这个方法的作用就是设置行编辑框的文本的对齐方式，那在这个控件中有哪些常用的对齐方式呢，也就是下面的这几种**********************
    对齐方式
        Qt::AlirnCenter 水平和垂直都居中对齐
        Qt::AlignLeft   水平方向上的左对齐
        Qt::AlignRight  水平方向上的右对齐
        Qt::AlignVCenter 垂直方向上的居中对齐
        Qt::AlignHCenter 水平方向上的居中对齐
        Qt::AlignTop 垂直方向上的上对齐
        Qt::AlignBottom 垂直方向上的下对齐
        Qt::AlignBottom 垂直方向上的下对齐
    void setAlignment(QT::Alignment flag)

    ************************然后的话就是第四种常用的方法，也就是下面的这个方法，这个方法的作用就是获取行编辑框的对齐方式************************
    Qt::Alignment alignment const

    ************************然后的话就是第五种常用的方法，也就是下面的这个方法，这个方法的作用就是设置这个行编辑框的回显模式，那在这个控件中有哪些常用的回显模式呢，也就是下面的这几种模式************************
    回显模式
        QLineEdit::Normal 正常模式，也就是说你输入的文本都是正常的显示出来的
        QLineEdit::Password 密码模式，也就是以密码的方式来输入的文本显示文本
        QLineEdit::NoEcho 无回显模式，也就是说你输入的文本都不会显示
        QLineEdit::PasswordEchoOnEdit 无对焦密码显示模式，也就是说，当你和行编辑框失去了焦点的时候才会以密码的回显模式来显示文本，其他情况的话就以正常的回显模式来显示文本
    void setEchoMode(QLineEdit::EchoMode)

    ************************然后的话就是第六种常用的方法，也就是下面的这个方法，这个方法的作用就是设置这个行编辑框的读写模式************************
    void setReadOnly(bool)

    ************************然后的话就是第七种常用的方法，也就是下面的这个方法，这个方法的作用就是获取这个行编辑框的读写的模式************************
    bool isReadOnly() const

    ************************然后的话就是第八种常用的方法，也就是下面的这个方法，这个方法的作用就是设置这个行编辑框的使能和禁能************************
    void setEnabled(bool)

    ************************然后话就是第九种常用的方法，也就是下面的这个方法，这个方法的作用就是获取这个行编辑框的使能和禁能************************
    bool isEnabled() const

    ************************然后的话就是第十种常用的方法，也就是下面的这个方法，这个方法的作用就是用来设置这个行编辑框的输入的格式的************************
    void setInputMask(const QString &inputMask)

    ************************然后的话就是第十一种常用的方法，也就死下面的这个方法，这个方法的作用就是获取这个行编辑框的控制输入的格式字符串************************
    QString inputMask() const
*/




namespace Ui {
class StudyLineEdit;
}

class StudyLineEdit : public QWidget
{
    Q_OBJECT

public:
    explicit StudyLineEdit(QWidget *parent = nullptr);
    ~StudyLineEdit();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::StudyLineEdit *ui;
};

#endif // STUDYLINEEDIT_H
