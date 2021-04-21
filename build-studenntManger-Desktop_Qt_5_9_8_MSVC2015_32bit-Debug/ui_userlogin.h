/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userlogin
{
public:
    QPushButton *delete_loginButton;
    QPushButton *update_userButton;
    QPushButton *insert_loginButton;
    QPushButton *user_login_back;
    QPushButton *logincancelButton;

    void setupUi(QWidget *userlogin)
    {
        if (userlogin->objectName().isEmpty())
            userlogin->setObjectName(QStringLiteral("userlogin"));
        userlogin->resize(400, 300);
        delete_loginButton = new QPushButton(userlogin);
        delete_loginButton->setObjectName(QStringLiteral("delete_loginButton"));
        delete_loginButton->setGeometry(QRect(110, 60, 111, 23));
        update_userButton = new QPushButton(userlogin);
        update_userButton->setObjectName(QStringLiteral("update_userButton"));
        update_userButton->setGeometry(QRect(110, 100, 111, 23));
        insert_loginButton = new QPushButton(userlogin);
        insert_loginButton->setObjectName(QStringLiteral("insert_loginButton"));
        insert_loginButton->setGeometry(QRect(110, 150, 111, 23));
        user_login_back = new QPushButton(userlogin);
        user_login_back->setObjectName(QStringLiteral("user_login_back"));
        user_login_back->setGeometry(QRect(94, 220, 51, 23));
        logincancelButton = new QPushButton(userlogin);
        logincancelButton->setObjectName(QStringLiteral("logincancelButton"));
        logincancelButton->setGeometry(QRect(210, 220, 51, 23));

        retranslateUi(userlogin);

        QMetaObject::connectSlotsByName(userlogin);
    } // setupUi

    void retranslateUi(QWidget *userlogin)
    {
        userlogin->setWindowTitle(QApplication::translate("userlogin", "Form", Q_NULLPTR));
        delete_loginButton->setText(QApplication::translate("userlogin", "\345\210\240\351\231\244\347\224\250\346\210\267\347\231\273\345\205\245\344\277\241\346\201\257", Q_NULLPTR));
        update_userButton->setText(QApplication::translate("userlogin", "\346\233\264\346\226\260\347\224\250\346\210\267\347\231\273\345\275\225\344\277\241\346\201\257", Q_NULLPTR));
        insert_loginButton->setText(QApplication::translate("userlogin", "\346\267\273\345\212\240\347\224\250\347\231\273\345\275\225\344\277\241\346\201\257", Q_NULLPTR));
        user_login_back->setText(QApplication::translate("userlogin", "\350\277\224\345\233\236", Q_NULLPTR));
        logincancelButton->setText(QApplication::translate("userlogin", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userlogin: public Ui_userlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
