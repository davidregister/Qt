!include( ../manual.pri ) {
    error( "Couldn't find the manual.pri file!" )
}

QT += 3dcore 3drender 3dinput 3dextras

SOURCES += \
    main.cpp \
    examplescene.cpp \
    boxentity.cpp

HEADERS += \
    examplescene.h \
    boxentity.h