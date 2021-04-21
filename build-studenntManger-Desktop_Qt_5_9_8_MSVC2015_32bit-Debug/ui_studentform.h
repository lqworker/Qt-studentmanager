/********************************************************************************
** Form generated from reading UI file 'studentform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTFORM_H
#define UI_STUDENTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentForm
{
public:
    QPushButton *pushButton;
    QPushButton *stu_find_dormButton;
    QPushButton *pushButton_3;
    QPushButton *stu_findclass_inforButton;
    QPushButton *stu_award_button;
    QPushButton *pushButton_student_findscore;
    QPushButton *stu_query_fee_Button;
    QPushButton *stu_find_coursebutton;
    QToolButton *toolButton;
    QLabel *label;
    QFrame *line;
    QLabel *label_user;

    void setupUi(QWidget *studentForm)
    {
        if (studentForm->objectName().isEmpty())
            studentForm->setObjectName(QStringLiteral("studentForm"));
        studentForm->resize(400, 300);
        pushButton = new QPushButton(studentForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 230, 41, 23));
        stu_find_dormButton = new QPushButton(studentForm);
        stu_find_dormButton->setObjectName(QStringLiteral("stu_find_dormButton"));
        stu_find_dormButton->setGeometry(QRect(140, 50, 91, 23));
        pushButton_3 = new QPushButton(studentForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 90, 111, 23));
        pushButton_3->setCheckable(false);
        stu_findclass_inforButton = new QPushButton(studentForm);
        stu_findclass_inforButton->setObjectName(QStringLiteral("stu_findclass_inforButton"));
        stu_findclass_inforButton->setGeometry(QRect(260, 90, 111, 23));
        stu_award_button = new QPushButton(studentForm);
        stu_award_button->setObjectName(QStringLiteral("stu_award_button"));
        stu_award_button->setGeometry(QRect(64, 130, 81, 23));
        pushButton_student_findscore = new QPushButton(studentForm);
        pushButton_student_findscore->setObjectName(QStringLiteral("pushButton_student_findscore"));
        pushButton_student_findscore->setGeometry(QRect(110, 170, 61, 21));
        stu_query_fee_Button = new QPushButton(studentForm);
        stu_query_fee_Button->setObjectName(QStringLiteral("stu_query_fee_Button"));
        stu_query_fee_Button->setGeometry(QRect(230, 130, 91, 23));
        stu_find_coursebutton = new QPushButton(studentForm);
        stu_find_coursebutton->setObjectName(QStringLiteral("stu_find_coursebutton"));
        stu_find_coursebutton->setGeometry(QRect(224, 170, 61, 23));
        toolButton = new QToolButton(studentForm);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(220, 230, 37, 20));
        label = new QLabel(studentForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 151, 21));
        line = new QFrame(studentForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 30, 311, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_user = new QLabel(studentForm);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(40, 10, 101, 16));

        retranslateUi(studentForm);

        QMetaObject::connectSlotsByName(studentForm);
    } // setupUi

    void retranslateUi(QWidget *studentForm)
    {
        studentForm->setWindowTitle(QApplication::translate("studentForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("studentForm", "\350\277\224\345\233\236", Q_NULLPTR));
        stu_find_dormButton->setText(QApplication::translate("studentForm", "\345\256\277\350\210\215\346\203\205\345\206\265\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("studentForm", "\345\255\246\347\224\237\345\237\272\346\234\254\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        stu_findclass_inforButton->setText(QApplication::translate("studentForm", "\347\217\255\347\272\247\345\237\272\346\234\254\346\203\205\345\206\265\346\237\245\350\257\242", Q_NULLPTR));
        stu_award_button->setText(QApplication::translate("studentForm", "\345\245\226\346\203\251\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_student_findscore->setText(QApplication::translate("studentForm", "\346\210\220\347\273\251\346\237\245\350\257\242", Q_NULLPTR));
        stu_query_fee_Button->setText(QApplication::translate("studentForm", "\347\274\264\350\264\271\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        stu_find_coursebutton->setText(QApplication::translate("studentForm", "\350\257\276\347\250\213\346\237\245\350\257\242", Q_NULLPTR));
        toolButton->setText(QApplication::translate("studentForm", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("studentForm", "\345\255\246\347\224\237\347\253\257", Q_NULLPTR));
        label_user->setText(QApplication::translate("studentForm", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentForm: public Ui_studentForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTFORM_H
