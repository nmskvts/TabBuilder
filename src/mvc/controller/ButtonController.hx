package mvc.controller;


import mvc.view.Grid;
import mvc.view.GridButton;
import mvc.view.MessageBox;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import haxe.xml.Access;
import src.factory.ButtonFactory;
import openfl.Assets;
/**
 * ...
 * @author Anastasia
 */
class ButtonController 
{

	private var grid:Grid;
    private var elementIterator:Iterator<Xml>;
    private var gridButtons = new Array<GridButton>();
    private var mainSprite:Sprite;
	
    public function new(grid:Grid, mainSprite:Sprite) {
        this.grid = grid;
        this.mainSprite = mainSprite;
        elementIterator = Xml.parse(Assets.getText("xml/info.xml")).elements();
        loadImages();
    }
	
    private function loadImages() {
        while (elementIterator.hasNext()){
            var number=1;
			var paths = new Access(elementIterator.next()).nodes.path;
            for(path in paths){
                var newGridButton = ButtonFactory.createGrid("Kitty #"+ number, path.innerData, 0, 0);
                newGridButton.addEventListener(MouseEvent.CLICK, function (e:Dynamic){
                    grid.addBackGroundImage(newGridButton.getImagePath());
                    createMessageBox(newGridButton.getText());
                });
                gridButtons.push(newGridButton);
                number++;
            }  
        }
    }
	
    private function createMessageBox(text:String) {
        var messageBox = new MessageBox(text ,mainSprite.width, mainSprite.height);
        mainSprite.addChild(messageBox);
        messageBox.getCloseButton().addEventListener(MouseEvent.CLICK, function (e:Dynamic){
            mainSprite.removeChild(messageBox);
        });
    }
    public function tabClick() {
        grid.clean();
        for(button in gridButtons){
            grid.addNewGridButton(button);
        }
	}
	
}