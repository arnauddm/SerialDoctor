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
    QLabel *label_6;
    QLineEdit *PortNameLineEdit;
    QComboBox *DataBitsComboBox;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_5;
    QComboBox *StopBitsComboBox;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *FlowControlComboBox;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *BaudRateComboBox;
    QComboBox *ParityComboBox;
    QPushButton *OpenConnectionPushButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
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
        label_6 = new QLabel(ConnectionGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        PortNameLineEdit = new QLineEdit(ConnectionGroupBox);
        PortNameLineEdit->setObjectName(QStringLiteral("PortNameLineEdit"));

        gridLayout->addWidget(PortNameLineEdit, 0, 2, 1, 1);

        DataBitsComboBox = new QComboBox(ConnectionGroupBox);
        DataBitsComboBox->addItem(QString());
        DataBitsComboBox->addItem(QString());
        DataBitsComboBox->addItem(QString());
        DataBitsComboBox->addItem(QString());
        DataBitsComboBox->addItem(QString());
        DataBitsComboBox->setObjectName(QStringLiteral("DataBitsComboBox"));

        gridLayout->addWidget(DataBitsComboBox, 2, 2, 1, 1);

        label_2 = new QLabel(ConnectionGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(ConnectionGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_5 = new QLabel(ConnectionGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        StopBitsComboBox = new QComboBox(ConnectionGroupBox);
        StopBitsComboBox->addItem(QString());
        StopBitsComboBox->addItem(QString());
        StopBitsComboBox->addItem(QString());
        StopBitsComboBox->addItem(QString());
        StopBitsComboBox->setObjectName(QStringLiteral("StopBitsComboBox"));

        gridLayout->addWidget(StopBitsComboBox, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        FlowControlComboBox = new QComboBox(ConnectionGroupBox);
        FlowControlComboBox->addItem(QString());
        FlowControlComboBox->addItem(QString());
        FlowControlComboBox->addItem(QString());
        FlowControlComboBox->addItem(QString());
        FlowControlComboBox->setObjectName(QStringLiteral("FlowControlComboBox"));

        gridLayout->addWidget(FlowControlComboBox, 3, 2, 1, 1);

        label_3 = new QLabel(ConnectionGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(ConnectionGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        BaudRateComboBox = new QComboBox(ConnectionGroupBox);
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->addItem(QString());
        BaudRateComboBox->setObjectName(QStringLiteral("BaudRateComboBox"));

        gridLayout->addWidget(BaudRateComboBox, 1, 2, 1, 1);

        ParityComboBox = new QComboBox(ConnectionGroupBox);
        ParityComboBox->addItem(QString());
        ParityComboBox->addItem(QString());
        ParityComboBox->addItem(QString());
        ParityComboBox->addItem(QString());
        ParityComboBox->addItem(QString());
        ParityComboBox->addItem(QString());
        ParityComboBox->setObjectName(QStringLiteral("ParityComboBox"));

        gridLayout->addWidget(ParityComboBox, 5, 2, 1, 1);

        OpenConnectionPushButton = new QPushButton(ConnectionGroupBox);
        OpenConnectionPushButton->setObjectName(QStringLiteral("OpenConnectionPushButton"));

        gridLayout->addWidget(OpenConnectionPushButton, 6, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);


        gridLayout_3->addWidget(ConnectionGroupBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_7, 0, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_4->addWidget(pushButton, 2, 1, 1, 2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 1, 0, 1, 4);


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
        label_6->setText(QApplication::translate("SerialDoctor", "Parity", nullptr));
        DataBitsComboBox->setItemText(0, QApplication::translate("SerialDoctor", "Unknown", nullptr));
        DataBitsComboBox->setItemText(1, QApplication::translate("SerialDoctor", "5", nullptr));
        DataBitsComboBox->setItemText(2, QApplication::translate("SerialDoctor", "6", nullptr));
        DataBitsComboBox->setItemText(3, QApplication::translate("SerialDoctor", "7", nullptr));
        DataBitsComboBox->setItemText(4, QApplication::translate("SerialDoctor", "8", nullptr));

        label_2->setText(QApplication::translate("SerialDoctor", "Baud Rate", nullptr));
        label->setText(QApplication::translate("SerialDoctor", "Port Name", nullptr));
        label_5->setText(QApplication::translate("SerialDoctor", "Stop Bits", nullptr));
        StopBitsComboBox->setItemText(0, QApplication::translate("SerialDoctor", "Unknown", nullptr));
        StopBitsComboBox->setItemText(1, QApplication::translate("SerialDoctor", "One stop", nullptr));
        StopBitsComboBox->setItemText(2, QApplication::translate("SerialDoctor", "One and Half stop", nullptr));
        StopBitsComboBox->setItemText(3, QApplication::translate("SerialDoctor", "Two stop", nullptr));

        FlowControlComboBox->setItemText(0, QApplication::translate("SerialDoctor", "Unknown", nullptr));
        FlowControlComboBox->setItemText(1, QApplication::translate("SerialDoctor", "No Flow Control", nullptr));
        FlowControlComboBox->setItemText(2, QApplication::translate("SerialDoctor", "Software Control", nullptr));
        FlowControlComboBox->setItemText(3, QApplication::translate("SerialDoctor", "Hardware Control", nullptr));

        label_3->setText(QApplication::translate("SerialDoctor", "Data Bits", nullptr));
        label_4->setText(QApplication::translate("SerialDoctor", "Flow Control", nullptr));
        BaudRateComboBox->setItemText(0, QApplication::translate("SerialDoctor", "Unknown", nullptr));
        BaudRateComboBox->setItemText(1, QApplication::translate("SerialDoctor", "1200", nullptr));
        BaudRateComboBox->setItemText(2, QApplication::translate("SerialDoctor", "2400", nullptr));
        BaudRateComboBox->setItemText(3, QApplication::translate("SerialDoctor", "4800", nullptr));
        BaudRateComboBox->setItemText(4, QApplication::translate("SerialDoctor", "9600", nullptr));
        BaudRateComboBox->setItemText(5, QApplication::translate("SerialDoctor", "19200", nullptr));
        BaudRateComboBox->setItemText(6, QApplication::translate("SerialDoctor", "38400", nullptr));
        BaudRateComboBox->setItemText(7, QApplication::translate("SerialDoctor", "57600", nullptr));
        BaudRateComboBox->setItemText(8, QApplication::translate("SerialDoctor", "115200", nullptr));

        ParityComboBox->setItemText(0, QApplication::translate("SerialDoctor", "Unknown", nullptr));
        ParityComboBox->setItemText(1, QApplication::translate("SerialDoctor", "No Parity", nullptr));
        ParityComboBox->setItemText(2, QApplication::translate("SerialDoctor", "Even Parity", nullptr));
        ParityComboBox->setItemText(3, QApplication::translate("SerialDoctor", "Odd Parity", nullptr));
        ParityComboBox->setItemText(4, QApplication::translate("SerialDoctor", "Space Parity", nullptr));
        ParityComboBox->setItemText(5, QApplication::translate("SerialDoctor", "Mark Parity", nullptr));

        OpenConnectionPushButton->setText(QApplication::translate("SerialDoctor", "Open", nullptr));
        groupBox->setTitle(QApplication::translate("SerialDoctor", "GroupBox", nullptr));
        label_7->setText(QApplication::translate("SerialDoctor", "Enter your command :", nullptr));
        pushButton->setText(QApplication::translate("SerialDoctor", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialDoctor: public Ui_SerialDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALDOCTORDIALOG_H
