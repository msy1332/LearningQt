#include "studyqpushbutton.h"
#include "ui_studyqpushbutton.h"

StudyQPushButton::StudyQPushButton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudyQPushButton)
{
    ui->setupUi(this);
}

StudyQPushButton::~StudyQPushButton()
{
    delete ui;
}
