/********************************************************************************
** Form generated from reading UI file 'scoremanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREMANAGE_H
#define UI_SCOREMANAGE_H

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

class Ui_scoremanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *score_objectlineEdit;
    QLineEdit *score_IDlineEdit;
    QLineEdit *score_termlineEdit;
    QLineEdit *score_classlineEdit;
    QLineEdit *score_teacherlineEdit;
    QLineEdit *score_scorelineEdit;
    QPushButton *score_querypushButton;
    QPushButton *score_addpushButton;
    QPushButton *score_deletepushButton;
    QPushButton *score_upadtepushButton;
    QPushButton *score_backpushButton;

    void setupUi(QWidget *scoremanage)
    {
        if (scoremanage->objectName().isEmpty())
            scoremanage->setObjectName(QStringLiteral("scoremanage"));
        scoremanage->resize(586, 449);
        label = new QLabel(scoremanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 141, 41));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        label_2 = new QLabel(scoremanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 31, 16));
        label_3 = new QLabel(scoremanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 140, 31, 16));
        label_4 = new QLabel(scoremanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 140, 31, 16));
        label_5 = new QLabel(scoremanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 210, 31, 16));
        label_6 = new QLabel(scoremanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 250, 61, 16));
        label_7 = new QLabel(scoremanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(220, 290, 31, 16));
        score_objectlineEdit = new QLineEdit(scoremanage);
        score_objectlineEdit->setObjectName(QStringLiteral("score_objectlineEdit"));
        score_objectlineEdit->setGeometry(QRect(150, 140, 113, 20));
        score_IDlineEdit = new QLineEdit(scoremanage);
        score_IDlineEdit->setObjectName(QStringLiteral("score_IDlineEdit"));
        score_IDlineEdit->setGeometry(QRect(110, 90, 113, 20));
        score_termlineEdit = new QLineEdit(scoremanage);
        score_termlineEdit->setObjectName(QStringLiteral("score_termlineEdit"));
        score_termlineEdit->setGeometry(QRect(370, 140, 113, 20));
        score_classlineEdit = new QLineEdit(scoremanage);
        score_classlineEdit->setObjectName(QStringLiteral("score_classlineEdit"));
        score_classlineEdit->setGeometry(QRect(260, 210, 113, 20));
        score_teacherlineEdit = new QLineEdit(scoremanage);
        score_teacherlineEdit->setObjectName(QStringLiteral("score_teacherlineEdit"));
        score_teacherlineEdit->setGeometry(QRect(260, 250, 113, 20));
        score_scorelineEdit = new QLineEdit(scoremanage);
        score_scorelineEdit->setObjectName(QStringLiteral("score_scorelineEdit"));
        score_scorelineEdit->setGeometry(QRect(260, 290, 113, 20));
        score_querypushButton = new QPushButton(scoremanage);
        score_querypushButton->setObjectName(QStringLiteral("score_querypushButton"));
        score_querypushButton->setGeometry(QRect(70, 180, 75, 23));
        score_addpushButton = new QPushButton(scoremanage);
        score_addpushButton->setObjectName(QStringLiteral("score_addpushButton"));
        score_addpushButton->setGeometry(QRect(50, 370, 75, 23));
        score_deletepushButton = new QPushButton(scoremanage);
        score_deletepushButton->setObjectName(QStringLiteral("score_deletepushButton"));
        score_deletepushButton->setGeometry(QRect(170, 370, 75, 23));
        score_upadtepushButton = new QPushButton(scoremanage);
        score_upadtepushButton->setObjectName(QStringLiteral("score_upadtepushButton"));
        score_upadtepushButton->setGeometry(QRect(280, 370, 75, 23));
        score_backpushButton = new QPushButton(scoremanage);
        score_backpushButton->setObjectName(QStringLiteral("score_backpushButton"));
        score_backpushButton->setGeometry(QRect(390, 370, 75, 23));

        retranslateUi(scoremanage);

        QMetaObject::connectSlotsByName(scoremanage);
    } // setupUi

    void retranslateUi(QWidget *scoremanage)
    {
        scoremanage->setWindowTitle(QApplication::translate("scoremanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("scoremanage", "\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("scoremanage", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("scoremanage", "\347\247\221\347\233\256\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("scoremanage", "\345\255\246\346\234\237\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("scoremanage", "\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("scoremanage", "\346\216\210\350\257\276\350\200\201\345\270\210\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("scoremanage", "\345\210\206\346\225\260\357\274\232", Q_NULLPTR));
        score_querypushButton->setText(QApplication::translate("scoremanage", "\346\220\234\347\264\242", Q_NULLPTR));
        score_addpushButton->setText(QApplication::translate("scoremanage", "\346\267\273\345\212\240", Q_NULLPTR));
        score_deletepushButton->setText(QApplication::translate("scoremanage", "\345\210\240\351\231\244", Q_NULLPTR));
        score_upadtepushButton->setText(QApplication::translate("scoremanage", "\346\233\264\346\226\260", Q_NULLPTR));
        score_backpushButton->setText(QApplication::translate("scoremanage", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class scoremanage: public Ui_scoremanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREMANAGE_H
