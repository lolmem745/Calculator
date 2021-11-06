/********************************************************************************
** Form generated from reading UI file 'maincalc.ui'
**
** Created: Sat 6. Nov 11:32:57 2021
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCALC_H
#define UI_MAINCALC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainCalc
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Plus;
    QLabel *label;
    QPushButton *pushButton_Equal;
    QLabel *label_Btw;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Minus;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_Divide;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_BackSpace;

    void setupUi(QWidget *MainCalc)
    {
        if (MainCalc->objectName().isEmpty())
            MainCalc->setObjectName(QString::fromUtf8("MainCalc"));
        MainCalc->resize(280, 370);
        pushButton = new QPushButton(MainCalc);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(12, 160, 51, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(MainCalc);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(72, 160, 51, 41));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(MainCalc);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(132, 160, 51, 41));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(MainCalc);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(12, 210, 51, 41));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(MainCalc);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(72, 210, 51, 41));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(MainCalc);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(132, 210, 51, 41));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(MainCalc);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(12, 260, 51, 41));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(MainCalc);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(72, 260, 51, 41));
        pushButton_8->setFont(font);
        pushButton_9 = new QPushButton(MainCalc);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(132, 260, 51, 41));
        pushButton_9->setFont(font);
        pushButton_Plus = new QPushButton(MainCalc);
        pushButton_Plus->setObjectName(QString::fromUtf8("pushButton_Plus"));
        pushButton_Plus->setGeometry(QRect(222, 120, 41, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        pushButton_Plus->setFont(font1);
        pushButton_Plus->setStyleSheet(QString::fromUtf8("font: 75 16pt \"MS Shell Dlg 2\";"));
        label = new QLabel(MainCalc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(12, 60, 250, 40));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label->setPalette(palette);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background: rgb(255,255,255); border: rgb(0,0,0)"));
        label->setMargin(5);
        pushButton_Equal = new QPushButton(MainCalc);
        pushButton_Equal->setObjectName(QString::fromUtf8("pushButton_Equal"));
        pushButton_Equal->setGeometry(QRect(182, 320, 81, 41));
        pushButton_Equal->setStyleSheet(QString::fromUtf8("font: 75 16pt \"MS Shell Dlg 2\";"));
        label_Btw = new QLabel(MainCalc);
        label_Btw->setObjectName(QString::fromUtf8("label_Btw"));
        label_Btw->setGeometry(QRect(47, 10, 201, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_Btw->setFont(font2);
        pushButton_0 = new QPushButton(MainCalc);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(12, 310, 111, 41));
        pushButton_0->setFont(font);
        pushButton_Minus = new QPushButton(MainCalc);
        pushButton_Minus->setObjectName(QString::fromUtf8("pushButton_Minus"));
        pushButton_Minus->setGeometry(QRect(222, 170, 41, 41));
        pushButton_Minus->setFont(font);
        line = new QFrame(MainCalc);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(12, 85, 250, 31));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(MainCalc);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-8, 60, 41, 41));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(MainCalc);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(252, 60, 21, 41));
        QFont font3;
        font3.setStyleStrategy(QFont::PreferDefault);
        line_3->setFont(font3);
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::VLine);
        line_4 = new QFrame(MainCalc);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(12, 40, 250, 41));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::HLine);
        pushButton_Multiply = new QPushButton(MainCalc);
        pushButton_Multiply->setObjectName(QString::fromUtf8("pushButton_Multiply"));
        pushButton_Multiply->setGeometry(QRect(222, 220, 41, 41));
        pushButton_Multiply->setFont(font);
        pushButton_Divide = new QPushButton(MainCalc);
        pushButton_Divide->setObjectName(QString::fromUtf8("pushButton_Divide"));
        pushButton_Divide->setGeometry(QRect(222, 270, 41, 41));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_Divide->setFont(font4);
        pushButton_Clear = new QPushButton(MainCalc);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(12, 120, 83, 31));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_Clear->setFont(font5);
        pushButton_BackSpace = new QPushButton(MainCalc);
        pushButton_BackSpace->setObjectName(QString::fromUtf8("pushButton_BackSpace"));
        pushButton_BackSpace->setGeometry(QRect(100, 120, 83, 31));
        QFont font6;
        font6.setPointSize(16);
        pushButton_BackSpace->setFont(font6);

        retranslateUi(MainCalc);

        QMetaObject::connectSlotsByName(MainCalc);
    } // setupUi

    void retranslateUi(QWidget *MainCalc)
    {
        MainCalc->setWindowTitle(QApplication::translate("MainCalc", "MainCalc", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainCalc", "1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainCalc", "2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainCalc", "3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainCalc", "4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainCalc", "5", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainCalc", "6", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainCalc", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainCalc", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainCalc", "9", 0, QApplication::UnicodeUTF8));
        pushButton_Plus->setText(QApplication::translate("MainCalc", "+", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainCalc", "0", 0, QApplication::UnicodeUTF8));
        pushButton_Equal->setText(QApplication::translate("MainCalc", "=", 0, QApplication::UnicodeUTF8));
        label_Btw->setText(QString());
        pushButton_0->setText(QApplication::translate("MainCalc", "0", 0, QApplication::UnicodeUTF8));
        pushButton_Minus->setText(QApplication::translate("MainCalc", "-", 0, QApplication::UnicodeUTF8));
        pushButton_Multiply->setText(QApplication::translate("MainCalc", "*", 0, QApplication::UnicodeUTF8));
        pushButton_Divide->setText(QApplication::translate("MainCalc", "/", 0, QApplication::UnicodeUTF8));
        pushButton_Clear->setText(QApplication::translate("MainCalc", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton_BackSpace->setText(QApplication::translate("MainCalc", "<--", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainCalc: public Ui_MainCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCALC_H
