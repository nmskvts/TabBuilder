package src.factory;

import mvc.view.GridButton;
import src.gui.Button;
import src.gui.TabButton;
/**
 * ...
 * @author Anastasia
 */
class ButtonFactory 
{
	
	public static function createTab(text:String, width:Float, height:Float, ?x:Float = 0, ?y:Float = 0):TabButton {
		return new TabButton(text, width, height, x, y);
	}
	
	public static function createGrid(text:String, path:String, width:Float, height:Float, ?x:Float=0, ?y:Float=0):GridButton {
        return new GridButton(x, y, text, path, width, height);
    }
	
	public static function create(text:String, width:Float, height:Float, color:Int, ?x:Float=0, ?y:Float=0):Button {
        return new Button(text, width, height, color, x, y);
        
    }
	
}