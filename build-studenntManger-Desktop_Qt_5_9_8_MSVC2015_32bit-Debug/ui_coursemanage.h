/********************************************************************************
** Form generated from reading UI file 'coursemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEMANAGE_H
#define UI_COURSEMANAGE_H

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

class Ui_coursemanage
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
    QLineEdit *couresnamelineEdit;
    QLineEdit *course_IDlineEdit;
    QLineEdit *course_teacherlineEdit;
    QLineEdit *course_timelineEdit;
    QLineEdit *course_addresslineEdit;
    QLineEdit *periodlineEdit;
    QLineEdit *creditlineEdit;
    QPushButton *course_querypushButton;
    QPushButton *course_addpushButton;
    QPushButton *course_deletepushButton;
    QPushButton *course_updatepushButton;
    QPushButton *course_backpushButton;

    void setupUi(QWidget *coursemanage)
    {
        if (coursemanage->objectName().isEmpty())
            coursemanage->setObjectName(QStringLiteral("coursemanage"));
        coursemanage->resize(582, 486);
        label = new QLabel(coursemanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 90, 54, 12));
        label_2 = new QLabel(coursemanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 20, 121, 31));
        label_2->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        label_3 = new QLabel(coursemanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 160, 51, 16));
        label_4 = new QLabel(coursemanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 210, 61, 16));
        label_5 = new QLabel(coursemanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 260, 54, 12));
        label_6 = new QLabel(coursemanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 300, 61, 16));
        label_7 = new QLabel(coursemanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 340, 31, 16));
        label_8 = new QLabel(coursemanage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 380, 31, 16));
        couresnamelineEdit = new QLineEdit(coursemanage);
        couresnamelineEdit->setObjectName(QStringLiteral("couresnamelineEdit"));
        couresnamelineEdit->setGeometry(QRect(190, 160, 113, 20));
        course_IDlineEdit = new QLineEdit(coursemanage);
        course_IDlineEdit->setObjectName(QStringLiteral("course_IDlineEdit"));
        course_IDlineEdit->setGeometry(QRect(230, 90, 113, 20));
        course_teacherlineEdit = new QLineEdit(coursemanage);
        course_teacherlineEdit->setObjectName(QStringLiteral("course_teacherlineEdit"));
        course_teacherlineEdit->setGeometry(QRect(190, 210, 113, 20));
        course_timelineEdit = new QLineEdit(coursemanage);
        course_timelineEdit->setObjectName(QStringLiteral("course_timelineEdit"));
        course_timelineEdit->setGeometry(QRect(190, 260, 113, 20));
        course_addresslineEdit = new QLineEdit(coursemanage);
        course_addresslineEdit->setObjectName(QStringLiteral("course_addresslineEdit"));
        course_addresslineEdit->setGeometry(QRect(190, 300, 113, 20));
        periodlineEdit = new QLineEdit(coursemanage);
        periodlineEdit->setObjectName(QStringLiteral("periodlineEdit"));
        periodlineEdit->setGeometry(QRect(190, 340, 113, 20));
        creditlineEdit = new QLineEdit(coursemanage);
        creditlineEdit->setObjectName(QStringLiteral("creditlineEdit"));
        creditlineEdit->setGeometry(QRect(190, 380, 113, 20));
        course_querypushButton = new QPushButton(coursemanage);
        course_querypushButton->setObjectName(QStringLiteral("course_querypushButton"));
        course_querypushButton->setGeometry(QRect(100, 120, 75, 23));
        course_addpushButton = new QPushButton(coursemanage);
        course_addpushButton->setObjectName(QStringLiteral("course_addpushButton"));
        course_addpushButton->setGeometry(QRect(40, 440, 75, 23));
        course_deletepushButton = new QPushButton(coursemanage);
        course_deletepushButton->setObjectName(QStringLiteral("course_deletepushButton"));
        course_deletepushButton->setGeometry(QRect(150, 440, 75, 23));
        course_updatepushButton = new QPushButton(coursemanage);
        course_updatepushButton->setObjectName(QStringLiteral("course_updatepushButton"));
        course_updatepushButton->setGeometry(QRect(250, 440, 75, 23));
        course_backpushButton = new QPushButton(coursemanage);
        course_backpushButton->setObjectName(QStringLiteral("course_backpushButton"));
        course_backpushButton->setGeometry(QRect(360, 440, 75, 23));

        retranslateUi(coursemanage);

        QMetaObject::connectSlotsByName(coursemanage);
    } // setupUi

    void retranslateUi(QWidget *coursemanage)
    {
        coursemanage->setWindowTitle(QApplication::translate("coursemanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("coursemanage", "\350\257\276\347\250\213\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("coursemanage", "\350\257\276\347\250\213\347\256\241\347\220\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("coursemanage", "\350\257\276\347\250\213\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("coursemanage", "\346\216\210\350\257\276\350\200\201\345\270\210\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("coursemanage", "\346\216\210\350\257\276\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("coursemanage", "\346\216\210\350\257\276\345\234\260\347\202\271\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("coursemanage", "\345\255\246\346\227\266\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("coursemanage", "\345\255\246\345\210\206\357\274\232", Q_NULLPTR));
        course_querypushButton->setText(QApplication::translate("coursemanage", "\346\237\245\350\257\242", Q_NULLPTR));
        course_addpushButton->setText(QApplication::translate("coursemanage", "\346\267\273\345\212\240", Q_NULLPTR));
        course_deletepushButton->setText(QApplication::translate("coursemanage", "\345\210\240\351\231\244", Q_NULLPTR));
        course_updatepushButton->setText(QApplication::translate("coursemanage", "\346\233\264\346\224\271", Q_NULLPTR));
        course_backpushButton->setText(QApplication::translate("coursemanage", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coursemanage: public Ui_coursemanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEMANAGE_H
