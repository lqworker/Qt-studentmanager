/********************************************************************************
** Form generated from reading UI file 'dormmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DORMMANAGE_H
#define UI_DORMMANAGE_H

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

class Ui_dormmanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *dorm_inputlineEdit;
    QLabel *label_3;
    QLineEdit *dormqingshi_numlineEdit;
    QLabel *label_4;
    QLineEdit *dorm_outIDlineEdit;
    QLabel *label_5;
    QLineEdit *dorm_namelineEdit;
    QLabel *label_6;
    QLineEdit *dorm_sexlineEdit;
    QLineEdit *dorm_bednumlineEdit;
    QLabel *label_7;
    QPushButton *dorm_queryButton;
    QPushButton *dorm_addButton;
    QPushButton *dorm_deleteButton;
    QPushButton *updateButton;
    QPushButton *dorm_backButton;
    QPushButton *see_all_dorm_Button;

    void setupUi(QWidget *dormmanage)
    {
        if (dormmanage->objectName().isEmpty())
            dormmanage->setObjectName(QStringLiteral("dormmanage"));
        dormmanage->resize(559, 484);
        label = new QLabel(dormmanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 30, 221, 31));
        label_2 = new QLabel(dormmanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 131, 20));
        dorm_inputlineEdit = new QLineEdit(dormmanage);
        dorm_inputlineEdit->setObjectName(QStringLiteral("dorm_inputlineEdit"));
        dorm_inputlineEdit->setGeometry(QRect(170, 110, 113, 20));
        label_3 = new QLabel(dormmanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 170, 54, 20));
        dormqingshi_numlineEdit = new QLineEdit(dormmanage);
        dormqingshi_numlineEdit->setObjectName(QStringLiteral("dormqingshi_numlineEdit"));
        dormqingshi_numlineEdit->setGeometry(QRect(130, 170, 113, 20));
        label_4 = new QLabel(dormmanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 220, 41, 16));
        dorm_outIDlineEdit = new QLineEdit(dormmanage);
        dorm_outIDlineEdit->setObjectName(QStringLiteral("dorm_outIDlineEdit"));
        dorm_outIDlineEdit->setGeometry(QRect(130, 220, 113, 20));
        label_5 = new QLabel(dormmanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 270, 41, 16));
        dorm_namelineEdit = new QLineEdit(dormmanage);
        dorm_namelineEdit->setObjectName(QStringLiteral("dorm_namelineEdit"));
        dorm_namelineEdit->setGeometry(QRect(130, 270, 113, 20));
        label_6 = new QLabel(dormmanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 320, 31, 16));
        dorm_sexlineEdit = new QLineEdit(dormmanage);
        dorm_sexlineEdit->setObjectName(QStringLiteral("dorm_sexlineEdit"));
        dorm_sexlineEdit->setGeometry(QRect(130, 320, 113, 20));
        dorm_bednumlineEdit = new QLineEdit(dormmanage);
        dorm_bednumlineEdit->setObjectName(QStringLiteral("dorm_bednumlineEdit"));
        dorm_bednumlineEdit->setGeometry(QRect(130, 370, 113, 20));
        label_7 = new QLabel(dormmanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 370, 31, 16));
        dorm_queryButton = new QPushButton(dormmanage);
        dorm_queryButton->setObjectName(QStringLiteral("dorm_queryButton"));
        dorm_queryButton->setGeometry(QRect(370, 110, 75, 23));
        dorm_addButton = new QPushButton(dormmanage);
        dorm_addButton->setObjectName(QStringLiteral("dorm_addButton"));
        dorm_addButton->setGeometry(QRect(370, 260, 75, 23));
        dorm_deleteButton = new QPushButton(dormmanage);
        dorm_deleteButton->setObjectName(QStringLiteral("dorm_deleteButton"));
        dorm_deleteButton->setGeometry(QRect(370, 300, 75, 23));
        updateButton = new QPushButton(dormmanage);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(370, 340, 75, 23));
        dorm_backButton = new QPushButton(dormmanage);
        dorm_backButton->setObjectName(QStringLiteral("dorm_backButton"));
        dorm_backButton->setGeometry(QRect(370, 380, 75, 23));
        see_all_dorm_Button = new QPushButton(dormmanage);
        see_all_dorm_Button->setObjectName(QStringLiteral("see_all_dorm_Button"));
        see_all_dorm_Button->setGeometry(QRect(310, 430, 211, 23));

        retranslateUi(dormmanage);

        QMetaObject::connectSlotsByName(dormmanage);
    } // setupUi

    void retranslateUi(QWidget *dormmanage)
    {
        dormmanage->setWindowTitle(QApplication::translate("dormmanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("dormmanage", "\345\255\246\347\224\237\347\232\204\344\275\217\345\256\277\346\203\205\345\206\265", Q_NULLPTR));
        label_2->setText(QApplication::translate("dormmanage", "\350\257\267\350\276\223\345\205\245\344\275\240\350\246\201\346\237\245\346\211\276\347\232\204\345\255\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("dormmanage", "\345\257\235\345\256\244\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("dormmanage", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("dormmanage", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("dormmanage", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("dormmanage", "\345\272\212\344\275\215\357\274\232", Q_NULLPTR));
        dorm_queryButton->setText(QApplication::translate("dormmanage", "\346\220\234\347\264\242", Q_NULLPTR));
        dorm_addButton->setText(QApplication::translate("dormmanage", "\346\267\273\345\212\240", Q_NULLPTR));
        dorm_deleteButton->setText(QApplication::translate("dormmanage", "\345\210\240\351\231\244", Q_NULLPTR));
        updateButton->setText(QApplication::translate("dormmanage", "\345\210\267\346\226\260", Q_NULLPTR));
        dorm_backButton->setText(QApplication::translate("dormmanage", "\350\277\224\345\233\236", Q_NULLPTR));
        see_all_dorm_Button->setText(QApplication::translate("dormmanage", "\346\237\245\347\234\213\346\211\200\346\234\211\345\255\246\347\224\237\347\232\204\344\275\217\345\256\277", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dormmanage: public Ui_dormmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DORMMANAGE_H
