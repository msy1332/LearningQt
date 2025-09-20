QT += core gui # 用来表示你这个Qt用到了哪些库，也就是用到了哪些模块，并添加到当前的Qt的项目中去，就比如说这个项目就用到了core gui模块
# 那这两个模块又有什么用呢，首先的话就是core这个模块，这个模块是Qt应用程序的基础，因为他主要是实现了Qt的信号与槽的通讯机制，事件系统，并发多线程，容器
# 那这个gui模块又是有什么用呢，gui模块是图形界面的基础，因为他实现了图形界面的核心功能，并且他是所以的Qt图形应用程序的基础模块

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets # 这个是用来判断当前的Qt版本是否是大于4，如果大于四的话，那就还要在添加一个widgets模块，那为什么呢，因为在Qt4的之前的版本（包括Qt4的），widgets这个模块他是在gui这个模块里面的，但是在Qt5之后的版本（包括Qt5）这个模块就是独立了出来，也就是说这句代码的意思就是判断当前的Qt的版本是否是大于Qt4的，如果大于4的话就将widgets这个模块也添加到当前的项目中去

CONFIG += c++17 # 指定用到的C++版本

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
# 那上面这段代码是什么意思呢，意思就是是否要禁用掉Qt6之后的一些API


SOURCES += \            # 指定这个Qt项目的源文件
    main.cpp \
    mainwindow.cpp \
    mainwindow1.cpp \
    studyfiledialog.cpp \
    studyqlabel.cpp \
    studyqpushbutton.cpp \
    studyqwidget.cpp

HEADERS += \            # 指定这个Qt项目的头文件
    mainwindow.h \
    mainwindow1.h \
    studyfiledialog.h \
    studyqlabel.h \
    studyqpushbutton.h \
    studyqwidget.h

FORMS += \              # 指定这个Qt项目的ui文件，也就是设计文件
    mainwindow.ui \
    mainwindow1.ui \
    studyfiledialog.ui \
    studyqlabel.ui \
    studyqpushbutton.ui \
    studyqwidget.ui

# Default rules for deployment.
# 下面这段代码是什么意思呢
# 首先是第一句 qnx: target.path = /tmp/$${TARGET}/bin 也就是这句，这句的意思就是来判断当前的平台是否是QNX（也就是嵌入式设备）如果是的话就把安装路径设为 /tmp/$${TARGET}/bin，$${TARGET} 那这个是什么呢这个是qmake中的一个宏，用来代表可执行程序的文件名
# 然后就是第二句 else: unix:!android: target.path = /opt/$${TARGET}/bin 意思就是说如果当前的平台不是QNX的话，也即是普通的Unix系统（Linux）的话,那这时又有疑问了那什么是Unix系统啊，Unix系统其实就是一个操作系统，他早在1969年在贝尔实验室诞生，也即是说如果不是QNX系统的话，那就将安装路径设为 /opt/$${TARGET}/bin
# 然后的话就是最后一行代码，这段代码的意思就是如果设置的 target.path 路径不为空的话就将这个安装路径，那就将安装路径添加到安装清单清单里面来，也就是说，当我们执行 make install 这个命令的话，他就会把编译好的可执行程序复制到这个设置好的安装路径里面来
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    LearningQt.qrc
