/********************************************************************************
** Form generated from reading UI file 'updatelogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATELOGIN_H
#define UI_UPDATELOGIN_H

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

class Ui_updatelogin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *login_update_IDlineEdit;
    QLineEdit *login_updatenamelineEdit;
    QPushButton *login_update_queryButton;
    QLineEdit *update_loginpasswordlineEdit;
    QPushButton *login_updatepushButton;
    QPushButton *loginupdatebackButton;
    QPushButton *login_update_cancelButton;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *updatelogin)
    {
        if (updatelogin->objectName().isEmpty())
            updatelogin->setObjectName(QStringLiteral("updatelogin"));
        updatelogin->resize(400, 300);
        label = new QLabel(updatelogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 54, 12));
        label_2 = new QLabel(updatelogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 41, 20));
        label_3 = new QLabel(updatelogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 80, 31, 16));
        label_4 = new QLabel(updatelogin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 130, 54, 12));
        login_update_IDlineEdit = new QLineEdit(updatelogin);
        login_update_IDlineEdit->setObjectName(QStringLiteral("login_update_IDlineEdit"));
        login_update_IDlineEdit->setGeometry(QRect(50, 80, 113, 20));
        login_updatenamelineEdit = new QLineEdit(updatelogin);
        login_updatenamelineEdit->setObjectName(QStringLiteral("login_updatenamelineEdit"));
        login_updatenamelineEdit->setGeometry(QRect(260, 80, 121, 20));
        login_update_queryButton = new QPushButton(updatelogin);
        login_update_queryButton->setObjectName(QStringLiteral("login_update_queryButton"));
        login_update_queryButton->setGeometry(QRect(50, 130, 75, 23));
        update_loginpasswordlineEdit = new QLineEdit(updatelogin);
        update_loginpasswordlineEdit->setObjectName(QStringLiteral("update_loginpasswordlineEdit"));
        update_loginpasswordlineEdit->setGeometry(QRect(260, 130, 121, 20));
        login_updatepushButton = new QPushButton(updatelogin);
        login_updatepushButton->setObjectName(QStringLiteral("login_updatepushButton"));
        login_updatepushButton->setGeometry(QRect(30, 220, 75, 23));
        loginupdatebackButton = new QPushButton(updatelogin);
        loginupdatebackButton->setObjectName(QStringLiteral("loginupdatebackButton"));
        loginupdatebackButton->setGeometry(QRect(140, 220, 75, 23));
        login_update_cancelButton = new QPushButton(updatelogin);
        login_update_cancelButton->setObjectName(QStringLiteral("login_update_cancelButton"));
        login_update_cancelButton->setGeometry(QRect(260, 220, 75, 23));
        label_5 = new QLabel(updatelogin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 20, 54, 12));
        label_6 = new QLabel(updatelogin);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 20, 221, 31));
        label_6->setStyleSheet(QStringLiteral("font: 18pt \"Arial\";"));

        retranslateUi(updatelogin);

        QMetaObject::connectSlotsByName(updatelogin);
    } // setupUi

    void retranslateUi(QWidget *updatelogin)
    {
        updatelogin->setWindowTitle(QApplication::translate("updatelogin", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("updatelogin", "\347\274\226\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("updatelogin", "\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("updatelogin", "\347\231\273\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        login_update_queryButton->setText(QApplication::translate("updatelogin", "\346\220\234\347\264\242", Q_NULLPTR));
        login_updatepushButton->setText(QApplication::translate("updatelogin", "\344\277\256\346\224\271", Q_NULLPTR));
        loginupdatebackButton->setText(QApplication::translate("updatelogin", "\350\277\224\345\233\236", Q_NULLPTR));
        login_update_cancelButton->setText(QApplication::translate("updatelogin", "\345\217\226\346\266\210", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("updatelogin", "\346\233\264\346\226\260\347\224\250\346\210\267\347\231\273\345\205\245\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updatelogin: public Ui_updatelogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATELOGIN_H
