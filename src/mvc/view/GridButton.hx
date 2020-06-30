package mvc.view;

import src.shape.Rectangle;
import src.factory.TextFactory;
import src.gui.Button;
import openfl.events.MouseEvent;
import openfl.Assets;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
/**
 * ...
 * @author Anastasia
 */
class GridButton extends Button
{

	private var path:String;
    private var bitMap:Bitmap;
    private var bitMapData:BitmapData;
    
    public function new(?x:Float=0, ?y:Float=0, text:String, path:String, width:Float, height:Float) {
        this.path = path;
        super(text, width, height, 0);
        this.x = x;
        this.y = y;
        
    }
    override function build() {
        this.bitMapData = Assets.getBitmapData(path);
        this.bitMap = new Bitmap(bitMapData);
        bitMap.height = 100;
        bitMap.width = 100;
        
        addChild(bitMap);
        
        textField = TextFactory.createTextField(text, 100);
        textField.y = 0;
        addChild(textField);

    }
    override function repaint() {
        
    }
    public function getImagePath():String {
        return this.path;
    }
	
}