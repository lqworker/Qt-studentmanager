/********************************************************************************
** Form generated from reading UI file 'awardmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AWARDMANAGE_H
#define UI_AWARDMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_awardmanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *award_querypushButton;
    QLineEdit *award_inputIDlineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *outputIDlineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *classlineEdit;
    QLineEdit *majorlineEdit;
    QLineEdit *awardlineEdit;
    QLineEdit *punishlineEdit;
    QPushButton *award_addpushButton;
    QPushButton *award_deletepushButton;
    QPushButton *award_updatepushButton;
    QPushButton *award_backpushButton;

    void setupUi(QWidget *awardmanage)
    {
        if (awardmanage->objectName().isEmpty())
            awardmanage->setObjectName(QStringLiteral("awardmanage"));
        awardmanage->resize(662, 445);
        label = new QLabel(awardmanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 20, 251, 31));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        label_2 = new QLabel(awardmanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 70, 131, 20));
        award_querypushButton = new QPushButton(awardmanage);
        award_querypushButton->setObjectName(QStringLiteral("award_querypushButton"));
        award_querypushButton->setGeometry(QRect(430, 70, 75, 23));
        award_inputIDlineEdit = new QLineEdit(awardmanage);
        award_inputIDlineEdit->setObjectName(QStringLiteral("award_inputIDlineEdit"));
        award_inputIDlineEdit->setGeometry(QRect(220, 70, 151, 20));
        label_3 = new QLabel(awardmanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 130, 41, 20));
        label_4 = new QLabel(awardmanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 170, 31, 16));
        label_5 = new QLabel(awardmanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 210, 41, 16));
        label_6 = new QLabel(awardmanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 250, 41, 16));
        label_7 = new QLabel(awardmanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(93, 290, 61, 20));
        label_8 = new QLabel(awardmanage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 340, 61, 20));
        outputIDlineEdit = new QLineEdit(awardmanage);
        outputIDlineEdit->setObjectName(QStringLiteral("outputIDlineEdit"));
        outputIDlineEdit->setGeometry(QRect(160, 130, 161, 20));
        namelineEdit = new QLineEdit(awardmanage);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setGeometry(QRect(160, 170, 161, 20));
        classlineEdit = new QLineEdit(awardmanage);
        classlineEdit->setObjectName(QStringLiteral("classlineEdit"));
        classlineEdit->setGeometry(QRect(160, 210, 161, 20));
        majorlineEdit = new QLineEdit(awardmanage);
        majorlineEdit->setObjectName(QStringLiteral("majorlineEdit"));
        majorlineEdit->setGeometry(QRect(160, 250, 161, 20));
        awardlineEdit = new QLineEdit(awardmanage);
        awardlineEdit->setObjectName(QStringLiteral("awardlineEdit"));
        awardlineEdit->setGeometry(QRect(160, 290, 161, 20));
        punishlineEdit = new QLineEdit(awardmanage);
        punishlineEdit->setObjectName(QStringLiteral("punishlineEdit"));
        punishlineEdit->setGeometry(QRect(160, 340, 161, 20));
        award_addpushButton = new QPushButton(awardmanage);
        award_addpushButton->setObjectName(QStringLiteral("award_addpushButton"));
        award_addpushButton->setGeometry(QRect(80, 390, 75, 23));
        award_deletepushButton = new QPushButton(awardmanage);
        award_deletepushButton->setObjectName(QStringLiteral("award_deletepushButton"));
        award_deletepushButton->setGeometry(QRect(220, 390, 75, 23));
        award_updatepushButton = new QPushButton(awardmanage);
        award_updatepushButton->setObjectName(QStringLiteral("award_updatepushButton"));
        award_updatepushButton->setGeometry(QRect(360, 390, 75, 23));
        award_backpushButton = new QPushButton(awardmanage);
        award_backpushButton->setObjectName(QStringLiteral("award_backpushButton"));
        award_backpushButton->setGeometry(QRect(500, 390, 75, 23));

        retranslateUi(awardmanage);

        QMetaObject::connectSlotsByName(awardmanage);
    } // setupUi

    void retranslateUi(QWidget *awardmanage)
    {
        awardmanage->setWindowTitle(QApplication::translate("awardmanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("awardmanage", "\345\255\246\347\224\237\345\245\226\346\203\251\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("awardmanage", "\350\257\267\350\276\223\345\205\245\344\275\240\350\246\201\346\237\245\346\211\276\347\232\204\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        award_querypushButton->setText(QApplication::translate("awardmanage", "\346\237\245\350\257\242", Q_NULLPTR));
        label_3->setText(QApplication::translate("awardmanage", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("awardmanage", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("awardmanage", "\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("awardmanage", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("awardmanage", "\345\245\226\345\212\261\346\203\205\345\206\265\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("awardmanage", "\346\203\251\347\275\232\346\203\205\345\206\265\357\274\232", Q_NULLPTR));
        award_addpushButton->setText(QApplication::translate("awardmanage", "\346\267\273\345\212\240", Q_NULLPTR));
        award_deletepushButton->setText(QApplication::translate("awardmanage", "\345\210\240\351\231\244", Q_NULLPTR));
        award_updatepushButton->setText(QApplication::translate("awardmanage", "\346\233\264\346\226\260", Q_NULLPTR));
        award_backpushButton->setText(QApplication::translate("awardmanage", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class awardmanage: public Ui_awardmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AWARDMANAGE_H
