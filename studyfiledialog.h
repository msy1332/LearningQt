#ifndef STUDYFILEDIALOG_H
#define STUDYFILEDIALOG_H

#include <QWidget>
#include <QFileDialog>
#include <QFileInfo>
#include <iostream>

/*
    这次我要学习的是QFileDialog这个类
    那这个是什么类呢，其实啊这个类是一个选择文件的对话框模态类，也就是说他是一个对话框控件
    这个控件的主要的作用就是弹出一个用于选择文件的对话框，并获取用户选择的文件的路径
    那我们该如何创建这个选择文件的对话框呢，其实啊有两种方法
    第一种方法就是通过调用QFileDialog这个类的静态方法来创建对话框，那有多少种创建选择文件的对话框的静态方法呢，答案是有三种方法
        首先是第一种方法也就是调用getOpenFileNames()方法，这个方法的话他是用于创建可以一次性选择多个文件的对话框
        然后就是第二种方法也就是这个方法getSaveFileName()方法 ，这个方法的话他是用于创建选择文件的保存位置的对话框
        然后就是第三种方法，也就是这个方法getExistingDirectory() ，这个方法用于创建选择文件夹的对话框
    然后就是第二种方法，也就是通过调用这个类的exec方法来进入到这个对话框事件循环，进入到了事件循环之后，他会自动的设置为模态窗口，也就是说当这个调用了这个方法之后呢，其他的窗口的交互都会被禁止
    但是这个方法必须实例化一个这个对象

    那QFileDialog这个类有哪些常用的方法呢
    **********************首先是第一个常用的方法，也就是setWindowTitle方法，那这个方法有什么用呢，这个方法的作用就是设置这个对话框的窗口的标题**********************
    void setWindowTitle(QString&)

    **********************然后就是第二个常用的方法，也就是setDirectory(),那这个方法有什么用呢，其实啊这个方法的主要的作用就是设置选择文件的对话框默认打开的目录**********************
    void setDirectory(QString&)

    **********************然后就是第三个常用的方法，也就是setNameFilter(),那这个方法有什么用呢，其实啊这个方法的作用就是设置选择文件的过滤器**********************
    void setNameFilter(QString&)

    **********************然后就是第四个常用的方法，也就是setFileMode()这个方法,那这个方法有什么用呢，其实啊这个方法的作用就是用来设置选择文件的模式，那有多少种常用的选择文件的模式呢，答案的有4种，也就是下面的这四种**********************
    QFileDialog::AnyFile	可以选择一个已存在的文件，也可以输入一个不存在的文件名（适合保存文件）。
    QFileDialog::ExistingFile	必须选择 一个已存在的文件。
    QFileDialog::ExistingFiles	可以选择 多个已存在的文件（多选）。
    QFileDialog::Directory	只能选择 目录，而不是文件。
    void setFileMode(QFileDialog)

    **********************然后就是第五个常用的方法，也就是setViewMode()方法，那这个方法有什么用呢，其实啊这个方法的主要的作用就是用来设置选择文件的对话框的文件的视图的，那有多少种选择的文件视图呢，答案是有2种，也即是下面的这两种**********************
    QFileDialog::List	列表视图，显示文件名列表，一行一个文件，类似简洁列表。
    QFileDialog::Detail	详细视图，显示文件名、大小、修改日期等详细信息，类似系统资源管理器“详细信息”模式。
    setViewMode(QFileDialog)

    **********************然后就是第五个常用的方法，也就是selectedFiles()这个方法，那这个方法有什么用呢，其实啊这个方法的作用就是获取用户选择文件的路径**********************
    const QString selectedFiles() const

    但是呢我这里又有一个需求就是我想获取这个文件的大小，位置，名字等等文件详细信息呢，那怎么获取呢，这时候就要配合另一个类来实现了，那这个时什么类呢，其实啊这个类就是这个：QFileInfo
    那QFileInfo这个类有哪些常用的方法呢
    **********************首先是第一种常用的方法，也就是fileName()这个方法，那这个方法有什么用嗯，其实啊这个方法的作用就是获取用户选择的那个文件的文件的名称**********************
    Qstring fileName() const;

    **********************然后就是第二个常用的方法，也就是absoluteFilePath()这个方法，那这个方法有什么用呢，其实啊这个方法的作用就是获取这个文件的完整的路径**********************
    QString absoluteFilePath() const;

    **********************然后就是第三个常用的方法，也就是absolutePath()这个方法，那这个方法有什么用呢，其实啊这个方法主要的作用就是获取用户选择的文件的所在路径**********************
    QString absolutePath() const;

    **********************然后就是第四个常用的方法，也就是size()这个方法，那这个方法有什么用呢，其实啊这个方法的主要的作用就是获取这个文件的大小，它是以字节为单位的**********************
    int size() const;

    **********************然后就是第五个常用的方法，也就是suffix()这个方法，那这个方法有什么用嗯，其实啊这个方法的主要的作用就是获取这个文件的后缀，也就是获取这个文件的类型**********************
    QStrig suffix() const;

    **********************然后就是第六个常用的方法，也就是birthTime()这个方法，那这个方法有什么用嗯，其实啊这个方法的作用就是获取这个文件的创建时间**********************
    QString birthTime() const;

    **********************然后就是第七个常用的方法，也就是lastModified()这个方法，那这个方法有什么用呢，其实啊这个方法的主要的作用就是获取这个文件的最后一次修改这个文件的时间**********************
    QString lastModified() const;

    **********************然后就是第八个常用的方法，也就是isReadable()这个方法，那这个方法有什么用呢，其实啊这个方法的作用就是获取这个文件是否是可读的**********************
    bool isReadable() const;


    然后的话现在就通过一个案例来复习一下，这个案例的话就是创建一个对话框，并显示用户选择文件的各各的文件的信息
 */

namespace Ui {
class StudyFileDialog;
}

class StudyFileDialog : public QWidget
{
    Q_OBJECT

public:
    explicit StudyFileDialog(QWidget *parent = nullptr);
    ~StudyFileDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::StudyFileDialog *ui;
};

#endif // STUDYFILEDIALOG_H
