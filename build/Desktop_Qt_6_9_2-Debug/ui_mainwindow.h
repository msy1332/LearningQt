/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *User_lineEdit;
    QLineEdit *Password_lineEdit;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Login_PushButton;
    QPushButton *Cancel_PushButton;
    QMenuBar *menubar;
    QMenu *menu_Qt;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(386, 256);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 20, 251, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        User_lineEdit = new QLineEdit(widget);
        User_lineEdit->setObjectName("User_lineEdit");

        verticalLayout->addWidget(User_lineEdit);

        Password_lineEdit = new QLineEdit(widget);
        Password_lineEdit->setObjectName("Password_lineEdit");
        Password_lineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(Password_lineEdit);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(40, 20, 55, 121));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(40, 160, 311, 25));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Login_PushButton = new QPushButton(widget2);
        Login_PushButton->setObjectName("Login_PushButton");

        horizontalLayout->addWidget(Login_PushButton);

        Cancel_PushButton = new QPushButton(widget2);
        Cancel_PushButton->setObjectName("Cancel_PushButton");

        horizontalLayout->addWidget(Cancel_PushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 386, 20));
        menu_Qt = new QMenu(menubar);
        menu_Qt->setObjectName("menu_Qt");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_Qt->menuAction());
        menu_Qt->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        Password_lineEdit->setInputMask(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        Login_PushButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        Cancel_PushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        menu_Qt->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
