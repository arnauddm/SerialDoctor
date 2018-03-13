/********************************************************************************
** Form generated from reading UI file 'SerialDoctorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALDOCTORDIALOG_H
#define UI_SERIALDOCTORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialDoctor
{
public:
    QAction *actionScan;
    QAction *actionNewPort;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGroupBox *scanGroupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *ReturnScanTextEdit;
    QPushButton *RefreshScanPushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *OutputTextEdit;
    QTabWidget *PortTabWidget;
    QMenuBar *menuBar;
    QMenu *menuPort;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SerialDoctor)
    {
        if (SerialDoctor->objectName().isEmpty())
            SerialDoctor->setObjectName(QStringLiteral("SerialDoctor"));
        SerialDoctor->resize(883, 702);
        actionScan = new QAction(SerialDoctor);
        actionScan->setObjectName(QStringLiteral("actionScan"));
        actionNewPort = new QAction(SerialDoctor);
        actionNewPort->setObjectName(QStringLiteral("actionNewPort"));
        centralWidget = new QWidget(SerialDoctor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        scanGroupBox = new QGroupBox(centralWidget);
        scanGroupBox->setObjectName(QStringLiteral("scanGroupBox"));
        verticalLayout = new QVBoxLayout(scanGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ReturnScanTextEdit = new QTextEdit(scanGroupBox);
        ReturnScanTextEdit->setObjectName(QStringLiteral("ReturnScanTextEdit"));

        verticalLayout->addWidget(ReturnScanTextEdit);

        RefreshScanPushButton = new QPushButton(scanGroupBox);
        RefreshScanPushButton->setObjectName(QStringLiteral("RefreshScanPushButton"));

        verticalLayout->addWidget(RefreshScanPushButton);


        gridLayout_3->addWidget(scanGroupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        OutputTextEdit = new QTextEdit(groupBox_2);
        OutputTextEdit->setObjectName(QStringLiteral("OutputTextEdit"));

        gridLayout_2->addWidget(OutputTextEdit, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 2, 1);

        PortTabWidget = new QTabWidget(centralWidget);
        PortTabWidget->setObjectName(QStringLiteral("PortTabWidget"));
        PortTabWidget->setTabletTracking(true);
        PortTabWidget->setTabPosition(QTabWidget::South);
        PortTabWidget->setTabShape(QTabWidget::Rounded);

        gridLayout_3->addWidget(PortTabWidget, 1, 0, 1, 1);

        SerialDoctor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SerialDoctor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 883, 22));
        menuPort = new QMenu(menuBar);
        menuPort->setObjectName(QStringLiteral("menuPort"));
        SerialDoctor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SerialDoctor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SerialDoctor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SerialDoctor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SerialDoctor->setStatusBar(statusBar);

        menuBar->addAction(menuPort->menuAction());
        menuPort->addAction(actionScan);
        menuPort->addAction(actionNewPort);

        retranslateUi(SerialDoctor);

        PortTabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SerialDoctor);
    } // setupUi

    void retranslateUi(QMainWindow *SerialDoctor)
    {
        SerialDoctor->setWindowTitle(QApplication::translate("SerialDoctor", "SerialDoctor", nullptr));
        actionScan->setText(QApplication::translate("SerialDoctor", "Scan", nullptr));
        actionNewPort->setText(QApplication::translate("SerialDoctor", "New", nullptr));
        scanGroupBox->setTitle(QApplication::translate("SerialDoctor", "Scan", nullptr));
        RefreshScanPushButton->setText(QApplication::translate("SerialDoctor", "Refresh", nullptr));
        groupBox_2->setTitle(QApplication::translate("SerialDoctor", "Output", nullptr));
        menuPort->setTitle(QApplication::translate("SerialDoctor", "Port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialDoctor: public Ui_SerialDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALDOCTORDIALOG_H
