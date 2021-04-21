/********************************************************************************
** Form generated from reading UI file 'stuinformanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUINFORMANAGE_H
#define UI_STUINFORMANAGE_H

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

class Ui_stuinformanage
{
public:
    QLabel *label;
    QPushButton *infor_addButton;
    QLabel *label_2;
    QLineEdit *infor_input_IDlineEdit;
    QPushButton *infor_querypushButton;
    QLabel *label_3;
    QLineEdit *infor_outputlineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *infor_namelineEdit;
    QLineEdit *infor_sexlineEdit;
    QLineEdit *infor_agelineEdit;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *infor_classlineEdit;
    QLineEdit *infor_majorlineEdit;
    QLineEdit *infor_adresslineEdit;
    QLineEdit *infor_phonenumlineEdit;
    QPushButton *infor_deletepushButton;
    QPushButton *infor_updatepushButton;
    QPushButton *infor_backpushButton;
    QPushButton *infor_see_inforpushButton;

    void setupUi(QWidget *stuinformanage)
    {
        if (stuinformanage->objectName().isEmpty())
            stuinformanage->setObjectName(QStringLiteral("stuinformanage"));
        stuinformanage->resize(648, 394);
        label = new QLabel(stuinformanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 131, 20));
        infor_addButton = new QPushButton(stuinformanage);
        infor_addButton->setObjectName(QStringLiteral("infor_addButton"));
        infor_addButton->setGeometry(QRect(40, 330, 61, 23));
        label_2 = new QLabel(stuinformanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 10, 181, 31));
        label_2->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        infor_input_IDlineEdit = new QLineEdit(stuinformanage);
        infor_input_IDlineEdit->setObjectName(QStringLiteral("infor_input_IDlineEdit"));
        infor_input_IDlineEdit->setGeometry(QRect(190, 70, 141, 20));
        infor_querypushButton = new QPushButton(stuinformanage);
        infor_querypushButton->setObjectName(QStringLiteral("infor_querypushButton"));
        infor_querypushButton->setGeometry(QRect(360, 70, 51, 23));
        label_3 = new QLabel(stuinformanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 130, 31, 20));
        infor_outputlineEdit = new QLineEdit(stuinformanage);
        infor_outputlineEdit->setObjectName(QStringLiteral("infor_outputlineEdit"));
        infor_outputlineEdit->setGeometry(QRect(120, 130, 141, 20));
        label_4 = new QLabel(stuinformanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 180, 31, 16));
        label_5 = new QLabel(stuinformanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 230, 41, 16));
        label_6 = new QLabel(stuinformanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 270, 31, 16));
        infor_namelineEdit = new QLineEdit(stuinformanage);
        infor_namelineEdit->setObjectName(QStringLiteral("infor_namelineEdit"));
        infor_namelineEdit->setGeometry(QRect(120, 180, 141, 20));
        infor_sexlineEdit = new QLineEdit(stuinformanage);
        infor_sexlineEdit->setObjectName(QStringLiteral("infor_sexlineEdit"));
        infor_sexlineEdit->setGeometry(QRect(120, 230, 141, 20));
        infor_agelineEdit = new QLineEdit(stuinformanage);
        infor_agelineEdit->setObjectName(QStringLiteral("infor_agelineEdit"));
        infor_agelineEdit->setGeometry(QRect(120, 270, 141, 20));
        label_7 = new QLabel(stuinformanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(350, 130, 31, 16));
        label_8 = new QLabel(stuinformanage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(350, 180, 31, 16));
        label_9 = new QLabel(stuinformanage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(330, 230, 61, 20));
        label_10 = new QLabel(stuinformanage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(340, 270, 61, 20));
        infor_classlineEdit = new QLineEdit(stuinformanage);
        infor_classlineEdit->setObjectName(QStringLiteral("infor_classlineEdit"));
        infor_classlineEdit->setGeometry(QRect(410, 130, 131, 20));
        infor_majorlineEdit = new QLineEdit(stuinformanage);
        infor_majorlineEdit->setObjectName(QStringLiteral("infor_majorlineEdit"));
        infor_majorlineEdit->setGeometry(QRect(410, 180, 131, 20));
        infor_adresslineEdit = new QLineEdit(stuinformanage);
        infor_adresslineEdit->setObjectName(QStringLiteral("infor_adresslineEdit"));
        infor_adresslineEdit->setGeometry(QRect(410, 230, 131, 20));
        infor_phonenumlineEdit = new QLineEdit(stuinformanage);
        infor_phonenumlineEdit->setObjectName(QStringLiteral("infor_phonenumlineEdit"));
        infor_phonenumlineEdit->setGeometry(QRect(410, 270, 131, 20));
        infor_deletepushButton = new QPushButton(stuinformanage);
        infor_deletepushButton->setObjectName(QStringLiteral("infor_deletepushButton"));
        infor_deletepushButton->setGeometry(QRect(130, 330, 61, 23));
        infor_updatepushButton = new QPushButton(stuinformanage);
        infor_updatepushButton->setObjectName(QStringLiteral("infor_updatepushButton"));
        infor_updatepushButton->setGeometry(QRect(250, 330, 61, 23));
        infor_backpushButton = new QPushButton(stuinformanage);
        infor_backpushButton->setObjectName(QStringLiteral("infor_backpushButton"));
        infor_backpushButton->setGeometry(QRect(330, 330, 61, 23));
        infor_see_inforpushButton = new QPushButton(stuinformanage);
        infor_see_inforpushButton->setObjectName(QStringLiteral("infor_see_inforpushButton"));
        infor_see_inforpushButton->setGeometry(QRect(430, 330, 151, 23));

        retranslateUi(stuinformanage);

        QMetaObject::connectSlotsByName(stuinformanage);
    } // setupUi

    void retranslateUi(QWidget *stuinformanage)
    {
        stuinformanage->setWindowTitle(QApplication::translate("stuinformanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("stuinformanage", "\350\257\267\350\276\223\345\205\245\344\275\240\350\246\201\346\237\245\346\211\276\347\232\204\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        infor_addButton->setText(QApplication::translate("stuinformanage", "\346\267\273\345\212\240", Q_NULLPTR));
        label_2->setText(QApplication::translate("stuinformanage", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        infor_querypushButton->setText(QApplication::translate("stuinformanage", "\346\237\245\346\211\276", Q_NULLPTR));
        label_3->setText(QApplication::translate("stuinformanage", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("stuinformanage", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("stuinformanage", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("stuinformanage", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("stuinformanage", "\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("stuinformanage", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("stuinformanage", "\345\256\266\345\272\255\344\275\217\345\235\200\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("stuinformanage", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", Q_NULLPTR));
        infor_deletepushButton->setText(QApplication::translate("stuinformanage", "\345\210\240\351\231\244", Q_NULLPTR));
        infor_updatepushButton->setText(QApplication::translate("stuinformanage", "\346\233\264\346\226\260", Q_NULLPTR));
        infor_backpushButton->setText(QApplication::translate("stuinformanage", "\350\277\224\345\233\236", Q_NULLPTR));
        infor_see_inforpushButton->setText(QApplication::translate("stuinformanage", "\346\237\245\347\234\213\346\211\200\346\234\211\345\255\246\347\224\237\347\232\204\344\277\241\346\201\257\346\203\205\345\206\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stuinformanage: public Ui_stuinformanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUINFORMANAGE_H
