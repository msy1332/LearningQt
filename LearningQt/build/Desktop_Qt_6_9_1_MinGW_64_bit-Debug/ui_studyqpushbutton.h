/********************************************************************************
** Form generated from reading UI file 'studyqpushbutton.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYQPUSHBUTTON_H
#define UI_STUDYQPUSHBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudyQPushButton
{
public:

    void setupUi(QWidget *StudyQPushButton)
    {
        if (StudyQPushButton->objectName().isEmpty())
            StudyQPushButton->setObjectName("StudyQPushButton");
        StudyQPushButton->resize(400, 300);

        retranslateUi(StudyQPushButton);

        QMetaObject::connectSlotsByName(StudyQPushButton);
    } // setupUi

    void retranslateUi(QWidget *StudyQPushButton)
    {
        StudyQPushButton->setWindowTitle(QCoreApplication::translate("StudyQPushButton", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudyQPushButton: public Ui_StudyQPushButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYQPUSHBUTTON_H
