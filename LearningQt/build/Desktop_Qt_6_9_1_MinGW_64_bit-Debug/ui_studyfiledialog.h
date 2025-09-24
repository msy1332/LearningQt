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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudyFileDialog
{
public:
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;

    void setupUi(QWidget *StudyFileDialog)
    {
        if (StudyFileDialog->objectName().isEmpty())
            StudyFileDialog->setObjectName("StudyFileDialog");
        StudyFileDialog->resize(970, 629);
        pushButton = new QPushButton(StudyFileDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 80, 241, 71));
        tabWidget = new QTabWidget(StudyFileDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(440, 210, 251, 161));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        groupBox = new QGroupBox(StudyFileDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 200, 241, 191));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(59, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(StudyFileDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 430, 331, 31));
        textEdit = new QTextEdit(StudyFileDialog);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(410, 430, 521, 181));

        retranslateUi(StudyFileDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StudyFileDialog);
    } // setupUi

    void retranslateUi(QWidget *StudyFileDialog)
    {
        StudyFileDialog->setWindowTitle(QCoreApplication::translate("StudyFileDialog", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("StudyFileDialog", "SelectFile...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("StudyFileDialog", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("StudyFileDialog", "Tab 2", nullptr));
        groupBox->setTitle(QCoreApplication::translate("StudyFileDialog", "GroupBox", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StudyFileDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudyFileDialog: public Ui_StudyFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYFILEDIALOG_H
