package src.factory;

import openfl.text.TextFormatAlign;
import openfl.text.TextFormat;
import openfl.text.TextField;
/**
 * ...
 * @author Anastasia
 */
class TextFactory 
{

	public static function createTextField(text:String, width:Float, ?textColor:Int=0xff000000):TextField {
        var textField = new TextField();
        textField.width = width;
        textField.selectable = false;
        textField.text = text;
        textField.setTextFormat(getTextFormat(textColor));
        return textField; 
    }


    private static function getTextFormat(textColor:Int):TextFormat {
        var format = new TextFormat();
        format.color = textColor;
        format.font = null;
        format.bold = true;
        format.align = TextFormatAlign.CENTER;
        format.size = 20;
        return format;
    }
	
}