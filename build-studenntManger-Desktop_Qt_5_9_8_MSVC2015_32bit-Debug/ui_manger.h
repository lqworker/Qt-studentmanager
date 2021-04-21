/********************************************************************************
** Form generated from reading UI file 'manger.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANGER_H
#define UI_MANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manger
{
public:
    QLabel *label;
    QFrame *line;
    QPushButton *userloginButton;
    QPushButton *stu_inform_guanlipushButton;
    QPushButton *class_managepushButton;
    QPushButton *scoremanagepushButton;
    QPushButton *dorm_guanliButton;
    QPushButton *course_manageButton;
    QPushButton *award_managepushButton;
    QPushButton *feemanagepushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_useradmin;

    void setupUi(QWidget *manger)
    {
        if (manger->objectName().isEmpty())
            manger->setObjectName(QStringLiteral("manger"));
        manger->resize(400, 300);
        label = new QLabel(manger);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 81, 21));
        line = new QFrame(manger);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(50, 60, 301, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        userloginButton = new QPushButton(manger);
        userloginButton->setObjectName(QStringLiteral("userloginButton"));
        userloginButton->setGeometry(QRect(64, 90, 81, 23));
        stu_inform_guanlipushButton = new QPushButton(manger);
        stu_inform_guanlipushButton->setObjectName(QStringLiteral("stu_inform_guanlipushButton"));
        stu_inform_guanlipushButton->setGeometry(QRect(64, 130, 81, 23));
        class_managepushButton = new QPushButton(manger);
        class_managepushButton->setObjectName(QStringLiteral("class_managepushButton"));
        class_managepushButton->setGeometry(QRect(64, 170, 81, 23));
        scoremanagepushButton = new QPushButton(manger);
        scoremanagepushButton->setObjectName(QStringLiteral("scoremanagepushButton"));
        scoremanagepushButton->setGeometry(QRect(64, 210, 81, 23));
        dorm_guanliButton = new QPushButton(manger);
        dorm_guanliButton->setObjectName(QStringLiteral("dorm_guanliButton"));
        dorm_guanliButton->setGeometry(QRect(204, 90, 81, 23));
        course_manageButton = new QPushButton(manger);
        course_manageButton->setObjectName(QStringLiteral("course_manageButton"));
        course_manageButton->setGeometry(QRect(204, 130, 81, 23));
        award_managepushButton = new QPushButton(manger);
        award_managepushButton->setObjectName(QStringLiteral("award_managepushButton"));
        award_managepushButton->setGeometry(QRect(204, 170, 81, 23));
        feemanagepushButton = new QPushButton(manger);
        feemanagepushButton->setObjectName(QStringLiteral("feemanagepushButton"));
        feemanagepushButton->setGeometry(QRect(200, 210, 81, 23));
        pushButton_9 = new QPushButton(manger);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(110, 250, 51, 21));
        pushButton_10 = new QPushButton(manger);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(200, 250, 51, 21));
        label_useradmin = new QLabel(manger);
        label_useradmin->setObjectName(QStringLiteral("label_useradmin"));
        label_useradmin->setGeometry(QRect(30, 10, 71, 31));

        retranslateUi(manger);

        QMetaObject::connectSlotsByName(manger);
    } // setupUi

    void retranslateUi(QWidget *manger)
    {
        manger->setWindowTitle(QApplication::translate("manger", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("manger", "\347\256\241\347\220\206\345\221\230\347\253\257", Q_NULLPTR));
        userloginButton->setText(QApplication::translate("manger", "\347\224\250\346\210\267\347\231\273\345\275\225\347\256\241\347\220\206", Q_NULLPTR));
        stu_inform_guanlipushButton->setText(QApplication::translate("manger", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        class_managepushButton->setText(QApplication::translate("manger", "\347\217\255\347\272\247\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        scoremanagepushButton->setText(QApplication::translate("manger", "\346\210\220\347\273\251\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        dorm_guanliButton->setText(QApplication::translate("manger", "\345\256\277\350\210\215\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        course_manageButton->setText(QApplication::translate("manger", "\350\257\276\347\250\213\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        award_managepushButton->setText(QApplication::translate("manger", "\345\245\226\346\203\251\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        feemanagepushButton->setText(QApplication::translate("manger", "\347\274\264\350\264\271\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("manger", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("manger", "\345\217\226\346\266\210", Q_NULLPTR));
        label_useradmin->setText(QApplication::translate("manger", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class manger: public Ui_manger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANGER_H
