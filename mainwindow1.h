#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>

namespace Ui {
class MainWindow1;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();

private:
    Ui::MainWindow1 *ui;

public slots:
    void Add();             // 计算这两个数的加法
    void Minus();           // 计算这两个数的减法
    void Multiply();        // 计算这两个数的乘法
    void Divide();          // 计算这两个数的除法
};

#endif // MAINWINDOW1_H
