#ifndef STUDYQPUSHBUTTON_H
#define STUDYQPUSHBUTTON_H

#include <QWidget>

namespace Ui {
class StudyQPushButton;
}

class StudyQPushButton : public QWidget
{
    Q_OBJECT

public:
    explicit StudyQPushButton(QWidget *parent = nullptr);
    ~StudyQPushButton();

private:
    Ui::StudyQPushButton *ui;
};

#endif // STUDYQPUSHBUTTON_H
