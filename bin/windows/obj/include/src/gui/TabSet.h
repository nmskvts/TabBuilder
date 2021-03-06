// Generated by Haxe 4.0.5
#ifndef INCLUDED_src_gui_TabSet
#define INCLUDED_src_gui_TabSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(src,gui,Button)
HX_DECLARE_CLASS2(src,gui,TabButton)
HX_DECLARE_CLASS2(src,gui,TabSet)
HX_DECLARE_CLASS2(src,shape,Rectangle)

namespace src{
namespace gui{


class HXCPP_CLASS_ATTRIBUTES TabSet_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef TabSet_obj OBJ_;
		TabSet_obj();

	public:
		enum { _hx_ClassId = 0x2165b484 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.gui.TabSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.gui.TabSet"); }
		static hx::ObjectPtr< TabSet_obj > __new();
		static hx::ObjectPtr< TabSet_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TabSet_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabSet",6d,d0,de,b0); }

		::Array< ::Dynamic> tabSet;
		int tabNum;
		 ::src::shape::Rectangle rect;
		void createAll(int num);
		::Dynamic createAll_dyn();

		void addAll();
		::Dynamic addAll_dyn();

		void isClicked( ::src::gui::TabButton tabButton);
		::Dynamic isClicked_dyn();

		::Array< ::Dynamic> getTabSet();
		::Dynamic getTabSet_dyn();

};

} // end namespace src
} // end namespace gui

#endif /* INCLUDED_src_gui_TabSet */ 
