#include "studylineedit.h"
#include "ui_studylineedit.h"
#include <QDebug>

StudyLineEdit::StudyLineEdit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudyLineEdit)
{
    ui->setupUi(this);
    ui->lineEdit3_2->setInputMask("000.000.000.000");
    ui->lineEdit3_3->setInputMask(">AAAAA-AAAAA-AAAAA-AAAAA-AAAAA");
}

StudyLineEdit::~StudyLineEdit()
{
    delete ui;
}

void StudyLineEdit::on_pushButton_clicked()
{
    ui->lineEdit1->setPlaceholderText("请输入用户名");
}


void StudyLineEdit::on_pushButton_2_clicked()
{
    qDebug() << ui->lineEdit1->placeholderText();
}


void StudyLineEdit::on_pushButton_3_clicked()
{
    ui->lineEdit2->setAlignment(Qt::AlignLeft);
}


void StudyLineEdit::on_pushButton_4_clicked()
{
    ui->lineEdit2->setAlignment(Qt::AlignCenter);
}


void StudyLineEdit::on_pushButton_5_clicked()
{
    ui->lineEdit2->setAlignment(Qt::AlignRight);
}


void StudyLineEdit::on_pushButton_6_clicked()
{
    ui->lineEdit3->setEchoMode(QLineEdit::Normal);
}


void StudyLineEdit::on_pushButton_7_clicked()
{
    ui->lineEdit3->setEchoMode(QLineEdit::Password);
}


void StudyLineEdit::on_pushButton_8_clicked()
{
    ui->lineEdit3->setEchoMode(QLineEdit::NoEcho);
}


void StudyLineEdit::on_pushButton_9_clicked()
{
    ui->lineEdit3->setEchoMode(QLineEdit::PasswordEchoOnEdit);
}



void StudyLineEdit::on_pushButton_10_clicked()
{
    ui->lineEdit4->setReadOnly(true);
}


void StudyLineEdit::on_pushButton_11_clicked()
{
    ui->lineEdit4->setReadOnly(false);
}


void StudyLineEdit::on_pushButton_12_clicked()
{
    ui->lineEdit4->setEnabled(true);
}


void StudyLineEdit::on_pushButton_13_clicked()
{
    ui->lineEdit4->setEnabled(false);
}

