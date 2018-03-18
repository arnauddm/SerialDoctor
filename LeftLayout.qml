import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3
import QtQuick.Controls.Material 2.0

Column {
width: 500
id: rootLeft
spacing: 40

property int iPadding: 50
property alias scan: returnScan.sText

    ColumnLayout {
		spacing: 10
		width: parent.width

        TextEditor {
			anchors.horizontalCenter: parent.horizontalCenter
			id: returnScan
			width: parent.width
			height: 125
			sText: rootLeft.width
        }

		Button {
			anchors.horizontalCenter: parent.horizontalCenter
			id: refreshScanButton
			text: qsTr("Refresh")
			x: (parent.width / 2) - (width / 2)
		}

    }

    Column {
		spacing: 5
		anchors.horizontalCenter: parent.horizontalCenter
		width: parent.width - iPadding * 2
		x: iPadding
		y: iPadding

		TextField {
			id: portNameTextEdit
			anchors.horizontalCenter: parent.horizontalCenter
			width: parent.width / 2
			placeholderText: qsTr("Enter port name...")
		}

        Row {
			id: baudRateRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10

            Text {
				id: baudRateLabel
				anchors.verticalCenter: parent.verticalCenter
				horizontalAlignment: Text.AlignRight
               	text: qsTr("BaudRate")
            }

            ComboBox {
				id: baudRateComboBox
				width: parent.parent.width / 3
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: parityRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10

            Text {
				id: parityLabel
				anchors.verticalCenter: parent.verticalCenter
				horizontalAlignment: Text.AlignRight
                text: qsTr("Parity")
            }

            ComboBox {
				id: parityComboBox
				width: parent.parent.width / 3
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: flowControlRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10

            Text {
				id: flowControlLabel
				anchors.verticalCenter: parent.verticalCenter
				horizontalAlignment: Text.AlignRight
                text: qsTr("Flow Control")
            }

            ComboBox {
				id: flowControlComboBox
				width: parent.parent.width / 3
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: stopBitsRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10

            Text {
				id: stopBitsLabel
				anchors.verticalCenter: parent.verticalCenter
				horizontalAlignment: Text.AlignRight
                text: qsTr("Stop Bits")
            }

            ComboBox {
				id: stopBitsComboBox
				width: parent.parent.width / 3
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: dataBitsRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10

            Text {
				id: dataBitsLabel
				anchors.verticalCenter: parent.verticalCenter
				horizontalAlignment: Text.AlignRight
                text: qsTr("Data Bits")
            }

            ComboBox {
				id: dataBitsComboBox
				width: parent.parent.width / 3
				model: [ "test1" , "test2" ]
            }
        }

        Row {
			id: modeRow
			anchors.horizontalCenter: parent.horizontalCenter
			spacing: 10

            Text {
				id: modeLabel
				anchors.verticalCenter: parent.verticalCenter
				horizontalAlignment: Text.AlignRight
                text: qsTr("Mode")
            }

            ComboBox {
				id: modeComboBox
				width: parent.parent.width  / 3
				model: [ "test1" , "test2" ]
            }
        }
    }
}
