/********************************************************************************
** Form generated from reading UI file 'studyqlabel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYQLABEL_H
#define UI_STUDYQLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudyQLable
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_4;
    QPushButton *pushButton_8;

    void setupUi(QWidget *StudyQLable)
    {
        if (StudyQLable->objectName().isEmpty())
            StudyQLable->setObjectName("StudyQLable");
        StudyQLable->resize(863, 686);
        widget = new QWidget(StudyQLable);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 702, 521));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: red"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");

        horizontalLayout_3->addWidget(pushButton_7);


        verticalLayout->addLayout(horizontalLayout_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/res/start.ico")));

        verticalLayout->addWidget(label_4);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");

        verticalLayout->addWidget(pushButton_8);


        retranslateUi(StudyQLable);

        QMetaObject::connectSlotsByName(StudyQLable);
    } // setupUi

    void retranslateUi(QWidget *StudyQLable)
    {
        StudyQLable->setWindowTitle(QCoreApplication::translate("StudyQLable", "Form", nullptr));
        label->setText(QCoreApplication::translate("StudyQLable", "123", nullptr));
        pushButton->setText(QCoreApplication::translate("StudyQLable", "\350\216\267\345\217\226\346\226\207\346\234\254", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StudyQLable", "\350\256\276\347\275\256\346\226\207\346\234\254", nullptr));
        label_2->setText(QCoreApplication::translate("StudyQLable", "\346\210\221\346\230\257\344\270\200\346\256\265\346\226\207\345\255\227", nullptr));
        pushButton_3->setText(QCoreApplication::translate("StudyQLable", "\345\267\246\345\257\271\351\275\220", nullptr));
        pushButton_4->setText(QCoreApplication::translate("StudyQLable", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
        pushButton_5->setText(QCoreApplication::translate("StudyQLable", "\345\217\263\345\257\271\351\275\220", nullptr));
        label_3->setText(QCoreApplication::translate("StudyQLable", "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111", nullptr));
        pushButton_6->setText(QCoreApplication::translate("StudyQLable", "\347\246\201\346\255\242\346\215\242\350\241\214", nullptr));
        pushButton_7->setText(QCoreApplication::translate("StudyQLable", "\345\205\201\350\256\270\346\215\242\350\241\214", nullptr));
        label_4->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("StudyQLable", "\345\210\207\346\215\242\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudyQLable: public Ui_StudyQLable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYQLABEL_H
