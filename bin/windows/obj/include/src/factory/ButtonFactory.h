// Generated by Haxe 4.0.5
#ifndef INCLUDED_src_factory_ButtonFactory
#define INCLUDED_src_factory_ButtonFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mvc,view,GridButton)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(src,factory,ButtonFactory)
HX_DECLARE_CLASS2(src,gui,Button)
HX_DECLARE_CLASS2(src,gui,TabButton)

namespace src{
namespace factory{


class HXCPP_CLASS_ATTRIBUTES ButtonFactory_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ButtonFactory_obj OBJ_;
		ButtonFactory_obj();

	public:
		enum { _hx_ClassId = 0x1f6c9632 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="src.factory.ButtonFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"src.factory.ButtonFactory"); }

		inline static hx::ObjectPtr< ButtonFactory_obj > __new() {
			hx::ObjectPtr< ButtonFactory_obj > __this = new ButtonFactory_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< ButtonFactory_obj > __alloc(hx::Ctx *_hx_ctx) {
			ButtonFactory_obj *__this = (ButtonFactory_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ButtonFactory_obj), false, "src.factory.ButtonFactory"));
			*(void **)__this = ButtonFactory_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ButtonFactory_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ButtonFactory",d8,34,27,0e); }

		static  ::src::gui::TabButton createTab(::String text,Float width,Float height, ::Dynamic x, ::Dynamic y);
		static ::Dynamic createTab_dyn();

		static  ::mvc::view::GridButton createGrid(::String text,::String path,Float width,Float height, ::Dynamic x, ::Dynamic y);
		static ::Dynamic createGrid_dyn();

		static  ::src::gui::Button create(::String text,Float width,Float height,int color, ::Dynamic x, ::Dynamic y);
		static ::Dynamic create_dyn();

};

} // end namespace src
} // end namespace factory

#endif /* INCLUDED_src_factory_ButtonFactory */ 
