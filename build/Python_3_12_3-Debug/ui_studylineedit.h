/********************************************************************************
** Form generated from reading UI file 'studylineedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYLINEEDIT_H
#define UI_STUDYLINEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudyLineEdit
{
public:

    void setupUi(QWidget *StudyLineEdit)
    {
        if (StudyLineEdit->objectName().isEmpty())
            StudyLineEdit->setObjectName(QString::fromUtf8("StudyLineEdit"));
        StudyLineEdit->resize(400, 300);

        retranslateUi(StudyLineEdit);

        QMetaObject::connectSlotsByName(StudyLineEdit);
    } // setupUi

    void retranslateUi(QWidget *StudyLineEdit)
    {
        StudyLineEdit->setWindowTitle(QCoreApplication::translate("StudyLineEdit", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudyLineEdit: public Ui_StudyLineEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYLINEEDIT_H
