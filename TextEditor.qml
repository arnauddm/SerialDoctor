import QtQuick 2.7

Flickable {
    id: flick

	property string sText
	property int borderMargin

    width: 300; height: 200;
    contentWidth: edit.paintedWidth
    contentHeight: edit.paintedHeight
    clip: true

    function ensureVisible(r)
    {
        if (contentX >= r.x)
         contentX = r.x;
        else if (contentX+width <= r.x+r.width)
         contentX = r.x+r.width-width;
        if (contentY >= r.y)
         contentY = r.y;
        else if (contentY+height <= r.y+r.height)
        contentY = r.y+r.height-height;
    }

	Rectangle {
		id: rect
		border.width: borderMargin
		TextEdit {
			id: edit
			width: flick.width
			height: flick.height
			focus: true
			wrapMode: TextEdit.Wrap
			onCursorRectangleChanged: flick.ensureVisible(cursorRectangle)
			text: sText
		}
	}
}