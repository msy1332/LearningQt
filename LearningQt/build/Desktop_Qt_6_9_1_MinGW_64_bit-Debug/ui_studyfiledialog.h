/********************************************************************************
** Form generated from reading UI file 'studyfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYFILEDIALOG_H
#define UI_STUDYFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudyFileDialog
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *StudyFileDialog)
    {
        if (StudyFileDialog->objectName().isEmpty())
            StudyFileDialog->setObjectName("StudyFileDialog");
        StudyFileDialog->resize(357, 200);
        pushButton = new QPushButton(StudyFileDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 50, 241, 71));

        retranslateUi(StudyFileDialog);

        QMetaObject::connectSlotsByName(StudyFileDialog);
    } // setupUi

    void retranslateUi(QWidget *StudyFileDialog)
    {
        StudyFileDialog->setWindowTitle(QCoreApplication::translate("StudyFileDialog", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("StudyFileDialog", "SelectFile...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudyFileDialog: public Ui_StudyFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYFILEDIALOG_H
