include($$PWD/lib/geometrize/geometrize/geometrize.pri)

CONFIG += warn_on console c++11

HEADERS += lib/args/args.hxx \
           lib/stb/stb_image.h \
           lib/stb/stb_image_write.h

SOURCES += main.cpp
