package src.gui;

import openfl.events.MouseEvent;
/**
 * ...
 * @author Anastasia
 */
class TabButton extends Button
{
	
	private var tabSet:TabSet;

	public function new(text:String, width:Float, height:Float, ?x:Float=0, ?y:Float=0, ?color:Int=0xffffffff) 
	{
		super(text, width, height, color);
		this.x = x;
		this.y = y;
		setColor(color);
        setSelectedColor(0xff0000ff);
	}
	
	public function setTab(tabSet:TabSet) {
		this.tabSet = tabSet;
			addEventListener(MouseEvent.CLICK, function(e:Dynamic) {
				 tabSet.isClicked(this);
			});
	}
}