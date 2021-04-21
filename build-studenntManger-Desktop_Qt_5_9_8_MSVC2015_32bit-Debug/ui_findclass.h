/********************************************************************************
** Form generated from reading UI file 'findclass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCLASS_H
#define UI_FINDCLASS_H

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

class Ui_findclass
{
public:
    QLabel *label;
    QLineEdit *stu_find_classidIlineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *stu_find_class_namelineEdit;
    QLineEdit *stu_find_class_majorlineEdit;
    QLineEdit *stu_find_class_numlineEdit;
    QLabel *label_7;
    QPushButton *stu_find_classqueryButton;
    QPushButton *stu_findclassbackButton;
    QLineEdit *stu_find_class_instructorlineEdit;

    void setupUi(QWidget *findclass)
    {
        if (findclass->objectName().isEmpty())
            findclass->setObjectName(QStringLiteral("findclass"));
        findclass->resize(526, 401);
        label = new QLabel(findclass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 151, 20));
        stu_find_classidIlineEdit = new QLineEdit(findclass);
        stu_find_classidIlineEdit->setObjectName(QStringLiteral("stu_find_classidIlineEdit"));
        stu_find_classidIlineEdit->setGeometry(QRect(250, 40, 141, 21));
        label_2 = new QLabel(findclass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 130, 61, 20));
        label_3 = new QLabel(findclass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 170, 61, 20));
        label_4 = new QLabel(findclass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 220, 61, 20));
        label_5 = new QLabel(findclass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 270, 54, 12));
        stu_find_class_namelineEdit = new QLineEdit(findclass);
        stu_find_class_namelineEdit->setObjectName(QStringLiteral("stu_find_class_namelineEdit"));
        stu_find_class_namelineEdit->setGeometry(QRect(170, 130, 141, 20));
        stu_find_class_majorlineEdit = new QLineEdit(findclass);
        stu_find_class_majorlineEdit->setObjectName(QStringLiteral("stu_find_class_majorlineEdit"));
        stu_find_class_majorlineEdit->setGeometry(QRect(170, 170, 141, 20));
        stu_find_class_numlineEdit = new QLineEdit(findclass);
        stu_find_class_numlineEdit->setObjectName(QStringLiteral("stu_find_class_numlineEdit"));
        stu_find_class_numlineEdit->setGeometry(QRect(170, 220, 141, 20));
        label_7 = new QLabel(findclass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 90, 91, 16));
        stu_find_classqueryButton = new QPushButton(findclass);
        stu_find_classqueryButton->setObjectName(QStringLiteral("stu_find_classqueryButton"));
        stu_find_classqueryButton->setGeometry(QRect(350, 80, 75, 23));
        stu_findclassbackButton = new QPushButton(findclass);
        stu_findclassbackButton->setObjectName(QStringLiteral("stu_findclassbackButton"));
        stu_findclassbackButton->setGeometry(QRect(360, 340, 75, 23));
        stu_find_class_instructorlineEdit = new QLineEdit(findclass);
        stu_find_class_instructorlineEdit->setObjectName(QStringLiteral("stu_find_class_instructorlineEdit"));
        stu_find_class_instructorlineEdit->setGeometry(QRect(170, 270, 141, 20));

        retranslateUi(findclass);

        QMetaObject::connectSlotsByName(findclass);
    } // setupUi

    void retranslateUi(QWidget *findclass)
    {
        findclass->setWindowTitle(QApplication::translate("findclass", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("findclass", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\347\217\255\347\272\247\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("findclass", "\347\217\255\347\272\247\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("findclass", "\347\263\273\345\210\253\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("findclass", "\347\217\255\347\272\247\344\272\272\346\225\260\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("findclass", "\350\276\205\345\257\274\345\221\230\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("findclass", "\346\237\245\350\257\242\347\273\223\346\236\234\357\274\232", Q_NULLPTR));
        stu_find_classqueryButton->setText(QApplication::translate("findclass", "\346\237\245\350\257\242", Q_NULLPTR));
        stu_findclassbackButton->setText(QApplication::translate("findclass", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class findclass: public Ui_findclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCLASS_H
