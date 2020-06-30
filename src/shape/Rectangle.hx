package src.shape;

import openfl.display.Shape;
import openfl.display.Sprite;
/**
 * ...
 * @author Anastasia
 */
class Rectangle extends Shape
{
	private var color:Int;
    private var lastX:Float;
    private var lastY:Float;
    private var lastWidth:Float;
    private var lastHeight:Float;
	
    public function new(x:Float,y:Float,width:Float,height:Float,?color:Int) {
        super();
        this.lastX = x;
        this.lastY = y;
        this.lastWidth = width;
        this.lastHeight = height;
		setColor(color);
		
    }
    
    public function setColor(color) {
        this.color = color;
        graphics.clear();
        graphics.beginFill(color);
        graphics.drawRect(lastX, lastY, lastWidth, lastHeight);
    }
	
}