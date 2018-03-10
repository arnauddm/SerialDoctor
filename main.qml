import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.0
import QtQuick.Controls 1.4
import QtQuick.Controls 2.3

ApplicationWindow {
    visible: true
    width: 1024
    height: 640
    title: qsTr("SerialDoctor")

	header: ToolBar {
		Button {
				text: qsTr("Add")
		}
	}

	SplitView {
		orientation: Qt.Horizontal
		anchors.fill: parent

		LeftLayout {
			id: commandPort
			width: parent.width / 2
		}

		TextEditor {
			id: output
			width: parent.width / 2
		}
	}
}
