/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *horizontalFrame_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *BorderGroupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineSa;
    QLabel *label_2;
    QLineEdit *lineSb;
    QGroupBox *gridGroupBox_3;
    QFormLayout *formLayout_2;
    QLineEdit *lineEditSplitNum;
    QPushButton *PushApproximate;
    QLabel *label11;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *lineA;
    QLabel *label_7;
    QLineEdit *lineB;
    QGroupBox *gridGroupBox_6;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QGroupBox *gridGroupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *reference;
    QGroupBox *FungListGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *FuncList;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *RB_0;
    QRadioButton *RB_1;
    QRadioButton *RB_2;
    QRadioButton *RB_3;
    QFrame *horizontalFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QCustomPlot *graphF;
    QCustomPlot *graphdF;
    QCustomPlot *graphddF;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableCoef;
    QTableWidget *tableData;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1129, 589);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalFrame_2 = new QFrame(centralwidget);
        horizontalFrame_2->setObjectName("horizontalFrame_2");
        verticalLayout = new QVBoxLayout(horizontalFrame_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridGroupBox_2 = new QGroupBox(horizontalFrame_2);
        gridGroupBox_2->setObjectName("gridGroupBox_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridGroupBox_2->sizePolicy().hasHeightForWidth());
        gridGroupBox_2->setSizePolicy(sizePolicy);
        gridGroupBox_2->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(gridGroupBox_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 2);

        BorderGroupBox = new QGroupBox(gridGroupBox_2);
        BorderGroupBox->setObjectName("BorderGroupBox");
        BorderGroupBox->setAlignment(Qt::AlignCenter);
        formLayout = new QFormLayout(BorderGroupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(7);
        formLayout->setVerticalSpacing(7);
        formLayout->setContentsMargins(11, 11, 11, 11);
        label = new QLabel(BorderGroupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineSa = new QLineEdit(BorderGroupBox);
        lineSa->setObjectName("lineSa");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineSa);

        label_2 = new QLabel(BorderGroupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineSb = new QLineEdit(BorderGroupBox);
        lineSb->setObjectName("lineSb");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineSb);


        gridLayout->addWidget(BorderGroupBox, 1, 1, 1, 1);

        gridGroupBox_3 = new QGroupBox(gridGroupBox_2);
        gridGroupBox_3->setObjectName("gridGroupBox_3");
        gridGroupBox_3->setAlignment(Qt::AlignCenter);
        formLayout_2 = new QFormLayout(gridGroupBox_3);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setHorizontalSpacing(7);
        formLayout_2->setVerticalSpacing(7);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        lineEditSplitNum = new QLineEdit(gridGroupBox_3);
        lineEditSplitNum->setObjectName("lineEditSplitNum");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditSplitNum);

        PushApproximate = new QPushButton(gridGroupBox_3);
        PushApproximate->setObjectName("PushApproximate");

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, PushApproximate);

        label11 = new QLabel(gridGroupBox_3);
        label11->setObjectName("label11");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label11);


        gridLayout->addWidget(gridGroupBox_3, 2, 2, 1, 1);

        groupBox = new QGroupBox(gridGroupBox_2);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(7);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        lineA = new QLineEdit(groupBox);
        lineA->setObjectName("lineA");

        gridLayout_3->addWidget(lineA, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        lineB = new QLineEdit(groupBox);
        lineB->setObjectName("lineB");

        gridLayout_3->addWidget(lineB, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 2, 1, 1, 1);

        gridGroupBox_6 = new QGroupBox(gridGroupBox_2);
        gridGroupBox_6->setObjectName("gridGroupBox_6");
        gridGroupBox_6->setAlignment(Qt::AlignCenter);
        formLayout_3 = new QFormLayout(gridGroupBox_6);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setHorizontalSpacing(7);
        formLayout_3->setVerticalSpacing(7);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        label_4 = new QLabel(gridGroupBox_6);
        label_4->setObjectName("label_4");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(gridGroupBox_6);
        lineEdit->setObjectName("lineEdit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit);

        pushButton = new QPushButton(gridGroupBox_6);
        pushButton->setObjectName("pushButton");

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, pushButton);


        gridLayout->addWidget(gridGroupBox_6, 1, 2, 1, 1);

        gridGroupBox_4 = new QGroupBox(gridGroupBox_2);
        gridGroupBox_4->setObjectName("gridGroupBox_4");
        gridGroupBox_4->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(gridGroupBox_4);
        gridLayout_6->setSpacing(7);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        reference = new QLabel(gridGroupBox_4);
        reference->setObjectName("reference");
        reference->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_6->addWidget(reference, 2, 0, 1, 1);


        gridLayout->addWidget(gridGroupBox_4, 4, 1, 1, 2);

        FungListGroupBox = new QGroupBox(gridGroupBox_2);
        FungListGroupBox->setObjectName("FungListGroupBox");
        sizePolicy.setHeightForWidth(FungListGroupBox->sizePolicy().hasHeightForWidth());
        FungListGroupBox->setSizePolicy(sizePolicy);
        FungListGroupBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_4 = new QHBoxLayout(FungListGroupBox);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        FuncList = new QListWidget(FungListGroupBox);
        new QListWidgetItem(FuncList);
        new QListWidgetItem(FuncList);
        new QListWidgetItem(FuncList);
        new QListWidgetItem(FuncList);
        QFont font;
        font.setStrikeOut(false);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(FuncList);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        FuncList->setObjectName("FuncList");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FuncList->sizePolicy().hasHeightForWidth());
        FuncList->setSizePolicy(sizePolicy1);
        FuncList->setMinimumSize(QSize(0, 10));
        FuncList->setMaximumSize(QSize(16777215, 125));
        FuncList->setFrameShape(QFrame::NoFrame);
        FuncList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout_4->addWidget(FuncList);

        verticalGroupBox = new QGroupBox(FungListGroupBox);
        verticalGroupBox->setObjectName("verticalGroupBox");
        verticalLayout_2 = new QVBoxLayout(verticalGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        RB_0 = new QRadioButton(verticalGroupBox);
        RB_0->setObjectName("RB_0");
        RB_0->setChecked(true);

        verticalLayout_2->addWidget(RB_0);

        RB_1 = new QRadioButton(verticalGroupBox);
        RB_1->setObjectName("RB_1");

        verticalLayout_2->addWidget(RB_1);

        RB_2 = new QRadioButton(verticalGroupBox);
        RB_2->setObjectName("RB_2");

        verticalLayout_2->addWidget(RB_2);

        RB_3 = new QRadioButton(verticalGroupBox);
        RB_3->setObjectName("RB_3");

        verticalLayout_2->addWidget(RB_3);


        horizontalLayout_4->addWidget(verticalGroupBox);


        gridLayout->addWidget(FungListGroupBox, 0, 1, 1, 2);


        verticalLayout->addWidget(gridGroupBox_2);


        horizontalLayout_2->addWidget(horizontalFrame_2);

        horizontalFrame = new QFrame(centralwidget);
        horizontalFrame->setObjectName("horizontalFrame");
        verticalLayout_4 = new QVBoxLayout(horizontalFrame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        graphF = new QCustomPlot(horizontalFrame);
        graphF->setObjectName("graphF");

        horizontalLayout_3->addWidget(graphF);

        graphdF = new QCustomPlot(horizontalFrame);
        graphdF->setObjectName("graphdF");

        horizontalLayout_3->addWidget(graphdF);

        graphddF = new QCustomPlot(horizontalFrame);
        graphddF->setObjectName("graphddF");

        horizontalLayout_3->addWidget(graphddF);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tableCoef = new QTableWidget(horizontalFrame);
        tableCoef->setObjectName("tableCoef");
        tableCoef->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableCoef->setAlternatingRowColors(true);

        horizontalLayout->addWidget(tableCoef);

        tableData = new QTableWidget(horizontalFrame);
        tableData->setObjectName("tableData");
        tableData->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableData->setAlternatingRowColors(true);

        horizontalLayout->addWidget(tableData);

        horizontalLayout->setStretch(0, 40);
        horizontalLayout->setStretch(1, 60);

        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout_4->setStretch(0, 60);
        verticalLayout_4->setStretch(1, 40);

        horizontalLayout_2->addWidget(horizontalFrame);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 90);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        FuncList->setCurrentRow(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        BorderGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\275\320\270\321\207\320\275\321\213\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "S''(a) = ", nullptr));
        lineSa->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "S''(b) = ", nullptr));
        lineSb->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        gridGroupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272", nullptr));
        lineEditSplitNum->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        PushApproximate->setText(QCoreApplication::translate("MainWindow", "\320\220\320\277\320\277\321\200\320\276\320\272\321\201\320\270\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label11->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \321\200\320\260\320\267\320\261\320\270\320\265\320\275\320\270\320\271:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\200\320\265\320\267\320\276\320\272", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "a =", nullptr));
        lineA->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "b =", nullptr));
        lineB->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        gridGroupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\320\243\320\267\320\275\320\260\321\202\321\214 \321\207\320\270\321\201\320\273\320\276 \321\200\320\260\320\267\320\261\320\270\320\265\320\275\320\270\320\271", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\320\276\321\201\321\202\321\214:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214", nullptr));
        gridGroupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        reference->setText(QString());
        FungListGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217", nullptr));

        const bool __sortingEnabled = FuncList->isSortingEnabled();
        FuncList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = FuncList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202\320\276\320\262\320\260\321\217 \321\204\321\203\320\275\320\272\321\206\320\270\321\217", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = FuncList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "F(x) = sqrt(x^2-1)/x", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = FuncList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "F(x) = (1+x^2)^(1/3)", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = FuncList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "F(x) = sin(x+1)/(x+1)", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = FuncList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "F(x) = ln(x+1)/(x+1)", nullptr));
        FuncList->setSortingEnabled(__sortingEnabled);

        RB_0->setText(QCoreApplication::translate("MainWindow", "F(x)", nullptr));
        RB_1->setText(QCoreApplication::translate("MainWindow", "F(x) + cos(x)", nullptr));
        RB_2->setText(QCoreApplication::translate("MainWindow", "F(x) + cos(10*x)", nullptr));
        RB_3->setText(QCoreApplication::translate("MainWindow", "F(x) + cos(100*x)", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
