/********************************************************************************
** Form generated from reading UI file 'gstvideo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSTVIDEO_H
#define UI_GSTVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gstvideo
{
public:
    QSpinBox *spinBox;
    QSlider *slider5;
    QLabel *label_6;
    QListWidget *videoList;
    QListWidget *audioList;
    QLabel *label_7;
    QLabel *label_8;
    QScrollArea *area;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *widget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QSlider *slider2;
    QProgressBar *progressBar2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *slider4;
    QProgressBar *progressBar4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QSlider *slider1;
    QProgressBar *progressBar1;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QToolButton *bstop;
    QComboBox *comboBox;
    QToolButton *bplay;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_6;
    QSlider *slider3;
    QProgressBar *progressBar3;

    void setupUi(QWidget *gstvideo)
    {
        if (gstvideo->objectName().isEmpty())
            gstvideo->setObjectName(QStringLiteral("gstvideo"));
        gstvideo->resize(660, 694);
        gstvideo->setMinimumSize(QSize(660, 0));
        gstvideo->setMaximumSize(QSize(660, 16777215));
        spinBox = new QSpinBox(gstvideo);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(350, 770, 44, 25));
        slider5 = new QSlider(gstvideo);
        slider5->setObjectName(QStringLiteral("slider5"));
        slider5->setGeometry(QRect(20, 610, 171, 20));
        slider5->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(gstvideo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 440, 59, 18));
        videoList = new QListWidget(gstvideo);
        videoList->setObjectName(QStringLiteral("videoList"));
        videoList->setGeometry(QRect(200, 590, 151, 91));
        audioList = new QListWidget(gstvideo);
        audioList->setObjectName(QStringLiteral("audioList"));
        audioList->setGeometry(QRect(360, 590, 151, 91));
        label_7 = new QLabel(gstvideo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 570, 91, 18));
        label_8 = new QLabel(gstvideo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 570, 91, 18));
        area = new QScrollArea(gstvideo);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(-10, -10, 681, 431));
        area->setMinimumSize(QSize(681, 431));
        area->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 677, 427));
        widget = new QWidget(scrollAreaWidgetContents_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1920, 431));
        widget->setMinimumSize(QSize(681, 431));
        widget->setMaximumSize(QSize(1920, 1080));
        area->setWidget(scrollAreaWidgetContents_2);
        widget1 = new QWidget(gstvideo);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 530, 183, 28));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        slider2 = new QSlider(widget1);
        slider2->setObjectName(QStringLiteral("slider2"));
        slider2->setMaximumSize(QSize(160, 16777215));
        slider2->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(slider2);

        progressBar2 = new QProgressBar(widget1);
        progressBar2->setObjectName(QStringLiteral("progressBar2"));
        progressBar2->setMaximumSize(QSize(118, 16777215));
        progressBar2->setValue(24);

        horizontalLayout_4->addWidget(progressBar2);

        widget2 = new QWidget(gstvideo);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(470, 530, 183, 28));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        slider4 = new QSlider(widget2);
        slider4->setObjectName(QStringLiteral("slider4"));
        slider4->setMaximumSize(QSize(160, 16777215));
        slider4->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider4);

        progressBar4 = new QProgressBar(widget2);
        progressBar4->setObjectName(QStringLiteral("progressBar4"));
        progressBar4->setMaximumSize(QSize(118, 16777215));
        progressBar4->setValue(24);

        horizontalLayout_2->addWidget(progressBar4);

        label_3 = new QLabel(gstvideo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 580, 47, 18));
        label_4 = new QLabel(gstvideo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 440, 25, 18));
        pushButton = new QPushButton(gstvideo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 530, 87, 34));
        widget3 = new QWidget(gstvideo);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(20, 460, 183, 28));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        slider1 = new QSlider(widget3);
        slider1->setObjectName(QStringLiteral("slider1"));
        slider1->setMaximumSize(QSize(16777215, 27));
        slider1->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider1);

        progressBar1 = new QProgressBar(widget3);
        progressBar1->setObjectName(QStringLiteral("progressBar1"));
        progressBar1->setValue(24);

        horizontalLayout_3->addWidget(progressBar1);

        label_2 = new QLabel(gstvideo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 500, 66, 18));
        label_5 = new QLabel(gstvideo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 500, 64, 18));
        label = new QLabel(gstvideo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 440, 53, 18));
        bstop = new QToolButton(gstvideo);
        bstop->setObjectName(QStringLiteral("bstop"));
        bstop->setGeometry(QRect(230, 460, 81, 34));
        bstop->setMaximumSize(QSize(81, 16777215));
        comboBox = new QComboBox(gstvideo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(360, 460, 81, 32));
        bplay = new QToolButton(gstvideo);
        bplay->setObjectName(QStringLiteral("bplay"));
        bplay->setGeometry(QRect(230, 460, 81, 34));
        widget4 = new QWidget(gstvideo);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(470, 460, 225, 28));
        horizontalLayout_6 = new QHBoxLayout(widget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        slider3 = new QSlider(widget4);
        slider3->setObjectName(QStringLiteral("slider3"));
        slider3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(slider3);

        progressBar3 = new QProgressBar(widget4);
        progressBar3->setObjectName(QStringLiteral("progressBar3"));
        progressBar3->setValue(24);

        horizontalLayout_6->addWidget(progressBar3);

        spinBox->raise();
        progressBar3->raise();
        slider3->raise();
        slider5->raise();
        slider5->raise();
        label_6->raise();
        videoList->raise();
        audioList->raise();
        label_7->raise();
        label_8->raise();
        area->raise();

        retranslateUi(gstvideo);

        QMetaObject::connectSlotsByName(gstvideo);
    } // setupUi

    void retranslateUi(QWidget *gstvideo)
    {
        gstvideo->setWindowTitle(QApplication::translate("gstvideo", "gstvideo", 0));
        label_6->setText(QApplication::translate("gstvideo", "Effects", 0));
        label_7->setText(QApplication::translate("gstvideo", "video sources", 0));
        label_8->setText(QApplication::translate("gstvideo", "audio sources", 0));
#ifndef QT_NO_WHATSTHIS
        slider2->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Brillo</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("gstvideo", "Volume", 0));
        label_4->setText(QApplication::translate("gstvideo", "Hue", 0));
        pushButton->setText(QApplication::translate("gstvideo", "new Source", 0));
#ifndef QT_NO_WHATSTHIS
        slider1->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Contraste</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("gstvideo", "Brightness", 0));
        label_5->setText(QApplication::translate("gstvideo", "Saturation", 0));
        label->setText(QApplication::translate("gstvideo", "Contrast", 0));
        bstop->setText(QApplication::translate("gstvideo", "Pause", 0));
#ifndef QT_NO_WHATSTHIS
        comboBox->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>efectos</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        bplay->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Play</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        bplay->setText(QApplication::translate("gstvideo", "Play", 0));
    } // retranslateUi

};

namespace Ui {
    class gstvideo: public Ui_gstvideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSTVIDEO_H
/********************************************************************************
** Form generated from reading UI file 'gstvideo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSTVIDEO_H
#define UI_GSTVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gstvideo
{
public:
    QSpinBox *spinBox;
    QSlider *slider5;
    QLabel *label_6;
    QListWidget *videoList;
    QListWidget *audioList;
    QLabel *label_7;
    QLabel *label_8;
    QScrollArea *area;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *widget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QSlider *slider2;
    QProgressBar *progressBar2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *slider4;
    QProgressBar *progressBar4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QSlider *slider1;
    QProgressBar *progressBar1;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QToolButton *bstop;
    QComboBox *comboBox;
    QToolButton *bplay;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_6;
    QSlider *slider3;
    QProgressBar *progressBar3;

    void setupUi(QWidget *gstvideo)
    {
        if (gstvideo->objectName().isEmpty())
            gstvideo->setObjectName(QStringLiteral("gstvideo"));
        gstvideo->resize(660, 694);
        gstvideo->setMinimumSize(QSize(660, 0));
        gstvideo->setMaximumSize(QSize(660, 16777215));
        spinBox = new QSpinBox(gstvideo);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(350, 770, 44, 25));
        slider5 = new QSlider(gstvideo);
        slider5->setObjectName(QStringLiteral("slider5"));
        slider5->setGeometry(QRect(20, 610, 171, 20));
        slider5->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(gstvideo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 440, 59, 18));
        videoList = new QListWidget(gstvideo);
        videoList->setObjectName(QStringLiteral("videoList"));
        videoList->setGeometry(QRect(200, 590, 151, 91));
        audioList = new QListWidget(gstvideo);
        audioList->setObjectName(QStringLiteral("audioList"));
        audioList->setGeometry(QRect(360, 590, 151, 91));
        label_7 = new QLabel(gstvideo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 570, 91, 18));
        label_8 = new QLabel(gstvideo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 570, 91, 18));
        area = new QScrollArea(gstvideo);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(-10, -10, 681, 431));
        area->setMinimumSize(QSize(681, 431));
        area->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 677, 427));
        widget = new QWidget(scrollAreaWidgetContents_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1920, 431));
        widget->setMinimumSize(QSize(681, 431));
        widget->setMaximumSize(QSize(1920, 1080));
        area->setWidget(scrollAreaWidgetContents_2);
        widget1 = new QWidget(gstvideo);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 530, 183, 28));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        slider2 = new QSlider(widget1);
        slider2->setObjectName(QStringLiteral("slider2"));
        slider2->setMaximumSize(QSize(160, 16777215));
        slider2->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(slider2);

        progressBar2 = new QProgressBar(widget1);
        progressBar2->setObjectName(QStringLiteral("progressBar2"));
        progressBar2->setMaximumSize(QSize(118, 16777215));
        progressBar2->setValue(24);

        horizontalLayout_4->addWidget(progressBar2);

        widget2 = new QWidget(gstvideo);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(470, 530, 183, 28));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        slider4 = new QSlider(widget2);
        slider4->setObjectName(QStringLiteral("slider4"));
        slider4->setMaximumSize(QSize(160, 16777215));
        slider4->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider4);

        progressBar4 = new QProgressBar(widget2);
        progressBar4->setObjectName(QStringLiteral("progressBar4"));
        progressBar4->setMaximumSize(QSize(118, 16777215));
        progressBar4->setValue(24);

        horizontalLayout_2->addWidget(progressBar4);

        label_3 = new QLabel(gstvideo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 580, 47, 18));
        label_4 = new QLabel(gstvideo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 440, 25, 18));
        pushButton = new QPushButton(gstvideo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 530, 87, 34));
        widget3 = new QWidget(gstvideo);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(20, 460, 183, 28));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        slider1 = new QSlider(widget3);
        slider1->setObjectName(QStringLiteral("slider1"));
        slider1->setMaximumSize(QSize(16777215, 27));
        slider1->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider1);

        progressBar1 = new QProgressBar(widget3);
        progressBar1->setObjectName(QStringLiteral("progressBar1"));
        progressBar1->setValue(24);

        horizontalLayout_3->addWidget(progressBar1);

        label_2 = new QLabel(gstvideo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 500, 66, 18));
        label_5 = new QLabel(gstvideo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 500, 64, 18));
        label = new QLabel(gstvideo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 440, 53, 18));
        bstop = new QToolButton(gstvideo);
        bstop->setObjectName(QStringLiteral("bstop"));
        bstop->setGeometry(QRect(230, 460, 81, 34));
        bstop->setMaximumSize(QSize(81, 16777215));
        comboBox = new QComboBox(gstvideo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(360, 460, 81, 32));
        bplay = new QToolButton(gstvideo);
        bplay->setObjectName(QStringLiteral("bplay"));
        bplay->setGeometry(QRect(230, 460, 81, 34));
        widget4 = new QWidget(gstvideo);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(470, 460, 225, 28));
        horizontalLayout_6 = new QHBoxLayout(widget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        slider3 = new QSlider(widget4);
        slider3->setObjectName(QStringLiteral("slider3"));
        slider3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(slider3);

        progressBar3 = new QProgressBar(widget4);
        progressBar3->setObjectName(QStringLiteral("progressBar3"));
        progressBar3->setValue(24);

        horizontalLayout_6->addWidget(progressBar3);

        spinBox->raise();
        progressBar3->raise();
        slider3->raise();
        slider5->raise();
        slider5->raise();
        label_6->raise();
        videoList->raise();
        audioList->raise();
        label_7->raise();
        label_8->raise();
        area->raise();

        retranslateUi(gstvideo);

        QMetaObject::connectSlotsByName(gstvideo);
    } // setupUi

    void retranslateUi(QWidget *gstvideo)
    {
        gstvideo->setWindowTitle(QApplication::translate("gstvideo", "gstvideo", 0));
        label_6->setText(QApplication::translate("gstvideo", "Effects", 0));
        label_7->setText(QApplication::translate("gstvideo", "video sources", 0));
        label_8->setText(QApplication::translate("gstvideo", "audio sources", 0));
#ifndef QT_NO_WHATSTHIS
        slider2->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Brillo</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("gstvideo", "Volume", 0));
        label_4->setText(QApplication::translate("gstvideo", "Hue", 0));
        pushButton->setText(QApplication::translate("gstvideo", "new Source", 0));
#ifndef QT_NO_WHATSTHIS
        slider1->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Contraste</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("gstvideo", "Brightness", 0));
        label_5->setText(QApplication::translate("gstvideo", "Saturation", 0));
        label->setText(QApplication::translate("gstvideo", "Contrast", 0));
        bstop->setText(QApplication::translate("gstvideo", "Pause", 0));
#ifndef QT_NO_WHATSTHIS
        comboBox->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>efectos</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        bplay->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Play</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        bplay->setText(QApplication::translate("gstvideo", "Play", 0));
    } // retranslateUi

};

namespace Ui {
    class gstvideo: public Ui_gstvideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSTVIDEO_H
/********************************************************************************
** Form generated from reading UI file 'gstvideo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSTVIDEO_H
#define UI_GSTVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gstvideo
{
public:
    QSpinBox *spinBox;
    QSlider *slider5;
    QLabel *label_6;
    QListWidget *videoList;
    QListWidget *audioList;
    QLabel *label_7;
    QLabel *label_8;
    QScrollArea *area;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *widget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QSlider *slider2;
    QProgressBar *progressBar2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *slider4;
    QProgressBar *progressBar4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QSlider *slider1;
    QProgressBar *progressBar1;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QToolButton *bstop;
    QComboBox *comboBox;
    QToolButton *bplay;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_6;
    QSlider *slider3;
    QProgressBar *progressBar3;

    void setupUi(QWidget *gstvideo)
    {
        if (gstvideo->objectName().isEmpty())
            gstvideo->setObjectName(QStringLiteral("gstvideo"));
        gstvideo->resize(660, 694);
        gstvideo->setMinimumSize(QSize(660, 0));
        gstvideo->setMaximumSize(QSize(660, 16777215));
        spinBox = new QSpinBox(gstvideo);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(350, 770, 44, 25));
        slider5 = new QSlider(gstvideo);
        slider5->setObjectName(QStringLiteral("slider5"));
        slider5->setGeometry(QRect(20, 610, 171, 20));
        slider5->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(gstvideo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 440, 59, 18));
        videoList = new QListWidget(gstvideo);
        videoList->setObjectName(QStringLiteral("videoList"));
        videoList->setGeometry(QRect(200, 590, 151, 91));
        audioList = new QListWidget(gstvideo);
        audioList->setObjectName(QStringLiteral("audioList"));
        audioList->setGeometry(QRect(360, 590, 151, 91));
        label_7 = new QLabel(gstvideo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 570, 91, 18));
        label_8 = new QLabel(gstvideo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 570, 91, 18));
        area = new QScrollArea(gstvideo);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(-10, -10, 681, 431));
        area->setMinimumSize(QSize(681, 431));
        area->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 677, 427));
        widget = new QWidget(scrollAreaWidgetContents_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1920, 431));
        widget->setMinimumSize(QSize(681, 431));
        widget->setMaximumSize(QSize(1920, 1080));
        area->setWidget(scrollAreaWidgetContents_2);
        widget1 = new QWidget(gstvideo);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 530, 183, 28));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        slider2 = new QSlider(widget1);
        slider2->setObjectName(QStringLiteral("slider2"));
        slider2->setMaximumSize(QSize(160, 16777215));
        slider2->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(slider2);

        progressBar2 = new QProgressBar(widget1);
        progressBar2->setObjectName(QStringLiteral("progressBar2"));
        progressBar2->setMaximumSize(QSize(118, 16777215));
        progressBar2->setValue(24);

        horizontalLayout_4->addWidget(progressBar2);

        widget2 = new QWidget(gstvideo);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(470, 530, 183, 28));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        slider4 = new QSlider(widget2);
        slider4->setObjectName(QStringLiteral("slider4"));
        slider4->setMaximumSize(QSize(160, 16777215));
        slider4->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider4);

        progressBar4 = new QProgressBar(widget2);
        progressBar4->setObjectName(QStringLiteral("progressBar4"));
        progressBar4->setMaximumSize(QSize(118, 16777215));
        progressBar4->setValue(24);

        horizontalLayout_2->addWidget(progressBar4);

        label_3 = new QLabel(gstvideo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 580, 47, 18));
        label_4 = new QLabel(gstvideo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 440, 25, 18));
        pushButton = new QPushButton(gstvideo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 530, 87, 34));
        widget3 = new QWidget(gstvideo);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(20, 460, 183, 28));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        slider1 = new QSlider(widget3);
        slider1->setObjectName(QStringLiteral("slider1"));
        slider1->setMaximumSize(QSize(16777215, 27));
        slider1->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider1);

        progressBar1 = new QProgressBar(widget3);
        progressBar1->setObjectName(QStringLiteral("progressBar1"));
        progressBar1->setValue(24);

        horizontalLayout_3->addWidget(progressBar1);

        label_2 = new QLabel(gstvideo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 500, 66, 18));
        label_5 = new QLabel(gstvideo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 500, 64, 18));
        label = new QLabel(gstvideo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 440, 53, 18));
        bstop = new QToolButton(gstvideo);
        bstop->setObjectName(QStringLiteral("bstop"));
        bstop->setGeometry(QRect(230, 460, 81, 34));
        bstop->setMaximumSize(QSize(81, 16777215));
        comboBox = new QComboBox(gstvideo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(360, 460, 81, 32));
        bplay = new QToolButton(gstvideo);
        bplay->setObjectName(QStringLiteral("bplay"));
        bplay->setGeometry(QRect(230, 460, 81, 34));
        widget4 = new QWidget(gstvideo);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(470, 460, 225, 28));
        horizontalLayout_6 = new QHBoxLayout(widget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        slider3 = new QSlider(widget4);
        slider3->setObjectName(QStringLiteral("slider3"));
        slider3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(slider3);

        progressBar3 = new QProgressBar(widget4);
        progressBar3->setObjectName(QStringLiteral("progressBar3"));
        progressBar3->setValue(24);

        horizontalLayout_6->addWidget(progressBar3);

        spinBox->raise();
        progressBar3->raise();
        slider3->raise();
        slider5->raise();
        slider5->raise();
        label_6->raise();
        videoList->raise();
        audioList->raise();
        label_7->raise();
        label_8->raise();
        area->raise();

        retranslateUi(gstvideo);

        QMetaObject::connectSlotsByName(gstvideo);
    } // setupUi

    void retranslateUi(QWidget *gstvideo)
    {
        gstvideo->setWindowTitle(QApplication::translate("gstvideo", "gstvideo", 0));
        label_6->setText(QApplication::translate("gstvideo", "Effects", 0));
        label_7->setText(QApplication::translate("gstvideo", "video sources", 0));
        label_8->setText(QApplication::translate("gstvideo", "audio sources", 0));
#ifndef QT_NO_WHATSTHIS
        slider2->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Brillo</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("gstvideo", "Volume", 0));
        label_4->setText(QApplication::translate("gstvideo", "Hue", 0));
        pushButton->setText(QApplication::translate("gstvideo", "new Source", 0));
#ifndef QT_NO_WHATSTHIS
        slider1->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Contraste</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("gstvideo", "Brightness", 0));
        label_5->setText(QApplication::translate("gstvideo", "Saturation", 0));
        label->setText(QApplication::translate("gstvideo", "Contrast", 0));
        bstop->setText(QApplication::translate("gstvideo", "Pause", 0));
#ifndef QT_NO_WHATSTHIS
        comboBox->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>efectos</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        bplay->setWhatsThis(QApplication::translate("gstvideo", "<html><head/><body><p>Play</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        bplay->setText(QApplication::translate("gstvideo", "Play", 0));
    } // retranslateUi

};

namespace Ui {
    class gstvideo: public Ui_gstvideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSTVIDEO_H
