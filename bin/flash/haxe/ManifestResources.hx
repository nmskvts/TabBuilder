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

		data = '{"name":null,"assets":"aoy4:sizei2276596y4:typey5:IMAGEy9:classNamey25:__ASSET__img_img_0130_jpgy2:idy18:img%2FIMG_0130.jpggoR0i349015R1R2R3y36:__ASSET__img_img_20190726_121755_jpgR5y29:img%2FIMG_20190726_121755.jpggoR0i908375R1R2R3y36:__ASSET__img_img_20190729_171736_jpgR5y29:img%2FIMG_20190729_171736.jpggoR0i2468356R1R2R3y36:__ASSET__img_img_20190808_115241_jpgR5y29:img%2FIMG_20190808_115241.jpggoR0i2757317R1R2R3y36:__ASSET__img_img_20190812_203441_jpgR5y29:img%2FIMG_20190812_203441.jpggoR0i1871216R1R2R3y36:__ASSET__img_img_20190825_132336_jpgR5y29:img%2FIMG_20190825_132336.jpggoR0i1776355R1R2R3y36:__ASSET__img_img_20191002_115417_jpgR5y29:img%2FIMG_20191002_115417.jpggoR0i1152141R1R2R3y36:__ASSET__img_img_20191018_140401_jpgR5y29:img%2FIMG_20191018_140401.jpggoR0i2690501R1R2R3y36:__ASSET__img_img_20191101_212458_jpgR5y29:img%2FIMG_20191101_212458.jpggoR0i2280642R1R2R3y36:__ASSET__img_img_20191201_164951_jpgR5y29:img%2FIMG_20191201_164951.jpggoR0i1733658R1R2R3y36:__ASSET__img_img_20191209_204641_jpgR5y29:img%2FIMG_20191209_204641.jpggoR0i1656942R1R2R3y36:__ASSET__img_img_20200116_123350_jpgR5y29:img%2FIMG_20200116_123350.jpggoR0i2998289R1R2R3y36:__ASSET__img_img_20200229_163022_jpgR5y29:img%2FIMG_20200229_163022.jpggoR0i1628541R1R2R3y36:__ASSET__img_img_20200416_145303_jpgR5y29:img%2FIMG_20200416_145303.jpggoR0i3665112R1R2R3y40:__ASSET__img_img_20200419_135043__1__jpgR5y39:img%2FIMG_20200419_135043%20%281%29.jpggoR0i876397R1R2R3y36:__ASSET__img_img_20200523_211119_jpgR5y29:img%2FIMG_20200523_211119.jpggoR0i737R1y4:TEXTR3y21:__ASSET__xml_info_xmlR5y14:xml%2Finfo.xmlgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
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
@:keep @:bind @:noCompletion #if display private #end class __ASSET__xml_info_xml extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


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
