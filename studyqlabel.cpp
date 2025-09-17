#include "studyqlabel.h"
#include "ui_studyqlabel.h"
#include <iostream>

StudyQLable::StudyQLable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudyQLable)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("background-color: red");
    ui->label_4->setAlignment(Qt::AlignCenter);
}

StudyQLable::~StudyQLable()
{
    delete ui;
}

void StudyQLable::on_pushButton_clicked()
{
    std::cout << "label1 text: " << ui->label->text().toStdString() << std::endl;
}


void StudyQLable::on_pushButton_2_clicked()
{
    ui->label->setText("ABC");
}


void StudyQLable::on_pushButton_3_clicked()
{
    ui->label_2->setAlignment(Qt::AlignLeft);
}


void StudyQLable::on_pushButton_4_clicked()
{
    ui->label_2->setAlignment(Qt::AlignCenter);
}


void StudyQLable::on_pushButton_5_clicked()
{
    ui->label_2->setAlignment(Qt::AlignRight);
}


void StudyQLable::on_pushButton_6_clicked()
{
    ui->label_3->setWordWrap(false);
}


void StudyQLable::on_pushButton_7_clicked()
{
    ui->label_3->setWordWrap(true);
}


void StudyQLable::on_pushButton_8_clicked()
{
    static int flag = 1;
    if(flag == 1)
    {
        ui->label_4->setPixmap(QPixmap(":/res/start.ico"));
        flag = 2;
    }
    else
    {
        ui->label_4->setPixmap(QPixmap(":/res/stop.ico"));
        flag = 1;
    }
}

