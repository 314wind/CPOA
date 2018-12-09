QT += quick widgets
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Refer to the documentation for the
# deprecated API to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    model/carte.cpp \
    model/erreur.cpp \
    model/gestionnairecartes.cpp \
    model/gestionnairepaquets.cpp \
<<<<<<< Updated upstream
=======
    model/main.cpp \
>>>>>>> Stashed changes
    model/paquet.cpp \
    model/partie.cpp \
    model/profil.cpp \
    model/singletonecrans.cpp \
<<<<<<< Updated upstream
    main.cpp \
    mainwindow.cpp \
    model/carte.cpp \
    model/erreur.cpp \
    model/gestionnairecartes.cpp \
    model/gestionnairepaquets.cpp \
    model/paquet.cpp \
    model/partie.cpp \
    model/profil.cpp \
    model/singletonecrans.cpp \
    main.cpp \
    mainwindow.cpp
=======
    graphics/home.cpp \
    mainwindow.cpp \
    graphics/connexion.cpp
>>>>>>> Stashed changes

RESOURCES += qml.qrc \
    qml.qrc \
    qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
<<<<<<< Updated upstream
    app.pro \
    app.pro \
=======
>>>>>>> Stashed changes
    app.pro

DISTFILES += \
    qtquickcontrols2.conf \
    main.qml \
    app.pro.user \
    HomeForm.ui.qml \
    qtquickcontrols2.conf \
    Home.qml \
    main.qml

HEADERS += \
    model/carte.h \
    model/erreur.h \
    model/gestionnairecartes.h \
    model/gestionnairepaquets.h \
    model/paquet.h \
    model/partie.h \
    model/profil.h \
    model/singletonecrans.h \
<<<<<<< Updated upstream
    mainwindow.h \
    model/carte.h \
    model/erreur.h \
    model/gestionnairecartes.h \
    model/gestionnairepaquets.h \
    model/paquet.h \
    model/partie.h \
    model/profil.h \
    model/singletonecrans.h \
    mainwindow.h

FORMS += \
    e_acceuil.ui \
    mainwindow.ui
=======
    graphics/home.h \
    mainwindow.h \
    graphics/connexion.h

FORMS += \
    graphics/home.ui \
    mainwindow.ui \
    graphics/connexion.ui
>>>>>>> Stashed changes
