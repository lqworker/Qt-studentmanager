/********************************************************************************
** Form generated from reading UI file 'awardfind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AWARDFIND_H
#define UI_AWARDFIND_H

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

class Ui_awardfind
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
    QLineEdit *stu_award_Input_IDlineEdit;
    QLineEdit *stu_award_out_IDlineEdit;
    QLineEdit *stu_award_namelineEdit;
    QLineEdit *stu_award_class_lineEdit;
    QLineEdit *stu_award_majorlineEdit;
    QLineEdit *stu_award_awardlineEdit;
    QLineEdit *stu_award_puishlineEdit;
    QPushButton *stu_award_querypushButton;
    QPushButton *stu_award_backpushButton;

    void setupUi(QWidget *awardfind)
    {
        if (awardfind->objectName().isEmpty())
            awardfind->setObjectName(QStringLiteral("awardfind"));
        awardfind->resize(586, 430);
        label = new QLabel(awardfind);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(163, 20, 211, 31));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Arial\";"));
        label_2 = new QLabel(awardfind);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 70, 141, 20));
        label_3 = new QLabel(awardfind);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 100, 54, 12));
        label_4 = new QLabel(awardfind);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 140, 54, 12));
        label_5 = new QLabel(awardfind);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 180, 41, 16));
        label_6 = new QLabel(awardfind);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 220, 41, 20));
        label_7 = new QLabel(awardfind);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 260, 54, 12));
        label_8 = new QLabel(awardfind);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 300, 71, 20));
        stu_award_Input_IDlineEdit = new QLineEdit(awardfind);
        stu_award_Input_IDlineEdit->setObjectName(QStringLiteral("stu_award_Input_IDlineEdit"));
        stu_award_Input_IDlineEdit->setGeometry(QRect(250, 70, 113, 20));
        stu_award_out_IDlineEdit = new QLineEdit(awardfind);
        stu_award_out_IDlineEdit->setObjectName(QStringLiteral("stu_award_out_IDlineEdit"));
        stu_award_out_IDlineEdit->setGeometry(QRect(210, 100, 141, 20));
        stu_award_namelineEdit = new QLineEdit(awardfind);
        stu_award_namelineEdit->setObjectName(QStringLiteral("stu_award_namelineEdit"));
        stu_award_namelineEdit->setGeometry(QRect(210, 140, 141, 20));
        stu_award_class_lineEdit = new QLineEdit(awardfind);
        stu_award_class_lineEdit->setObjectName(QStringLiteral("stu_award_class_lineEdit"));
        stu_award_class_lineEdit->setGeometry(QRect(210, 180, 141, 20));
        stu_award_majorlineEdit = new QLineEdit(awardfind);
        stu_award_majorlineEdit->setObjectName(QStringLiteral("stu_award_majorlineEdit"));
        stu_award_majorlineEdit->setGeometry(QRect(210, 220, 141, 20));
        stu_award_awardlineEdit = new QLineEdit(awardfind);
        stu_award_awardlineEdit->setObjectName(QStringLiteral("stu_award_awardlineEdit"));
        stu_award_awardlineEdit->setGeometry(QRect(210, 260, 141, 20));
        stu_award_puishlineEdit = new QLineEdit(awardfind);
        stu_award_puishlineEdit->setObjectName(QStringLiteral("stu_award_puishlineEdit"));
        stu_award_puishlineEdit->setGeometry(QRect(210, 300, 141, 20));
        stu_award_querypushButton = new QPushButton(awardfind);
        stu_award_querypushButton->setObjectName(QStringLiteral("stu_award_querypushButton"));
        stu_award_querypushButton->setGeometry(QRect(120, 360, 75, 23));
        stu_award_backpushButton = new QPushButton(awardfind);
        stu_award_backpushButton->setObjectName(QStringLiteral("stu_award_backpushButton"));
        stu_award_backpushButton->setGeometry(QRect(330, 360, 75, 23));

        retranslateUi(awardfind);

        QMetaObject::connectSlotsByName(awardfind);
    } // setupUi

    void retranslateUi(QWidget *awardfind)
    {
        awardfind->setWindowTitle(QApplication::translate("awardfind", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("awardfind", "\345\255\246\347\224\237\345\245\226\346\203\251\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("awardfind", "\350\257\267\350\276\223\345\205\245\344\275\240\350\246\201\346\237\245\350\257\242\347\232\204\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("awardfind", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("awardfind", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("awardfind", "\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("awardfind", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("awardfind", "\345\245\226\345\212\261\346\203\205\345\206\265\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("awardfind", "\346\203\251\347\275\232\346\203\205\345\206\265\357\274\232", Q_NULLPTR));
        stu_award_querypushButton->setText(QApplication::translate("awardfind", "\346\237\245\350\257\242", Q_NULLPTR));
        stu_award_backpushButton->setText(QApplication::translate("awardfind", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class awardfind: public Ui_awardfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AWARDFIND_H
