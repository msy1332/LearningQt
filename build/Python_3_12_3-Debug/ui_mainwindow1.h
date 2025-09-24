/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralwidget;
    QPushButton *PushButton_1;
    QPushButton *PushButton_2;
    QPushButton *PushButton_3;
    QPushButton *PushButton_5;
    QPushButton *PushButton_4;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName(QString::fromUtf8("MainWindow1"));
        MainWindow1->resize(579, 402);
        centralwidget = new QWidget(MainWindow1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        PushButton_1 = new QPushButton(centralwidget);
        PushButton_1->setObjectName(QString::fromUtf8("PushButton_1"));
        PushButton_1->setGeometry(QRect(30, 230, 81, 81));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        PushButton_1->setFont(font);
        PushButton_2 = new QPushButton(centralwidget);
        PushButton_2->setObjectName(QString::fromUtf8("PushButton_2"));
        PushButton_2->setGeometry(QRect(130, 230, 81, 81));
        PushButton_2->setFont(font);
        PushButton_3 = new QPushButton(centralwidget);
        PushButton_3->setObjectName(QString::fromUtf8("PushButton_3"));
        PushButton_3->setGeometry(QRect(230, 230, 81, 81));
        PushButton_3->setFont(font);
        PushButton_5 = new QPushButton(centralwidget);
        PushButton_5->setObjectName(QString::fromUtf8("PushButton_5"));
        PushButton_5->setGeometry(QRect(430, 230, 81, 81));
        PushButton_5->setFont(font);
        PushButton_4 = new QPushButton(centralwidget);
        PushButton_4->setObjectName(QString::fromUtf8("PushButton_4"));
        PushButton_4->setGeometry(QRect(330, 230, 81, 81));
        PushButton_4->setFont(font);
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(150, 50, 361, 41));
        lineEdit_1->setReadOnly(false);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 100, 361, 41));
        lineEdit_2->setReadOnly(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 111, 41));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 150, 361, 41));
        lineEdit_3->setReadOnly(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 111, 41));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 111, 41));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 579, 20));
        MainWindow1->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow1->setStatusBar(statusbar);

        retranslateUi(MainWindow1);

        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QCoreApplication::translate("MainWindow1", "\350\256\241\346\225\260\345\231\250", nullptr));
        PushButton_1->setText(QCoreApplication::translate("MainWindow1", "\345\212\240", nullptr));
        PushButton_2->setText(QCoreApplication::translate("MainWindow1", "\345\207\217", nullptr));
        PushButton_3->setText(QCoreApplication::translate("MainWindow1", "\344\271\230", nullptr));
        PushButton_5->setText(QCoreApplication::translate("MainWindow1", "\346\270\205\347\251\272", nullptr));
        PushButton_4->setText(QCoreApplication::translate("MainWindow1", "\351\231\244", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow1", "\347\254\254\344\270\200\344\270\252\346\225\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow1", "\347\254\254\344\272\214\344\270\252\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow1", "\347\273\223\346\236\234     :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
