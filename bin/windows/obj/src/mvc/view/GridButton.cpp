// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_mvc_view_GridButton
#include <mvc/view/GridButton.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_src_factory_TextFactory
#include <src/factory/TextFactory.h>
#endif
#ifndef INCLUDED_src_gui_Button
#include <src/gui/Button.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a5af353a2109c996_22_new,"mvc.view.GridButton","new",0x839dbcbf,"mvc.view.GridButton.new","mvc/view/GridButton.hx",22,0xcf34c731)
HX_LOCAL_STACK_FRAME(_hx_pos_a5af353a2109c996_29_build,"mvc.view.GridButton","build",0x15cfdd4d,"mvc.view.GridButton.build","mvc/view/GridButton.hx",29,0xcf34c731)
HX_LOCAL_STACK_FRAME(_hx_pos_a5af353a2109c996_42_repaint,"mvc.view.GridButton","repaint",0x43aa12ea,"mvc.view.GridButton.repaint","mvc/view/GridButton.hx",42,0xcf34c731)
HX_LOCAL_STACK_FRAME(_hx_pos_a5af353a2109c996_46_getImagePath,"mvc.view.GridButton","getImagePath",0x899826eb,"mvc.view.GridButton.getImagePath","mvc/view/GridButton.hx",46,0xcf34c731)
namespace mvc{
namespace view{

void GridButton_obj::__construct( ::Dynamic __o_x, ::Dynamic __o_y,::String text,::String path,Float width,Float height){
            		 ::Dynamic x = __o_x;
            		if (hx::IsNull(__o_x)) x = 0;
            		 ::Dynamic y = __o_y;
            		if (hx::IsNull(__o_y)) y = 0;
            	HX_STACKFRAME(&_hx_pos_a5af353a2109c996_22_new)
HXLINE(  23)		this->path = path;
HXLINE(  24)		super::__construct(text,width,height,0,null(),null());
HXLINE(  25)		this->set_x(( (Float)(x) ));
HXLINE(  26)		this->set_y(( (Float)(y) ));
            	}

Dynamic GridButton_obj::__CreateEmpty() { return new GridButton_obj; }

void *GridButton_obj::_hx_vtable = 0;

Dynamic GridButton_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GridButton_obj > _hx_result = new GridButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool GridButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		}
	} else {
		if (inClassId<=(int)0x6705f037) {
			return inClassId==(int)0x3f2b00af || inClassId==(int)0x6705f037;
		} else {
			return inClassId==(int)0x7efbba29;
		}
	}
}

void GridButton_obj::build(){
            	HX_GC_STACKFRAME(&_hx_pos_a5af353a2109c996_29_build)
HXLINE(  30)		this->bitMapData = ::openfl::utils::Assets_obj::getBitmapData(this->path,null());
HXLINE(  31)		this->bitMap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,this->bitMapData,null(),null());
HXLINE(  32)		this->bitMap->set_height(( (Float)(100) ));
HXLINE(  33)		this->bitMap->set_width(( (Float)(100) ));
HXLINE(  35)		this->addChild(this->bitMap);
HXLINE(  37)		this->textField = ::src::factory::TextFactory_obj::createTextField(this->text,( (Float)(100) ),null());
HXLINE(  38)		this->textField->set_y(( (Float)(0) ));
HXLINE(  39)		this->addChild(this->textField);
            	}


void GridButton_obj::repaint(){
            	HX_STACKFRAME(&_hx_pos_a5af353a2109c996_42_repaint)
            	}


::String GridButton_obj::getImagePath(){
            	HX_STACKFRAME(&_hx_pos_a5af353a2109c996_46_getImagePath)
HXDLIN(  46)		return this->path;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GridButton_obj,getImagePath,return )


hx::ObjectPtr< GridButton_obj > GridButton_obj::__new( ::Dynamic __o_x, ::Dynamic __o_y,::String text,::String path,Float width,Float height) {
	hx::ObjectPtr< GridButton_obj > __this = new GridButton_obj();
	__this->__construct(__o_x,__o_y,text,path,width,height);
	return __this;
}

hx::ObjectPtr< GridButton_obj > GridButton_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_x, ::Dynamic __o_y,::String text,::String path,Float width,Float height) {
	GridButton_obj *__this = (GridButton_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GridButton_obj), true, "mvc.view.GridButton"));
	*(void **)__this = GridButton_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,text,path,width,height);
	return __this;
}

GridButton_obj::GridButton_obj()
{
}

void GridButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GridButton);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(bitMap,"bitMap");
	HX_MARK_MEMBER_NAME(bitMapData,"bitMapData");
	 ::src::gui::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GridButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(bitMap,"bitMap");
	HX_VISIT_MEMBER_NAME(bitMapData,"bitMapData");
	 ::src::gui::Button_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GridButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return hx::Val( path ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { return hx::Val( build_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitMap") ) { return hx::Val( bitMap ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repaint") ) { return hx::Val( repaint_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitMapData") ) { return hx::Val( bitMapData ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getImagePath") ) { return hx::Val( getImagePath_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GridButton_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitMap") ) { bitMap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitMapData") ) { bitMapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GridButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("bitMap",cf,c7,f3,f0));
	outFields->push(HX_("bitMapData",99,dd,11,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo GridButton_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(GridButton_obj,path),HX_("path",a5,e5,51,4a)},
	{hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(GridButton_obj,bitMap),HX_("bitMap",cf,c7,f3,f0)},
	{hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(GridButton_obj,bitMapData),HX_("bitMapData",99,dd,11,01)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GridButton_obj_sStaticStorageInfo = 0;
#endif

static ::String GridButton_obj_sMemberFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("bitMap",cf,c7,f3,f0),
	HX_("bitMapData",99,dd,11,01),
	HX_("build",2e,db,ea,ba),
	HX_("repaint",0b,0b,e9,a3),
	HX_("getImagePath",2a,17,dd,3b),
	::String(null()) };

hx::Class GridButton_obj::__mClass;

void GridButton_obj::__register()
{
	GridButton_obj _hx_dummy;
	GridButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("mvc.view.GridButton",4d,f1,3a,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GridButton_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GridButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GridButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GridButton_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mvc
} // end namespace view
