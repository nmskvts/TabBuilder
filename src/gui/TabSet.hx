package src.gui;

import openfl.display.Sprite;
import src.factory.ButtonFactory;
import src.shape.Rectangle;

/**
 * ...
 * @author Anastasia
 */
class TabSet extends Sprite
{
	private var tabSet:Array<TabButton> = new Array();
	private final tabNum = 3;
	private var rect:Rectangle;
	
	
	public function new() 
	{
		super();
		rect = new Rectangle(0, 0, 1280, 90, 0);
		createAll(tabNum);
		addChild(rect);
		addAll();
	}
	
	private function createAll(num:Int) {
        var x = 20;
        var width = 250;
        for (i in 1...num + 1){
            tabSet.push(ButtonFactory.createTab("Tab #"+ i, width, 60, x, 20));
            x += width + 5;
            
        }
    }
    private function addAll() {
        for(tab in tabSet){
            tab.setTab(this);
            addChild(tab);
        }
    }
	
	public function isClicked(tabButton:TabButton) {
        for(tab in tabSet){
            if(tabButton != tab){
                tab.setSelected(false);
            }
        }
    }
	
	public function getTabSet() {
		return tabSet;
	}
}