import QtQuick 2.7
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3
import QtQuick.Controls.Styles 1.4

Column {
id: rootLeft
spacing: 40

    Column {
		spacing: 10
		width: parent.width
        TextEdit {
			anchors.horizontalCenter: parent.horizontalCenter
			id: returnScan
			text: qsTr("Here, the scan")
        }

        Button {
			anchors.horizontalCenter: parent.horizontalCenter
            text: qsTr("Refresh scan")
			id: refreshScanButton

			onClicked: {
				returnScan.text= qsTr("Scanned")
			}
        }
    }

    Column {
		spacing: 10
		anchors.horizontalCenter: parent.horizontalCenter
        Row {
			id: portNameRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10
            Label {
				id: portNameLabel
				anchors.verticalCenter: parent.verticalCenter
                text: qsTr("Port Name")
            }

            TextField {
				id: portNameTextEdit
				placeholderText: qsTr("Enter the port name")
            }
        }

        Row {
			id: baudRateRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10
            Label {
				id: baudRateLabel
				anchors.verticalCenter: parent.verticalCenter
                text: qsTr("BaudRate")
            }

            ComboBox {
				id: baudRateComboBox
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: parityRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10
            Label {
				id: parityLabel
				anchors.verticalCenter: parent.verticalCenter
                text: qsTr("Parity")
            }

            ComboBox {
				id: parityComboBox
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: flowControlRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10
            Label {
				id: flowControlLabel
				anchors.verticalCenter: parent.verticalCenter
                text: qsTr("Flow Control")
            }

            ComboBox {
				id: flowControlComboBox
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: stopBitsRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10
            Label {
				id: stopBitsLabel
				anchors.verticalCenter: parent.verticalCenter
                text: qsTr("Stop Bits")
            }

            ComboBox {
				id: stopBitsComboBox
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: dataBitsRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10
            Label {
				id: dataBitsLabel
				anchors.verticalCenter: parent.verticalCenter
                text: qsTr("Data Bits")
            }

            ComboBox {
				id: dataBitsComboBox
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: modeRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10
            Label {
				id: modeLabel
				anchors.verticalCenter: parent.verticalCenter
                text: qsTr("Mode")
            }

            ComboBox {
				id: modeComboBox
				model: [ "test1" , "test2" ]
            }
        }
    }
}
