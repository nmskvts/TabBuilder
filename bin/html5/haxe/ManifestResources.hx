package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy18:img%2FIMG_0130.jpgy4:sizei2276596y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y29:img%2FIMG_20190726_121755.jpgR2i349015R3R4R5R7R6tgoR0y29:img%2FIMG_20190729_171736.jpgR2i908375R3R4R5R8R6tgoR0y29:img%2FIMG_20190808_115241.jpgR2i2468356R3R4R5R9R6tgoR0y29:img%2FIMG_20190812_203441.jpgR2i2757317R3R4R5R10R6tgoR0y29:img%2FIMG_20190825_132336.jpgR2i1871216R3R4R5R11R6tgoR0y29:img%2FIMG_20191002_115417.jpgR2i1776355R3R4R5R12R6tgoR0y29:img%2FIMG_20191018_140401.jpgR2i1152141R3R4R5R13R6tgoR0y29:img%2FIMG_20191101_212458.jpgR2i2690501R3R4R5R14R6tgoR0y29:img%2FIMG_20191201_164951.jpgR2i2280642R3R4R5R15R6tgoR0y29:img%2FIMG_20191209_204641.jpgR2i1733658R3R4R5R16R6tgoR0y29:img%2FIMG_20200116_123350.jpgR2i1656942R3R4R5R17R6tgoR0y29:img%2FIMG_20200229_163022.jpgR2i2998289R3R4R5R18R6tgoR0y29:img%2FIMG_20200416_145303.jpgR2i1628541R3R4R5R19R6tgoR0y39:img%2FIMG_20200419_135043%20%281%29.jpgR2i3665112R3R4R5R20R6tgoR0y29:img%2FIMG_20200523_211119.jpgR2i876397R3R4R5R21R6tgoR0y14:xml%2Finfo.xmlR2i737R3y4:TEXTR5R22R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_0130_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20190726_121755_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20190729_171736_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20190808_115241_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20190812_203441_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20190825_132336_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20191002_115417_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20191018_140401_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20191101_212458_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20191201_164951_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20191209_204641_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20200116_123350_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20200229_163022_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20200416_145303_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20200419_135043__1__jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__img_img_20200523_211119_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__xml_info_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:image("assets/img/IMG_0130.jpg") @:noCompletion #if display private #end class __ASSET__img_img_0130_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20190726_121755.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20190726_121755_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20190729_171736.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20190729_171736_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20190808_115241.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20190808_115241_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20190812_203441.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20190812_203441_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20190825_132336.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20190825_132336_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20191002_115417.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20191002_115417_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20191018_140401.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20191018_140401_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20191101_212458.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20191101_212458_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20191201_164951.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20191201_164951_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20191209_204641.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20191209_204641_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20200116_123350.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20200116_123350_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20200229_163022.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20200229_163022_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20200416_145303.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20200416_145303_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20200419_135043 (1).jpg") @:noCompletion #if display private #end class __ASSET__img_img_20200419_135043__1__jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/IMG_20200523_211119.jpg") @:noCompletion #if display private #end class __ASSET__img_img_20200523_211119_jpg extends lime.graphics.Image {}
@:keep @:file("assets/xml/info.xml") @:noCompletion #if display private #end class __ASSET__xml_info_xml extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)

#if html5

#else

#end

#end
#end

#end
