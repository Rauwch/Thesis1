TEMPLATE = app

QT += 3dcore 3drender 3dinput 3dquick qml quick
CONFIG += c++11

SOURCES += main.cpp \
    window.cpp \
    linker.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    window.h \
    linker.h

DISTFILES +=
