#include "studyfiledialog.h"
#include "ui_studyfiledialog.h"

StudyFileDialog::StudyFileDialog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudyFileDialog)
{
    ui->setupUi(this);
}

StudyFileDialog::~StudyFileDialog()
{
    delete ui;
}

void StudyFileDialog::on_pushButton_clicked()
{
    QFileDialog File; // 实例化一个QFileDialog类对象
    File.setWindowTitle("选择文件"); // 设置选择文件的对话框的标题
    File.setDirectory(QDir::homePath()); // 设置选择文件的对话框默认打开的目录，这里的话我是通过目录操作类来获取用户的目录，并将这个目录设置为文件选择对话框的默认打开目录
    File.setNameFilter("所有文件(*.*)"); // 设置选择文件的过滤器
    File.setFileMode(QFileDialog::ExistingFile); // 设置选择文件的模式，我这里的话是设置为只能选择一个已存在的文件
    File.setViewMode(QFileDialog::Detail); // 设置文件选择对话框的文件视图模式，我这个设置的是详细视图模式

    if(File.exec() == QDialog::Accepted) // 进入到文件选择对话框事件循环，并设置这个对话框为模态对话框，并且判断这个函数的返回值是否是QDialog::Accepted，也就是判断用户是否按下了对话框的确认键，如果按下了确认键那就获取这个文件的详细信息
    {
        QStringList Filelist = File.selectedFiles(); // 获取用户选择的文件
        QFileInfo file(Filelist[0]); // 实例化一个QFileInfo类对象，并使用这个文件的路径来初始化这个对象

        // QDateTime
        std::cout << "Name: " << file.fileName().toStdString() << std::endl; // 获取文件的名称
        std::cout << "Path: " << file.absoluteFilePath().toStdString() << std::endl; // 获取文件的完整路径
        std::cout << "file dir: " << file.absolutePath().toStdString() << std::endl; // 获取文件的所在文件夹的路径
        std::cout << "file size: " << file.size() << std::endl; // 获取这个文件的大小
        std::cout << "file type: " << file.suffix().toStdString() << std::endl; // 获取这个文件类型
        std::cout << "file Create Time: " << file.birthTime().timeZoneAbbreviation().toStdString() << std::endl; // 获取这个文件的创建的时间
        std::cout << "file Last Time: " << file.lastModified().timeZoneAbbreviation().toStdString() << std::endl; // 获取这个文件的最后一次修改的时间
        std::cout << "file if Read: " << file.isReadable() << std::endl; // 获取这个文件是否可读
    }
}

