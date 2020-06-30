package;

import mvc.controller.ButtonController;
import mvc.view.Grid;
import openfl.display.Sprite;
import src.gui.TabSet;
import openfl.events.MouseEvent;


/**
 * ...
 * @author Anastasia
 */
class Main extends Sprite 
{
	private var tabSet:TabSet;
	private var grid:Grid;
	private var buttonController:ButtonController;
	
	public function new() 
	{
		super();
		tabSet = new TabSet();
		grid = new Grid();
		buttonController = new ButtonController(grid, this);
		grid.y = tabSet.height;
		
		for (tab in tabSet.getTabSet()) {
			tab.addEventListener(MouseEvent.CLICK,function (e:Dynamic){
			buttonController.tabClick();
			});
		}
		
		addChild(tabSet);
		addChild(grid);
		
	}

}
