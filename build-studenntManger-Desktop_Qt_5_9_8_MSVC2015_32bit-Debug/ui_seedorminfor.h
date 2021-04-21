/********************************************************************************
** Form generated from reading UI file 'seedorminfor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEDORMINFOR_H
#define UI_SEEDORMINFOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seedorminfor
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *backButton;

    void setupUi(QWidget *seedorminfor)
    {
        if (seedorminfor->objectName().isEmpty())
            seedorminfor->setObjectName(QStringLiteral("seedorminfor"));
        seedorminfor->resize(736, 418);
        label = new QLabel(seedorminfor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 9, 251, 31));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        tableWidget = new QTableWidget(seedorminfor);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 60, 631, 331));
        backButton = new QPushButton(seedorminfor);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(550, 20, 75, 23));

        retranslateUi(seedorminfor);

        QMetaObject::connectSlotsByName(seedorminfor);
    } // setupUi

    void retranslateUi(QWidget *seedorminfor)
    {
        seedorminfor->setWindowTitle(QApplication::translate("seedorminfor", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("seedorminfor", "\346\211\200\346\234\211\345\255\246\347\224\237\344\275\217\345\256\277\346\203\205\345\206\265", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("seedorminfor", "\345\257\235\345\256\244\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("seedorminfor", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("seedorminfor", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("seedorminfor", "\346\200\247\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("seedorminfor", "\345\272\212\344\275\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("seedorminfor", "\345\244\207\346\263\250", Q_NULLPTR));
        backButton->setText(QApplication::translate("seedorminfor", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class seedorminfor: public Ui_seedorminfor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEDORMINFOR_H
