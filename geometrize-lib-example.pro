include($$PWD/lib/geometrize/geometrize/geometrize.pri)

CONFIG -= qt
CONFIG += warn_on console c++11

TARGET = geometrize_lib_example

HEADERS += lib/args/args.hxx \
           lib/stb/stb_image.h \
           lib/stb/stb_image_write.h

SOURCES += main.cpp

win32-g++ {
    # Mingw static linker flags so we don't have to include dlls
    # Should avoid library dependencies with libstdc++-6.dll etc
    QMAKE_LFLAGS = -static-libgcc -static-libstdc++
}