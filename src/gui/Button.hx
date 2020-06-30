package src.gui;

import openfl.display.Sprite;
import src.shape.Rectangle;
import src.factory.TextFactory;
import openfl.text.TextFormatAlign;
import openfl.text.TextFormat;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextField;
import openfl.events.MouseEvent;
/**
 * ...
 * @author Anastasia
 */
class Button extends Sprite
{
	private var text:String;
    private var rectWidth:Float;
    private var rectHeight:Float;
    private var rectColor:Int;
    
    private var selected = false;
    private var selectedColor:Int;
    private var rect:Rectangle;
    private var textField:TextField;
	
    public function new(text:String, width:Float, height:Float, color:Int, ?x:Float=0, ?y:Float=0) {
        super();
        this.text = text;
        this.rectColor = color;
        this.rectWidth = width;
        this.rectHeight = height;
        this.x = x;
        this.y = y;
		build();
	}
	
	private function build() {
		rect = new Rectangle(0, 0, rectWidth, rectHeight, rectColor);
        addChild(rect);
        textField = TextFactory.createTextField(text, rectWidth);
        textField.y = rectHeight/2 - textField.getTextFormat().size;
        addChild(textField);
        addEventListener(MouseEvent.CLICK, click);
	}
	
    private function repaint() {
        rect.setColor(rectColor);
    }
	
    private function click(e:Dynamic) {
        if(!selected){
            selected = true;
            rect.setColor(selectedColor);
        }
        else {
            selected = false;
            rect.setColor(rectColor);
		}
        
    }
    
    public function setClickFunc(listener) {
        addEventListener(MouseEvent.CLICK, listener);
        
    }
	
    public function setText(text:String){
        textField.text = text;
    }
	
    public function getText():String {
        return this.text;
    }

    public function setColor(color:Int) {
        this.rectColor = color;
        repaint();
    }
	
    public function setSelectedColor(color:Int) {
        this.selectedColor = color;
        repaint();
    }
	
    public function setSelected(isSelected:Bool) {
        this.selected=isSelected;
        if(!isSelected){
            setColor(rectColor);
        }
    }
}