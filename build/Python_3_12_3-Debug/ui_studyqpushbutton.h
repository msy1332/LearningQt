/********************************************************************************
** Form generated from reading UI file 'studyqpushbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYQPUSHBUTTON_H
#define UI_STUDYQPUSHBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudyQPushButton
{
public:
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *StudyQPushButton)
    {
        if (StudyQPushButton->objectName().isEmpty())
            StudyQPushButton->setObjectName(QString::fromUtf8("StudyQPushButton"));
        StudyQPushButton->resize(337, 394);
        pushButton_1 = new QPushButton(StudyQPushButton);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(30, 80, 271, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        pushButton_1->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_1->setIcon(icon);
        pushButton_1->setIconSize(QSize(30, 30));
        pushButton_2 = new QPushButton(StudyQPushButton);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 170, 121, 31));
        label = new QLabel(StudyQPushButton);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 271, 16));
        label_2 = new QLabel(StudyQPushButton);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 271, 16));
        pushButton_3 = new QPushButton(StudyQPushButton);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(180, 170, 121, 31));
        pushButton_4 = new QPushButton(StudyQPushButton);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 240, 271, 31));
        label_3 = new QLabel(StudyQPushButton);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 210, 271, 16));
        label_4 = new QLabel(StudyQPushButton);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 280, 271, 16));
        pushButton_5 = new QPushButton(StudyQPushButton);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 310, 271, 31));

        retranslateUi(StudyQPushButton);

        QMetaObject::connectSlotsByName(StudyQPushButton);
    } // setupUi

    void retranslateUi(QWidget *StudyQPushButton)
    {
        StudyQPushButton->setWindowTitle(QCoreApplication::translate("StudyQPushButton", "Form", nullptr));
        pushButton_1->setText(QCoreApplication::translate("StudyQPushButton", "\345\220\257\345\212\250", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StudyQPushButton", "\350\277\236\346\216\245", nullptr));
        label->setText(QCoreApplication::translate("StudyQPushButton", "\350\256\276\347\275\256\346\226\207\346\234\254\345\222\214\345\233\276\346\240\207", nullptr));
        label_2->setText(QCoreApplication::translate("StudyQPushButton", "\344\275\277\345\222\214\347\246\201\350\203\275", nullptr));
        pushButton_3->setText(QCoreApplication::translate("StudyQPushButton", "\345\217\221\351\200\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("StudyQPushButton", "\346\210\221\346\230\257\344\270\200\344\270\252\346\214\211\351\222\256", nullptr));
        label_3->setText(QCoreApplication::translate("StudyQPushButton", "\346\240\267\345\274\217", nullptr));
        label_4->setText(QCoreApplication::translate("StudyQPushButton", "\344\277\241\345\217\267\346\274\224\347\244\272", nullptr));
        pushButton_5->setText(QCoreApplication::translate("StudyQPushButton", "\344\277\241\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudyQPushButton: public Ui_StudyQPushButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYQPUSHBUTTON_H
