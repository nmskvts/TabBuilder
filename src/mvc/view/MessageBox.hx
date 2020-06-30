package mvc.view;

import src.factory.TextFactory;
import openfl.text.TextField;
import src.factory.ButtonFactory;
import src.gui.Button;
import src.shape.Rectangle;
import openfl.display.Sprite;
/**
 * ...
 * @author Anastasia
 */
class MessageBox extends Sprite
{

	private var rect:Rectangle;
    private var closeButton:Button;
    private var textField:TextField;
    private final boxWidth=250;
    private final boxHeight = 100;
	
    public function new(text:String, ?parentWidth:Float=0, ?parentHeight:Float=0) {
        super();
        this.x = parentWidth/2 - boxWidth/2;
        this.y = parentHeight/2 - boxHeight/2;
        this.rect = new Rectangle(0, 0, boxWidth, 100, 0xFFFFFF);
        this.closeButton = ButtonFactory.create("OK", boxHeight, 40, 0x505050, 75, 55);
        this.textField = TextFactory.createTextField(text, boxWidth, 0x000000);
        textField.y = 5;
        addChild(rect);
        addChild(textField);
        addChild(closeButton);

    }
	
    public function getCloseButton():Button {
        return closeButton;
    }
	
}