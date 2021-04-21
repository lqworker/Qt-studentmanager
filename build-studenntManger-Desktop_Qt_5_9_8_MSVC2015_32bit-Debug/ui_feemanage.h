/********************************************************************************
** Form generated from reading UI file 'feemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEMANAGE_H
#define UI_FEEMANAGE_H

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

class Ui_feemanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *fee_IDlineEdit;
    QLineEdit *fee_namelineEdit;
    QLineEdit *fee_majorlineEdit;
    QLineEdit *fee_banjilineEdit;
    QLineEdit *fee_termlineEdit;
    QLineEdit *fee_feelineEdit;
    QLineEdit *fee_arrearage_lineEdit;
    QPushButton *fee_querypushButton;
    QPushButton *fee_addpushButton;
    QPushButton *fee_deletepushButton;
    QPushButton *fee_updatepushButton;
    QPushButton *fee_backpushButton;

    void setupUi(QWidget *feemanage)
    {
        if (feemanage->objectName().isEmpty())
            feemanage->setObjectName(QStringLiteral("feemanage"));
        feemanage->resize(538, 459);
        label = new QLabel(feemanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 181, 41));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        label_2 = new QLabel(feemanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 80, 41, 16));
        label_3 = new QLabel(feemanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 120, 41, 16));
        label_4 = new QLabel(feemanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 160, 31, 16));
        label_5 = new QLabel(feemanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 200, 31, 16));
        label_6 = new QLabel(feemanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 240, 31, 16));
        label_7 = new QLabel(feemanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 330, 31, 16));
        label_8 = new QLabel(feemanage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 330, 54, 12));
        fee_IDlineEdit = new QLineEdit(feemanage);
        fee_IDlineEdit->setObjectName(QStringLiteral("fee_IDlineEdit"));
        fee_IDlineEdit->setGeometry(QRect(200, 80, 121, 20));
        fee_namelineEdit = new QLineEdit(feemanage);
        fee_namelineEdit->setObjectName(QStringLiteral("fee_namelineEdit"));
        fee_namelineEdit->setGeometry(QRect(200, 120, 121, 20));
        fee_majorlineEdit = new QLineEdit(feemanage);
        fee_majorlineEdit->setObjectName(QStringLiteral("fee_majorlineEdit"));
        fee_majorlineEdit->setGeometry(QRect(200, 160, 121, 20));
        fee_banjilineEdit = new QLineEdit(feemanage);
        fee_banjilineEdit->setObjectName(QStringLiteral("fee_banjilineEdit"));
        fee_banjilineEdit->setGeometry(QRect(200, 200, 121, 20));
        fee_termlineEdit = new QLineEdit(feemanage);
        fee_termlineEdit->setObjectName(QStringLiteral("fee_termlineEdit"));
        fee_termlineEdit->setGeometry(QRect(200, 240, 121, 20));
        fee_feelineEdit = new QLineEdit(feemanage);
        fee_feelineEdit->setObjectName(QStringLiteral("fee_feelineEdit"));
        fee_feelineEdit->setGeometry(QRect(130, 330, 113, 20));
        fee_arrearage_lineEdit = new QLineEdit(feemanage);
        fee_arrearage_lineEdit->setObjectName(QStringLiteral("fee_arrearage_lineEdit"));
        fee_arrearage_lineEdit->setGeometry(QRect(360, 330, 113, 20));
        fee_querypushButton = new QPushButton(feemanage);
        fee_querypushButton->setObjectName(QStringLiteral("fee_querypushButton"));
        fee_querypushButton->setGeometry(QRect(220, 280, 75, 23));
        fee_addpushButton = new QPushButton(feemanage);
        fee_addpushButton->setObjectName(QStringLiteral("fee_addpushButton"));
        fee_addpushButton->setGeometry(QRect(50, 390, 75, 23));
        fee_deletepushButton = new QPushButton(feemanage);
        fee_deletepushButton->setObjectName(QStringLiteral("fee_deletepushButton"));
        fee_deletepushButton->setGeometry(QRect(160, 390, 75, 23));
        fee_updatepushButton = new QPushButton(feemanage);
        fee_updatepushButton->setObjectName(QStringLiteral("fee_updatepushButton"));
        fee_updatepushButton->setGeometry(QRect(270, 390, 75, 23));
        fee_backpushButton = new QPushButton(feemanage);
        fee_backpushButton->setObjectName(QStringLiteral("fee_backpushButton"));
        fee_backpushButton->setGeometry(QRect(370, 390, 75, 23));

        retranslateUi(feemanage);

        QMetaObject::connectSlotsByName(feemanage);
    } // setupUi

    void retranslateUi(QWidget *feemanage)
    {
        feemanage->setWindowTitle(QApplication::translate("feemanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("feemanage", "\347\274\264\350\264\271\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("feemanage", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("feemanage", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("feemanage", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("feemanage", "\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("feemanage", "\345\255\246\346\234\237\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("feemanage", "\345\255\246\350\264\271\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("feemanage", "\346\254\240\350\264\271\346\203\205\345\206\265\357\274\232", Q_NULLPTR));
        fee_querypushButton->setText(QApplication::translate("feemanage", "\346\237\245\350\257\242", Q_NULLPTR));
        fee_addpushButton->setText(QApplication::translate("feemanage", "\346\267\273\345\212\240", Q_NULLPTR));
        fee_deletepushButton->setText(QApplication::translate("feemanage", "\345\210\240\351\231\244", Q_NULLPTR));
        fee_updatepushButton->setText(QApplication::translate("feemanage", "\346\233\264\346\224\271", Q_NULLPTR));
        fee_backpushButton->setText(QApplication::translate("feemanage", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class feemanage: public Ui_feemanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEMANAGE_H
