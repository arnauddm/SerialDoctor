import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.0

ApplicationWindow {
    visible: true
    width: 1024
    height: 640
    title: qsTr("SerialDoctor")

	RowLayout {
		anchors.centerIn: parent
		spacing: parent.width / 4

        LeftLayout {
			width: parent.width / 2
		}

		TextEdit {
			width: parent.width / 2
			text: qsTr("Output text")
		}
	}

}
