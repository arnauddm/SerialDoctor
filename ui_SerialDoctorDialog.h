/********************************************************************************
** Form generated from reading UI file 'SerialDoctorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALDOCTORDIALOG_H
#define UI_SERIALDOCTORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialDoctor
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGroupBox *scanGroupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *ReturnScanTextEdit;
    QPushButton *RefreshScanPushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *OutputTextEdit;
    QGroupBox *ConnectionGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *OpenConnectionPushButton;
    QLabel *label_6;
    QComboBox *BaudRateComboBox;
    QComboBox *ParityComboBox;
    QLineEdit *PortNameLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *FlowControlComboBox;
    QLabel *label_5;
    QLabel *label_2;
    QComboBox *StopBitsComboBox;
    QComboBox *DataBitsComboBox;
    QLabel *label_8;
    QComboBox *ModeComboBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *SendCommandPushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *CommandlineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SerialDoctor)
    {
        if (SerialDoctor->objectName().isEmpty())
            SerialDoctor->setObjectName(QStringLiteral("SerialDoctor"));
        SerialDoctor->resize(883, 702);
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


        gridLayout_3->addWidget(groupBox_2, 0, 1, 3, 1);

        ConnectionGroupBox = new QGroupBox(centralWidget);
        ConnectionGroupBox->setObjectName(QStringLiteral("ConnectionGroupBox"));
        gridLayout = new QGridLayout(ConnectionGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label = new QLabel(ConnectionGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        OpenConnectionPushButton = new QPushButton(ConnectionGroupBox);
        OpenConnectionPushButton->setObjectName(QStringLiteral("OpenConnectionPushButton"));

        gridLayout->addWidget(OpenConnectionPushButton, 7, 2, 1, 1);

        label_6 = new QLabel(ConnectionGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        BaudRateComboBox = new QComboBox(ConnectionGroupBox);
        BaudRateComboBox->setObjectName(QStringLiteral("BaudRateComboBox"));

        gridLayout->addWidget(BaudRateComboBox, 1, 2, 1, 1);

        ParityComboBox = new QComboBox(ConnectionGroupBox);
        ParityComboBox->setObjectName(QStringLiteral("ParityComboBox"));

        gridLayout->addWidget(ParityComboBox, 5, 2, 1, 1);

        PortNameLineEdit = new QLineEdit(ConnectionGroupBox);
        PortNameLineEdit->setObjectName(QStringLiteral("PortNameLineEdit"));

        gridLayout->addWidget(PortNameLineEdit, 0, 2, 1, 1);

        label_3 = new QLabel(ConnectionGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(ConnectionGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        FlowControlComboBox = new QComboBox(ConnectionGroupBox);
        FlowControlComboBox->setObjectName(QStringLiteral("FlowControlComboBox"));

        gridLayout->addWidget(FlowControlComboBox, 3, 2, 1, 1);

        label_5 = new QLabel(ConnectionGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        label_2 = new QLabel(ConnectionGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        StopBitsComboBox = new QComboBox(ConnectionGroupBox);
        StopBitsComboBox->setObjectName(QStringLiteral("StopBitsComboBox"));

        gridLayout->addWidget(StopBitsComboBox, 4, 2, 1, 1);

        DataBitsComboBox = new QComboBox(ConnectionGroupBox);
        DataBitsComboBox->setObjectName(QStringLiteral("DataBitsComboBox"));

        gridLayout->addWidget(DataBitsComboBox, 2, 2, 1, 1);

        label_8 = new QLabel(ConnectionGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 6, 1, 1, 1);

        ModeComboBox = new QComboBox(ConnectionGroupBox);
        ModeComboBox->setObjectName(QStringLiteral("ModeComboBox"));

        gridLayout->addWidget(ModeComboBox, 6, 2, 1, 1);


        gridLayout_3->addWidget(ConnectionGroupBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        SendCommandPushButton = new QPushButton(groupBox);
        SendCommandPushButton->setObjectName(QStringLiteral("SendCommandPushButton"));

        gridLayout_4->addWidget(SendCommandPushButton, 2, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        CommandlineEdit = new QLineEdit(groupBox);
        CommandlineEdit->setObjectName(QStringLiteral("CommandlineEdit"));

        gridLayout_4->addWidget(CommandlineEdit, 1, 0, 1, 4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_7, 0, 1, 1, 2);


        gridLayout_3->addWidget(groupBox, 2, 0, 1, 1);

        SerialDoctor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SerialDoctor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 883, 22));
        SerialDoctor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SerialDoctor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SerialDoctor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SerialDoctor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SerialDoctor->setStatusBar(statusBar);

        retranslateUi(SerialDoctor);

        QMetaObject::connectSlotsByName(SerialDoctor);
    } // setupUi

    void retranslateUi(QMainWindow *SerialDoctor)
    {
        SerialDoctor->setWindowTitle(QApplication::translate("SerialDoctor", "SerialDoctor", nullptr));
        scanGroupBox->setTitle(QApplication::translate("SerialDoctor", "Scan", nullptr));
        RefreshScanPushButton->setText(QApplication::translate("SerialDoctor", "Refresh", nullptr));
        groupBox_2->setTitle(QApplication::translate("SerialDoctor", "Output", nullptr));
        ConnectionGroupBox->setTitle(QApplication::translate("SerialDoctor", "Open connection", nullptr));
        label->setText(QApplication::translate("SerialDoctor", "Port Name", nullptr));
        OpenConnectionPushButton->setText(QApplication::translate("SerialDoctor", "Open", nullptr));
        label_6->setText(QApplication::translate("SerialDoctor", "Parity", nullptr));
        label_3->setText(QApplication::translate("SerialDoctor", "Data Bits", nullptr));
        label_4->setText(QApplication::translate("SerialDoctor", "Flow Control", nullptr));
        label_5->setText(QApplication::translate("SerialDoctor", "Stop Bits", nullptr));
        label_2->setText(QApplication::translate("SerialDoctor", "Baud Rate", nullptr));
        label_8->setText(QApplication::translate("SerialDoctor", "Mode", nullptr));
        groupBox->setTitle(QApplication::translate("SerialDoctor", "GroupBox", nullptr));
        SendCommandPushButton->setText(QApplication::translate("SerialDoctor", "Send command", nullptr));
        label_7->setText(QApplication::translate("SerialDoctor", "Enter your command :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialDoctor: public Ui_SerialDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALDOCTORDIALOG_H
