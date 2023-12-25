QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../CustomWidget/qimagewidget.cpp \
    form1_1.cpp \
    form1_2.cpp \
    form2_1.cpp \
    form2_2.cpp \
    form2_3.cpp \
    form3_2.cpp \
    form3_3.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../CustomWidget/qimagewidget.h \
    form1_1.h \
    form1_2.h \
    form2_1.h \
    form2_2.h \
    form2_3.h \
    form3_2.h \
    form3_3.h \
    mainwindow.h

FORMS += \
    form1_1.ui \
    form1_2.ui \
    form2_1.ui \
    form2_2.ui \
    form2_3.ui \
    form3_2.ui \
    form3_3.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
