package mvc.view;

import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import mvc.view.GridButton;
import src.shape.Rectangle;
import openfl.display.Sprite;

/**
 * ...
 * @author Anastasia
 */
class Grid extends Sprite
{
	private var rect:Rectangle;
    private final rows = 4;
    private final columns = 4;
    private var rowsLeft:Int;
    private var columnsLeft:Int;
    private var xStep:Float;
    private var yStep:Float;
    private var gridWidth:Float;
    private var gridHeight:Float;
    private var bitMap:Bitmap;
    private var bitMapData:BitmapData;
	
    public function new() {
        super();
        gridWidth = 1000;
        gridHeight = 400;
        rowsLeft = rows;
        columnsLeft = columns;
        xStep = 5;
        yStep = 5;
        
    }
    public function addNewGridButton(button:GridButton) {
        if(columnsLeft > 0){
            if(rowsLeft > 0){
                addGridButton(xStep,yStep,button);
                xStep += button.width + 5;
                rowsLeft--;
            }
            else {
                xStep = 5;
                yStep += button.height +5;
                columnsLeft--;
                rowsLeft = rows;
                addNewGridButton(button);
            }
        }
    }
    private function addGridButton(xStep:Float, yStep:Float, button:GridButton) {
                button.x = xStep;
                button.y = yStep;
                addChild(button);
    }
    public function clean() {
        removeChildren();
        rowsLeft = rows;
        columnsLeft = columns;
        xStep = 5;
        yStep = 5;
    }
    public function addBackGroundImage(path:String) {
        removeChildren();
        this.bitMapData = Assets.getBitmapData(path);
        this.bitMap = new Bitmap(bitMapData);
        var scaleY = gridHeight / bitMap.height;
        var scaleX = gridWidth / bitMap.width;
        if(scaleX > scaleY){
            bitMap.scaleX = scaleY;
            bitMap.scaleY = scaleY;
        }
        else{
            bitMap.scaleX = scaleX;
            bitMap.scaleY = scaleX;
        }
        addChild(bitMap);
    }
	
	
}