// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DState
#include <openfl/_internal/renderer/context3D/Context3DState.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e7f1148457df64b_207_new,"openfl.display.Stage3D","new",0x52647737,"openfl.display.Stage3D.new","openfl/display/Stage3D.hx",207,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_287_requestContext3D,"openfl.display.Stage3D","requestContext3D",0x80c219da,"openfl.display.Stage3D.requestContext3D","openfl/display/Stage3D.hx",287,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_367_requestContext3DMatchingProfiles,"openfl.display.Stage3D","requestContext3DMatchingProfiles",0x5b5ae301,"openfl.display.Stage3D.requestContext3DMatchingProfiles","openfl/display/Stage3D.hx",367,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_371___createContext,"openfl.display.Stage3D","__createContext",0x1987b48a,"openfl.display.Stage3D.__createContext","openfl/display/Stage3D.hx",371,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_453___dispatchError,"openfl.display.Stage3D","__dispatchError",0xdb9710e5,"openfl.display.Stage3D.__dispatchError","openfl/display/Stage3D.hx",453,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_460___dispatchCreate,"openfl.display.Stage3D","__dispatchCreate",0x733e9b3f,"openfl.display.Stage3D.__dispatchCreate","openfl/display/Stage3D.hx",460,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_468___lostContext,"openfl.display.Stage3D","__lostContext",0x951652e2,"openfl.display.Stage3D.__lostContext","openfl/display/Stage3D.hx",468,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_480___resize,"openfl.display.Stage3D","__resize",0x193af2dd,"openfl.display.Stage3D.__resize","openfl/display/Stage3D.hx",480,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_504___restoreContext,"openfl.display.Stage3D","__restoreContext",0xa732262a,"openfl.display.Stage3D.__restoreContext","openfl/display/Stage3D.hx",504,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_511_get_x,"openfl.display.Stage3D","get_x",0x0609efe6,"openfl.display.Stage3D.get_x","openfl/display/Stage3D.hx",511,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_515_set_x,"openfl.display.Stage3D","set_x",0xeed8e5f2,"openfl.display.Stage3D.set_x","openfl/display/Stage3D.hx",515,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_526_get_y,"openfl.display.Stage3D","get_y",0x0609efe7,"openfl.display.Stage3D.get_y","openfl/display/Stage3D.hx",526,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_530_set_y,"openfl.display.Stage3D","set_y",0xeed8e5f3,"openfl.display.Stage3D.set_y","openfl/display/Stage3D.hx",530,0x37141b9b)
namespace openfl{
namespace display{

void Stage3D_obj::__construct( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_3e7f1148457df64b_207_new)
HXLINE( 208)		super::__construct(null());
HXLINE( 210)		this->_hx___stage = stage;
HXLINE( 212)		this->_hx___height = 0;
HXLINE( 213)		this->_hx___projectionTransform =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 214)		this->_hx___renderTransform =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 215)		this->_hx___width = 0;
HXLINE( 216)		this->_hx___x = ( (Float)(0) );
HXLINE( 217)		this->_hx___y = ( (Float)(0) );
HXLINE( 219)		this->visible = true;
HXLINE( 221)		bool _hx_tmp;
HXDLIN( 221)		if ((stage->stageWidth > 0)) {
HXLINE( 221)			_hx_tmp = (stage->stageHeight > 0);
            		}
            		else {
HXLINE( 221)			_hx_tmp = false;
            		}
HXDLIN( 221)		if (_hx_tmp) {
HXLINE( 223)			this->_hx___resize(stage->stageWidth,stage->stageHeight);
            		}
            	}

Dynamic Stage3D_obj::__CreateEmpty() { return new Stage3D_obj; }

void *Stage3D_obj::_hx_vtable = 0;

Dynamic Stage3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stage3D_obj > _hx_result = new Stage3D_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Stage3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
	} else {
		return inClassId==(int)0x6b07d441;
	}
}

void Stage3D_obj::requestContext3D( ::Dynamic __o_context3DRenderMode, ::Dynamic __o_profile){
            		 ::Dynamic context3DRenderMode = __o_context3DRenderMode;
            		if (hx::IsNull(__o_context3DRenderMode)) context3DRenderMode = 0;
            		 ::Dynamic profile = __o_profile;
            		if (hx::IsNull(__o_profile)) profile = 0;
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_287_requestContext3D)
HXLINE( 288)		if (this->_hx___contextLost) {
HXLINE( 290)			this->_hx___contextRequested = true;
HXLINE( 291)			return;
            		}
HXLINE( 294)		if (hx::IsNotNull( this->context3D )) {
HXLINE( 296)			this->_hx___contextRequested = true;
HXLINE( 297)			::haxe::Timer_obj::delay(this->_hx___dispatchCreate_dyn(),1);
            		}
            		else {
HXLINE( 299)			if (!(this->_hx___contextRequested)) {
HXLINE( 301)				this->_hx___contextRequested = true;
HXLINE( 302)				::haxe::Timer_obj::delay(this->_hx___createContext_dyn(),1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,requestContext3D,(void))

void Stage3D_obj::requestContext3DMatchingProfiles( ::openfl::_Vector::ObjectVector profiles){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_367_requestContext3DMatchingProfiles)
HXDLIN( 367)		this->requestContext3D(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,requestContext3DMatchingProfiles,(void))

void Stage3D_obj::_hx___createContext(){
            	HX_GC_STACKFRAME(&_hx_pos_3e7f1148457df64b_371___createContext)
HXLINE( 373)		 ::openfl::display::Stage stage = this->_hx___stage;
HXLINE( 374)		 ::openfl::display::DisplayObjectRenderer renderer = stage->_hx___renderer;
HXLINE( 376)		bool _hx_tmp;
HXDLIN( 376)		if ((renderer->_hx___type != HX_("cairo",88,30,19,41))) {
HXLINE( 376)			_hx_tmp = (renderer->_hx___type == HX_("canvas",d8,54,42,b8));
            		}
            		else {
HXLINE( 376)			_hx_tmp = true;
            		}
HXDLIN( 376)		if (_hx_tmp) {
HXLINE( 378)			this->_hx___dispatchError();
HXLINE( 379)			return;
            		}
HXLINE( 382)		if ((renderer->_hx___type == HX_("opengl",6f,64,94,21))) {
HXLINE( 387)			this->context3D =  ::openfl::display3D::Context3D_obj::__alloc( HX_CTX ,stage,stage->context3D->_hx___contextState,hx::ObjectPtr<OBJ_>(this));
HXLINE( 389)			this->_hx___dispatchCreate();
            		}
            		else {
HXLINE( 391)			bool _hx_tmp1 = (renderer->_hx___type == HX_("dom",82,42,4c,00));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___createContext,(void))

void Stage3D_obj::_hx___dispatchError(){
            	HX_GC_STACKFRAME(&_hx_pos_3e7f1148457df64b_453___dispatchError)
HXLINE( 454)		this->_hx___contextRequested = false;
HXLINE( 455)		this->dispatchEvent( ::openfl::events::ErrorEvent_obj::__alloc( HX_CTX ,HX_("error",c8,cb,29,73),false,false,HX_("Context3D not available",9c,fc,63,d3),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___dispatchError,(void))

void Stage3D_obj::_hx___dispatchCreate(){
            	HX_GC_STACKFRAME(&_hx_pos_3e7f1148457df64b_460___dispatchCreate)
HXDLIN( 460)		if (this->_hx___contextRequested) {
HXLINE( 462)			this->_hx___contextRequested = false;
HXLINE( 463)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("context3DCreate",7c,bf,59,7b),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___dispatchCreate,(void))

void Stage3D_obj::_hx___lostContext(){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_468___lostContext)
HXLINE( 469)		this->_hx___contextLost = true;
HXLINE( 471)		if (hx::IsNotNull( this->context3D )) {
HXLINE( 473)			this->context3D->_hx___dispose();
HXLINE( 474)			this->_hx___contextRequested = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___lostContext,(void))

void Stage3D_obj::_hx___resize(int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_3e7f1148457df64b_480___resize)
HXDLIN( 480)		bool _hx_tmp;
HXDLIN( 480)		if ((width == this->_hx___width)) {
HXDLIN( 480)			_hx_tmp = (height != this->_hx___height);
            		}
            		else {
HXDLIN( 480)			_hx_tmp = true;
            		}
HXDLIN( 480)		if (_hx_tmp) {
HXLINE( 490)			 ::openfl::geom::Matrix3D _hx_tmp1 = this->_hx___projectionTransform;
HXDLIN( 490)			int length = null();
HXDLIN( 490)			bool fixed = null();
HXLINE( 491)			int _hx_tmp2;
HXDLIN( 491)			if ((width > 0)) {
HXLINE( 491)				_hx_tmp2 = width;
            			}
            			else {
HXLINE( 491)				_hx_tmp2 = 1;
            			}
HXDLIN( 491)			int _hx_tmp3;
HXDLIN( 491)			if ((height > 0)) {
HXLINE( 491)				_hx_tmp3 = height;
            			}
            			else {
HXLINE( 491)				_hx_tmp3 = 1;
            			}
HXLINE( 490)			_hx_tmp1->copyRawDataFrom( ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,::Array_obj< Float >::__new(16)->init(0,(((Float)2.0) / ( (Float)(_hx_tmp2) )))->init(1,((Float)0.0))->init(2,((Float)0.0))->init(3,((Float)0.0))->init(4,((Float)0.0))->init(5,(((Float)-2.0) / ( (Float)(_hx_tmp3) )))->init(6,((Float)0.0))->init(7,((Float)0.0))->init(8,((Float)0.0))->init(9,((Float)0.0))->init(10,((Float)-0.001))->init(11,((Float)0.0))->init(12,((Float)-1.0))->init(13,((Float)1.0))->init(14,((Float)0.0))->init(15,((Float)1.0)),true),null(),null());
HXLINE( 494)			this->_hx___renderTransform->identity();
HXLINE( 495)			this->_hx___renderTransform->appendTranslation(this->_hx___x,this->_hx___y,( (Float)(0) ));
HXLINE( 496)			this->_hx___renderTransform->append(this->_hx___projectionTransform);
HXLINE( 498)			this->_hx___width = width;
HXLINE( 499)			this->_hx___height = height;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___resize,(void))

void Stage3D_obj::_hx___restoreContext(){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_504___restoreContext)
HXLINE( 505)		this->_hx___contextLost = false;
HXLINE( 506)		this->_hx___createContext();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___restoreContext,(void))

Float Stage3D_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_511_get_x)
HXDLIN( 511)		return this->_hx___x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,get_x,return )

Float Stage3D_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_515_set_x)
HXLINE( 516)		if ((this->_hx___x == value)) {
HXLINE( 516)			return value;
            		}
HXLINE( 517)		this->_hx___x = value;
HXLINE( 518)		this->_hx___renderTransform->identity();
HXLINE( 519)		this->_hx___renderTransform->appendTranslation(this->_hx___x,this->_hx___y,( (Float)(0) ));
HXLINE( 520)		this->_hx___renderTransform->append(this->_hx___projectionTransform);
HXLINE( 521)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_x,return )

Float Stage3D_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_526_get_y)
HXDLIN( 526)		return this->_hx___y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,get_y,return )

Float Stage3D_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_530_set_y)
HXLINE( 531)		if ((this->_hx___y == value)) {
HXLINE( 531)			return value;
            		}
HXLINE( 532)		this->_hx___y = value;
HXLINE( 533)		this->_hx___renderTransform->identity();
HXLINE( 534)		this->_hx___renderTransform->appendTranslation(this->_hx___x,this->_hx___y,( (Float)(0) ));
HXLINE( 535)		this->_hx___renderTransform->append(this->_hx___projectionTransform);
HXLINE( 536)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_y,return )

bool Stage3D_obj::_hx___active;


hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__new( ::openfl::display::Stage stage) {
	hx::ObjectPtr< Stage3D_obj > __this = new Stage3D_obj();
	__this->__construct(stage);
	return __this;
}

hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage stage) {
	Stage3D_obj *__this = (Stage3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stage3D_obj), true, "openfl.display.Stage3D"));
	*(void **)__this = Stage3D_obj::_hx_vtable;
	__this->__construct(stage);
	return __this;
}

Stage3D_obj::Stage3D_obj()
{
}

void Stage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3D);
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(_hx___contextLost,"__contextLost");
	HX_MARK_MEMBER_NAME(_hx___contextRequested,"__contextRequested");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___indexBuffer,"__indexBuffer");
	HX_MARK_MEMBER_NAME(_hx___projectionTransform,"__projectionTransform");
	HX_MARK_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(_hx___stage,"__stage");
	HX_MARK_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	HX_MARK_MEMBER_NAME(_hx___x,"__x");
	HX_MARK_MEMBER_NAME(_hx___y,"__y");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(_hx___contextLost,"__contextLost");
	HX_VISIT_MEMBER_NAME(_hx___contextRequested,"__contextRequested");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___indexBuffer,"__indexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___projectionTransform,"__projectionTransform");
	HX_VISIT_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(_hx___stage,"__stage");
	HX_VISIT_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	HX_VISIT_MEMBER_NAME(_hx___x,"__x");
	HX_VISIT_MEMBER_NAME(_hx___y,"__y");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Stage3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_y() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return hx::Val( _hx___x ); }
		if (HX_FIELD_EQ(inName,"__y") ) { return hx::Val( _hx___y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return hx::Val( set_y_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible ); }
		if (HX_FIELD_EQ(inName,"__stage") ) { return hx::Val( _hx___stage ); }
		if (HX_FIELD_EQ(inName,"__width") ) { return hx::Val( _hx___width ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return hx::Val( _hx___height ); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return hx::Val( _hx___resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return hx::Val( context3D ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__contextLost") ) { return hx::Val( _hx___contextLost ); }
		if (HX_FIELD_EQ(inName,"__indexBuffer") ) { return hx::Val( _hx___indexBuffer ); }
		if (HX_FIELD_EQ(inName,"__lostContext") ) { return hx::Val( _hx___lostContext_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { return hx::Val( _hx___vertexBuffer ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__createContext") ) { return hx::Val( _hx___createContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"__dispatchError") ) { return hx::Val( _hx___dispatchError_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requestContext3D") ) { return hx::Val( requestContext3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"__dispatchCreate") ) { return hx::Val( _hx___dispatchCreate_dyn() ); }
		if (HX_FIELD_EQ(inName,"__restoreContext") ) { return hx::Val( _hx___restoreContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return hx::Val( _hx___renderTransform ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { return hx::Val( _hx___contextRequested ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__projectionTransform") ) { return hx::Val( _hx___projectionTransform ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"requestContext3DMatchingProfiles") ) { return hx::Val( requestContext3DMatchingProfiles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stage3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__active") ) { outValue = ( _hx___active ); return true; }
	}
	return false;
}

hx::Val Stage3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { _hx___x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { _hx___y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { _hx___stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__contextLost") ) { _hx___contextLost=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__indexBuffer") ) { _hx___indexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { _hx___vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { _hx___renderTransform=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { _hx___contextRequested=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__projectionTransform") ) { _hx___projectionTransform=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stage3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__active") ) { _hx___active=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Stage3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("context3D",60,5c,fc,16));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("__contextLost",53,d0,33,6d));
	outFields->push(HX_("__contextRequested",9f,10,4e,81));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__indexBuffer",92,a6,1e,3e));
	outFields->push(HX_("__projectionTransform",bd,9b,b6,20));
	outFields->push(HX_("__renderTransform",16,b8,95,b1));
	outFields->push(HX_("__stage",9e,c3,69,ee));
	outFields->push(HX_("__vertexBuffer",a4,32,6a,91));
	outFields->push(HX_("__width",e6,0e,c1,34));
	outFields->push(HX_("__x",58,69,48,00));
	outFields->push(HX_("__y",59,69,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Stage3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Stage3D_obj,context3D),HX_("context3D",60,5c,fc,16)},
	{hx::fsBool,(int)offsetof(Stage3D_obj,visible),HX_("visible",72,78,24,a3)},
	{hx::fsBool,(int)offsetof(Stage3D_obj,_hx___contextLost),HX_("__contextLost",53,d0,33,6d)},
	{hx::fsBool,(int)offsetof(Stage3D_obj,_hx___contextRequested),HX_("__contextRequested",9f,10,4e,81)},
	{hx::fsInt,(int)offsetof(Stage3D_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{hx::fsObject /*  ::openfl::display3D::IndexBuffer3D */ ,(int)offsetof(Stage3D_obj,_hx___indexBuffer),HX_("__indexBuffer",92,a6,1e,3e)},
	{hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(Stage3D_obj,_hx___projectionTransform),HX_("__projectionTransform",bd,9b,b6,20)},
	{hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(Stage3D_obj,_hx___renderTransform),HX_("__renderTransform",16,b8,95,b1)},
	{hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(Stage3D_obj,_hx___stage),HX_("__stage",9e,c3,69,ee)},
	{hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Stage3D_obj,_hx___vertexBuffer),HX_("__vertexBuffer",a4,32,6a,91)},
	{hx::fsInt,(int)offsetof(Stage3D_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,_hx___x),HX_("__x",58,69,48,00)},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,_hx___y),HX_("__y",59,69,48,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Stage3D_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Stage3D_obj::_hx___active,HX_("__active",e6,ac,75,be)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Stage3D_obj_sMemberFields[] = {
	HX_("context3D",60,5c,fc,16),
	HX_("visible",72,78,24,a3),
	HX_("__contextLost",53,d0,33,6d),
	HX_("__contextRequested",9f,10,4e,81),
	HX_("__height",07,73,7b,aa),
	HX_("__indexBuffer",92,a6,1e,3e),
	HX_("__projectionTransform",bd,9b,b6,20),
	HX_("__renderTransform",16,b8,95,b1),
	HX_("__stage",9e,c3,69,ee),
	HX_("__vertexBuffer",a4,32,6a,91),
	HX_("__width",e6,0e,c1,34),
	HX_("__x",58,69,48,00),
	HX_("__y",59,69,48,00),
	HX_("requestContext3D",11,7b,31,f9),
	HX_("requestContext3DMatchingProfiles",38,62,be,66),
	HX_("__createContext",33,a7,6c,89),
	HX_("__dispatchError",8e,03,7c,4b),
	HX_("__dispatchCreate",76,fc,ad,eb),
	HX_("__lostContext",4b,19,ae,9a),
	HX_("__resize",14,c5,aa,b0),
	HX_("__restoreContext",61,87,a1,1f),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	::String(null()) };

static void Stage3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3D_obj::_hx___active,"__active");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stage3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3D_obj::_hx___active,"__active");
};

#endif

hx::Class Stage3D_obj::__mClass;

static ::String Stage3D_obj_sStaticFields[] = {
	HX_("__active",e6,ac,75,be),
	::String(null())
};

void Stage3D_obj::__register()
{
	Stage3D_obj _hx_dummy;
	Stage3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Stage3D",c5,0f,85,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stage3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Stage3D_obj::__SetStatic;
	__mClass->mMarkFunc = Stage3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Stage3D_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stage3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stage3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stage3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stage3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
