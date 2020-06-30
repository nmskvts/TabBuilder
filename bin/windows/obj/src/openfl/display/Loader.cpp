// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_198_new,"openfl.display.Loader","new",0x0b8c4b6f,"openfl.display.Loader.new","openfl/display/Loader.hx",198,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_229_close,"openfl.display.Loader","close",0xeefbb487,"openfl.display.Loader.close","openfl/display/Loader.hx",229,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_389_load,"openfl.display.Loader","load",0x0deacc37,"openfl.display.Loader.load","openfl/display/Loader.hx",389,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_565_loadBytes,"openfl.display.Loader","loadBytes",0x5dd804b4,"openfl.display.Loader.loadBytes","openfl/display/Loader.hx",565,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_617_unload,"openfl.display.Loader","unload",0x847d3950,"openfl.display.Loader.unload","openfl/display/Loader.hx",617,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_672_unloadAndStop,"openfl.display.Loader","unloadAndStop",0x25cb8709,"openfl.display.Loader.unloadAndStop","openfl/display/Loader.hx",672,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_696___dispatchError,"openfl.display.Loader","__dispatchError",0xdd48591d,"openfl.display.Loader.__dispatchError","openfl/display/Loader.hx",696,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_703___setContent,"openfl.display.Loader","__setContent",0x7ea757e8,"openfl.display.Loader.__setContent","openfl/display/Loader.hx",703,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_723_BitmapData_onError,"openfl.display.Loader","BitmapData_onError",0x2d70cc54,"openfl.display.Loader.BitmapData_onError","openfl/display/Loader.hx",723,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_727_BitmapData_onLoad,"openfl.display.Loader","BitmapData_onLoad",0x9c5aef1a,"openfl.display.Loader.BitmapData_onLoad","openfl/display/Loader.hx",727,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_742_BitmapData_onProgress,"openfl.display.Loader","BitmapData_onProgress",0x8ecdd6a1,"openfl.display.Loader.BitmapData_onProgress","openfl/display/Loader.hx",742,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_750_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",750,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_777_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",777,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_792_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",792,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_821_loader_onError,"openfl.display.Loader","loader_onError",0x53aca80e,"openfl.display.Loader.loader_onError","openfl/display/Loader.hx",821,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_829_loader_onProgress,"openfl.display.Loader","loader_onProgress",0xfc1e8b27,"openfl.display.Loader.loader_onProgress","openfl/display/Loader.hx",829,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_89_boot,"openfl.display.Loader","boot",0x074eb643,"openfl.display.Loader.boot","openfl/display/Loader.hx",89,0x7a569d9f)
namespace openfl{
namespace display{

void Loader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_198_new)
HXLINE( 199)		super::__construct();
HXLINE( 201)		this->contentLoaderInfo = ::openfl::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));
HXLINE( 202)		this->uncaughtErrorEvents = this->contentLoaderInfo->uncaughtErrorEvents;
HXLINE( 203)		this->_hx___unloaded = true;
            	}

Dynamic Loader_obj::__CreateEmpty() { return new Loader_obj; }

void *Loader_obj::_hx_vtable = 0;

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Loader_obj > _hx_result = new Loader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Loader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			if (inClassId<=(int)0x17120186) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x17120186;
			} else {
				return inClassId==(int)0x19c29573;
			}
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3248531d || inClassId==(int)0x3f2b00af;
	}
}

void Loader_obj::close(){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_229_close)
HXDLIN( 229)		::openfl::_internal::Lib_obj::notImplemented(hx::SourceInfo(HX_("openfl/display/Loader.hx",9f,9d,56,7a),229,HX_("openfl.display.Loader",fd,67,b0,e2),HX_("close",b8,17,63,48)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,close,(void))

void Loader_obj::load( ::openfl::net::URLRequest request, ::openfl::_hx_system::LoaderContext context){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_389_load)
HXLINE( 390)		this->unload();
HXLINE( 392)		this->contentLoaderInfo->loaderURL = ::openfl::Lib_obj::get_current()->get_loaderInfo()->url;
HXLINE( 393)		this->contentLoaderInfo->url = request->url;
HXLINE( 394)		this->_hx___unloaded = false;
HXLINE( 396)		bool _hx_tmp;
HXDLIN( 396)		if (hx::IsNotNull( request->contentType )) {
HXLINE( 396)			_hx_tmp = (request->contentType == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 396)			_hx_tmp = true;
            		}
HXDLIN( 396)		if (_hx_tmp) {
HXLINE( 398)			::String extension = HX_("",00,00,00,00);
HXLINE( 399)			this->_hx___path = request->url;
HXLINE( 401)			int queryIndex = this->_hx___path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 402)			if ((queryIndex > -1)) {
HXLINE( 404)				this->_hx___path = this->_hx___path.substring(0,queryIndex);
            			}
HXLINE( 407)			while(::StringTools_obj::endsWith(this->_hx___path,HX_("/",2f,00,00,00))){
HXLINE( 409)				this->_hx___path = this->_hx___path.substring(0,(this->_hx___path.length - 1));
            			}
HXLINE( 412)			if (::StringTools_obj::endsWith(this->_hx___path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 414)				 ::openfl::display::Loader _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 414)				_hx_tmp1->_hx___path = (_hx_tmp1->_hx___path + HX_("/library.json",2a,a7,07,47));
HXLINE( 416)				if ((queryIndex > -1)) {
HXLINE( 418)					::String _hx_tmp2 = this->_hx___path;
HXDLIN( 418)					request->url = (_hx_tmp2 + request->url.substring(queryIndex,null()));
            				}
            				else {
HXLINE( 422)					request->url = this->_hx___path;
            				}
            			}
HXLINE( 426)			int extIndex = this->_hx___path.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 427)			if ((extIndex > -1)) {
HXLINE( 429)				extension = this->_hx___path.substring((extIndex + 1),null());
            			}
HXLINE( 432)			::String _hx_tmp3;
HXDLIN( 432)			::String _hx_switch_0 = extension;
            			if (  (_hx_switch_0==HX_("gif",04,84,4e,00)) ){
HXLINE( 432)				_hx_tmp3 = HX_("image/gif",10,f4,ba,16);
HXDLIN( 432)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("jpeg",a8,f2,65,46)) ||  (_hx_switch_0==HX_("jpg",e1,d0,50,00)) ){
HXLINE( 432)				_hx_tmp3 = HX_("image/jpeg",1c,8d,db,ce);
HXDLIN( 432)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("js",c9,5c,00,00)) ){
HXLINE( 432)				_hx_tmp3 = HX_("application/javascript",cc,7a,f4,a7);
HXDLIN( 432)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("json",28,42,68,46)) ){
HXLINE( 432)				_hx_tmp3 = HX_("application/json",87,d8,7f,4e);
HXDLIN( 432)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("png",a9,5c,55,00)) ){
HXLINE( 432)				_hx_tmp3 = HX_("image/png",b5,cc,c1,16);
HXDLIN( 432)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("swf",42,ab,57,00)) ){
HXLINE( 432)				_hx_tmp3 = HX_("application/x-shockwave-flash",ea,f3,47,4a);
HXDLIN( 432)				goto _hx_goto_3;
            			}
            			/* default */{
HXLINE( 432)				_hx_tmp3 = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
            			}
            			_hx_goto_3:;
HXDLIN( 432)			this->contentLoaderInfo->contentType = _hx_tmp3;
            		}
            		else {
HXLINE( 446)			this->contentLoaderInfo->contentType = request->contentType;
            		}
HXLINE( 463)		 ::openfl::net::URLLoader loader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 464)		loader->dataFormat = 0;
HXLINE( 466)		bool _hx_tmp4;
HXDLIN( 466)		bool _hx_tmp5;
HXDLIN( 466)		if ((this->contentLoaderInfo->contentType.indexOf(HX_("/json",d7,85,3d,56),null()) <= -1)) {
HXLINE( 466)			_hx_tmp5 = (this->contentLoaderInfo->contentType.indexOf(HX_("/javascript",1c,04,67,9b),null()) > -1);
            		}
            		else {
HXLINE( 466)			_hx_tmp5 = true;
            		}
HXDLIN( 466)		if (!(_hx_tmp5)) {
HXLINE( 466)			_hx_tmp4 = (this->contentLoaderInfo->contentType.indexOf(HX_("/ecmascript",ac,7b,0f,7d),null()) > -1);
            		}
            		else {
HXLINE( 466)			_hx_tmp4 = true;
            		}
HXDLIN( 466)		if (_hx_tmp4) {
HXLINE( 470)			loader->dataFormat = 1;
            		}
HXLINE( 473)		loader->addEventListener(HX_("complete",b9,00,c8,7f),this->loader_onComplete_dyn(),null(),null(),null());
HXLINE( 474)		loader->addEventListener(HX_("ioError",02,fe,41,76),this->loader_onError_dyn(),null(),null(),null());
HXLINE( 475)		loader->addEventListener(HX_("progress",ad,f7,2a,86),this->loader_onProgress_dyn(),null(),null(),null());
HXLINE( 476)		loader->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

void Loader_obj::loadBytes( ::openfl::utils::ByteArrayData buffer, ::openfl::_hx_system::LoaderContext context){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_565_loadBytes)
HXDLIN( 565)		::openfl::display::BitmapData_obj::loadFromBytes(buffer,null())->onComplete(this->BitmapData_onLoad_dyn())->onError(this->BitmapData_onError_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

void Loader_obj::unload(){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_617_unload)
HXDLIN( 617)		if (!(this->_hx___unloaded)) {
HXLINE( 619)			bool _hx_tmp;
HXDLIN( 619)			if (hx::IsNotNull( this->content )) {
HXLINE( 619)				_hx_tmp = hx::IsEq( this->content->parent,hx::ObjectPtr<OBJ_>(this) );
            			}
            			else {
HXLINE( 619)				_hx_tmp = false;
            			}
HXDLIN( 619)			if (_hx_tmp) {
HXLINE( 621)				this->super::removeChild(this->content);
            			}
HXLINE( 624)			if (hx::IsNotNull( this->_hx___library )) {
HXLINE( 626)				::openfl::utils::Assets_obj::unloadLibrary(this->contentLoaderInfo->url);
HXLINE( 627)				this->_hx___library = null();
            			}
HXLINE( 630)			this->content = null();
HXLINE( 631)			this->contentLoaderInfo->url = null();
HXLINE( 632)			this->contentLoaderInfo->contentType = null();
HXLINE( 633)			this->contentLoaderInfo->content = null();
HXLINE( 634)			this->contentLoaderInfo->bytesLoaded = 0;
HXLINE( 635)			this->contentLoaderInfo->bytesTotal = 0;
HXLINE( 636)			this->contentLoaderInfo->width = 0;
HXLINE( 637)			this->contentLoaderInfo->height = 0;
HXLINE( 638)			this->_hx___unloaded = true;
HXLINE( 640)			 ::openfl::display::LoaderInfo _hx_tmp1 = this->contentLoaderInfo;
HXDLIN( 640)			_hx_tmp1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

void Loader_obj::unloadAndStop(hx::Null< bool >  __o_gc){
            		bool gc = __o_gc.Default(true);
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_672_unloadAndStop)
HXLINE( 673)		if (hx::IsNotNull( this->content )) {
HXLINE( 675)			this->content->_hx___stopAllMovieClips();
            		}
HXLINE( 678)		{
HXLINE( 678)			int _g = 0;
HXDLIN( 678)			int _g1 = this->get_numChildren();
HXDLIN( 678)			while((_g < _g1)){
HXLINE( 678)				_g = (_g + 1);
HXDLIN( 678)				int i = (_g - 1);
HXLINE( 680)				this->getChildAt(i)->_hx___stopAllMovieClips();
            			}
            		}
HXLINE( 683)		this->unload();
HXLINE( 685)		if (gc) {
HXLINE( 688)			__hxcpp_collect(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadAndStop,(void))

void Loader_obj::_hx___dispatchError(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_696___dispatchError)
HXLINE( 697)		 ::openfl::events::IOErrorEvent event =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null());
HXLINE( 698)		event->text = text;
HXLINE( 699)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,_hx___dispatchError,(void))

void Loader_obj::_hx___setContent( ::openfl::display::DisplayObject content,int width,int height){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_703___setContent)
HXLINE( 704)		this->content = content;
HXLINE( 706)		this->contentLoaderInfo->content = content;
HXLINE( 707)		this->contentLoaderInfo->width = width;
HXLINE( 708)		this->contentLoaderInfo->height = height;
HXLINE( 710)		if (hx::IsNotNull( content )) {
HXLINE( 712)			this->super::addChildAt(content,0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,_hx___setContent,(void))

void Loader_obj::BitmapData_onError( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_723_BitmapData_onError)
HXDLIN( 723)		this->_hx___dispatchError(::Std_obj::string(error));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onError,(void))

void Loader_obj::BitmapData_onLoad( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_727_BitmapData_onLoad)
HXLINE( 730)		if (hx::IsNull( bitmapData )) {
HXLINE( 732)			this->_hx___dispatchError(HX_("Unknown error",92,0e,0f,10));
HXLINE( 733)			return;
            		}
HXLINE( 736)		this->_hx___setContent( ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bitmapData,null(),null()),bitmapData->width,bitmapData->height);
HXLINE( 738)		 ::openfl::display::LoaderInfo _hx_tmp = this->contentLoaderInfo;
HXDLIN( 738)		_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onLoad,(void))

void Loader_obj::BitmapData_onProgress(int bytesLoaded,int bytesTotal){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_742_BitmapData_onProgress)
HXLINE( 743)		 ::openfl::events::ProgressEvent event =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("progress",ad,f7,2a,86),null(),null(),null(),null());
HXLINE( 744)		event->bytesLoaded = ( (Float)(bytesLoaded) );
HXLINE( 745)		event->bytesTotal = ( (Float)(bytesTotal) );
HXLINE( 746)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,BitmapData_onProgress,(void))

void Loader_obj::loader_onComplete( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_750_loader_onComplete)
HXLINE( 749)		 ::openfl::display::Loader _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 753)		 ::openfl::net::URLLoader loader = ( ( ::openfl::net::URLLoader)(event->target) );
HXLINE( 756)		bool _hx_tmp;
HXDLIN( 756)		if (hx::IsNotNull( this->contentLoaderInfo->contentType )) {
HXLINE( 756)			_hx_tmp = (this->contentLoaderInfo->contentType.indexOf(HX_("/json",d7,85,3d,56),null()) > -1);
            		}
            		else {
HXLINE( 756)			_hx_tmp = false;
            		}
HXDLIN( 756)		if (_hx_tmp) {
HXLINE( 758)			 ::Dynamic loader1 = loader->data;
HXDLIN( 758)			 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::parse(( (::String)(loader1) ),::haxe::io::Path_obj::directory(this->_hx___path));
HXLINE( 760)			if (hx::IsNull( manifest )) {
HXLINE( 762)				this->_hx___dispatchError(HX_("Cannot parse asset manifest",49,e5,68,e9));
HXLINE( 763)				return;
            			}
HXLINE( 766)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 768)			if (hx::IsNull( library )) {
HXLINE( 770)				this->_hx___dispatchError(HX_("Cannot open library",c2,bb,9d,77));
HXLINE( 771)				return;
            			}
HXLINE( 774)			if (::Std_obj::is(library,hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
            				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::lime::utils::AssetManifest,manifest, ::openfl::display::Loader,_gthis, ::lime::utils::AssetLibrary,library) HXARGC(1)
            				void _hx_run( ::lime::utils::AssetLibrary _){
            					HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_777_loader_onComplete)
HXLINE( 778)					_gthis->_hx___library = ( ( ::openfl::utils::AssetLibrary)(library) );
HXLINE( 779)					::openfl::utils::Assets_obj::registerLibrary(_gthis->contentLoaderInfo->url,_gthis->_hx___library);
HXLINE( 781)					bool _hx_tmp1;
HXDLIN( 781)					if (hx::IsNotNull( manifest->name )) {
HXLINE( 781)						_hx_tmp1 = !(::openfl::utils::Assets_obj::hasLibrary(manifest->name));
            					}
            					else {
HXLINE( 781)						_hx_tmp1 = false;
            					}
HXDLIN( 781)					if (_hx_tmp1) {
HXLINE( 783)						::openfl::utils::Assets_obj::registerLibrary(manifest->name,_gthis->_hx___library);
            					}
HXLINE( 786)					 ::openfl::display::MovieClip clip = _gthis->_hx___library->getMovieClip(HX_("",00,00,00,00));
HXLINE( 787)					int _hx_tmp2 = ::Std_obj::_hx_int(clip->get_width());
HXDLIN( 787)					int _hx_tmp3 = ::Std_obj::_hx_int(clip->get_height());
HXDLIN( 787)					_gthis->_hx___setContent(clip,_hx_tmp2,_hx_tmp3);
HXLINE( 789)					 ::openfl::display::LoaderInfo _gthis1 = _gthis->contentLoaderInfo;
HXDLIN( 789)					_gthis1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::openfl::display::Loader,_gthis) HXARGC(1)
            				void _hx_run(::String e){
            					HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_792_loader_onComplete)
HXLINE( 792)					_gthis->_hx___dispatchError(e);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 776)				library->load()->onComplete( ::Dynamic(new _hx_Closure_0(manifest,_gthis,library)))->onError( ::Dynamic(new _hx_Closure_1(_gthis)));
            			}
            		}
            		else {
HXLINE( 798)			bool _hx_tmp4;
HXDLIN( 798)			if (hx::IsNotNull( this->contentLoaderInfo->contentType )) {
HXLINE( 799)				if ((this->contentLoaderInfo->contentType.indexOf(HX_("/javascript",1c,04,67,9b),null()) <= -1)) {
HXLINE( 798)					_hx_tmp4 = (this->contentLoaderInfo->contentType.indexOf(HX_("/ecmascript",ac,7b,0f,7d),null()) > -1);
            				}
            				else {
HXLINE( 798)					_hx_tmp4 = true;
            				}
            			}
            			else {
HXLINE( 798)				_hx_tmp4 = false;
            			}
HXDLIN( 798)			if (_hx_tmp4) {
HXLINE( 801)				this->_hx___setContent( ::openfl::display::Sprite_obj::__alloc( HX_CTX ),0,0);
HXLINE( 811)				 ::openfl::display::LoaderInfo _hx_tmp5 = this->contentLoaderInfo;
HXDLIN( 811)				_hx_tmp5->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            			}
            			else {
HXLINE( 815)				this->contentLoaderInfo->bytes = ( ( ::openfl::utils::ByteArrayData)(loader->data) );
HXLINE( 816)				::openfl::display::BitmapData_obj::loadFromBytes(( ( ::openfl::utils::ByteArrayData)(loader->data) ),null())->onComplete(this->BitmapData_onLoad_dyn())->onError(this->BitmapData_onError_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onComplete,(void))

void Loader_obj::loader_onError( ::openfl::events::IOErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_821_loader_onError)
HXLINE( 824)		event->target = this->contentLoaderInfo;
HXLINE( 825)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onError,(void))

void Loader_obj::loader_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_829_loader_onProgress)
HXLINE( 830)		event->target = this->contentLoaderInfo;
HXLINE( 831)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onProgress,(void))


hx::ObjectPtr< Loader_obj > Loader_obj::__new() {
	hx::ObjectPtr< Loader_obj > __this = new Loader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Loader_obj > Loader_obj::__alloc(hx::Ctx *_hx_ctx) {
	Loader_obj *__this = (Loader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Loader_obj), true, "openfl.display.Loader"));
	*(void **)__this = Loader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_MARK_MEMBER_NAME(_hx___library,"__library");
	HX_MARK_MEMBER_NAME(_hx___path,"__path");
	HX_MARK_MEMBER_NAME(_hx___unloaded,"__unloaded");
	 ::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_VISIT_MEMBER_NAME(_hx___library,"__library");
	HX_VISIT_MEMBER_NAME(_hx___path,"__path");
	HX_VISIT_MEMBER_NAME(_hx___unloaded,"__unloaded");
	 ::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return hx::Val( _hx___path ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return hx::Val( content ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__library") ) { return hx::Val( _hx___library ); }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return hx::Val( loadBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__unloaded") ) { return hx::Val( _hx___unloaded ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__setContent") ) { return hx::Val( _hx___setContent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadAndStop") ) { return hx::Val( unloadAndStop_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loader_onError") ) { return hx::Val( loader_onError_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchError") ) { return hx::Val( _hx___dispatchError_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return hx::Val( contentLoaderInfo ); }
		if (HX_FIELD_EQ(inName,"BitmapData_onLoad") ) { return hx::Val( BitmapData_onLoad_dyn() ); }
		if (HX_FIELD_EQ(inName,"loader_onComplete") ) { return hx::Val( loader_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"loader_onProgress") ) { return hx::Val( loader_onProgress_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BitmapData_onError") ) { return hx::Val( BitmapData_onError_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { return hx::Val( uncaughtErrorEvents ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BitmapData_onProgress") ) { return hx::Val( BitmapData_onProgress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Loader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { _hx___path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__library") ) { _hx___library=inValue.Cast<  ::openfl::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__unloaded") ) { _hx___unloaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast<  ::openfl::display::LoaderInfo >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { uncaughtErrorEvents=inValue.Cast<  ::openfl::events::UncaughtErrorEvents >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("content",39,8d,77,19));
	outFields->push(HX_("contentLoaderInfo",ba,64,65,14));
	outFields->push(HX_("uncaughtErrorEvents",6c,14,2c,48));
	outFields->push(HX_("__library",db,77,be,c0));
	outFields->push(HX_("__path",c5,48,4a,f9));
	outFields->push(HX_("__unloaded",3e,ea,ee,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Loader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Loader_obj,content),HX_("content",39,8d,77,19)},
	{hx::fsObject /*  ::openfl::display::LoaderInfo */ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_("contentLoaderInfo",ba,64,65,14)},
	{hx::fsObject /*  ::openfl::events::UncaughtErrorEvents */ ,(int)offsetof(Loader_obj,uncaughtErrorEvents),HX_("uncaughtErrorEvents",6c,14,2c,48)},
	{hx::fsObject /*  ::openfl::utils::AssetLibrary */ ,(int)offsetof(Loader_obj,_hx___library),HX_("__library",db,77,be,c0)},
	{hx::fsString,(int)offsetof(Loader_obj,_hx___path),HX_("__path",c5,48,4a,f9)},
	{hx::fsBool,(int)offsetof(Loader_obj,_hx___unloaded),HX_("__unloaded",3e,ea,ee,fd)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Loader_obj_sStaticStorageInfo = 0;
#endif

static ::String Loader_obj_sMemberFields[] = {
	HX_("content",39,8d,77,19),
	HX_("contentLoaderInfo",ba,64,65,14),
	HX_("uncaughtErrorEvents",6c,14,2c,48),
	HX_("__library",db,77,be,c0),
	HX_("__path",c5,48,4a,f9),
	HX_("__unloaded",3e,ea,ee,fd),
	HX_("close",b8,17,63,48),
	HX_("load",26,9a,b7,47),
	HX_("loadBytes",65,54,cf,d8),
	HX_("unload",ff,a0,8c,65),
	HX_("unloadAndStop",3a,03,03,7a),
	HX_("__dispatchError",8e,03,7c,4b),
	HX_("__setContent",d7,2c,ea,a4),
	HX_("BitmapData_onError",83,7e,14,0a),
	HX_("BitmapData_onLoad",cb,d7,a2,be),
	HX_("BitmapData_onProgress",d2,6b,16,c1),
	HX_("loader_onComplete",e4,7c,03,18),
	HX_("loader_onError",bd,d6,01,b0),
	HX_("loader_onProgress",d8,73,66,1e),
	::String(null()) };

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	Loader_obj _hx_dummy;
	Loader_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Loader",fd,67,b0,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Loader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Loader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Loader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Loader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_89_boot)
HXDLIN(  89)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("BitmapData_onError",83,7e,14,0a), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
