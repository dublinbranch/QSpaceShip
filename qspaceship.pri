HEADERS += \
	$$PWD/qdateship.h \
	$$PWD/qstringship.h

DISTFILES += /
	$$PWD/README.md

SOURCES += \
	$$PWD/implementation.cpp 

packagesExist(QtNetwork) {
    DEFINES += HAS_QT_NETWORK
	HEADERS += $$PWD/qhostaddress.h 
	SOURCES += $$PWD/qhostaddress.cpp 
}
