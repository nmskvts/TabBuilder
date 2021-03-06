// Generated by Haxe 4.0.5
#ifndef INCLUDED_src_factory_TextFactory
#define INCLUDED_src_factory_TextFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(src,factory,TextFactory)

namespace src{
namespace factory{


class HXCPP_CLASS_ATTRIBUTES TextFactory_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextFactory_obj OBJ_;
		TextFactory_obj();

	public:
		enum { _hx_ClassId = 0x0d212657 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="src.factory.TextFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"src.factory.TextFactory"); }

		inline static hx::ObjectPtr< TextFactory_obj > __new() {
			hx::ObjectPtr< TextFactory_obj > __this = new TextFactory_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< TextFactory_obj > __alloc(hx::Ctx *_hx_ctx) {
			TextFactory_obj *__this = (TextFactory_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFactory_obj), false, "src.factory.TextFactory"));
			*(void **)__this = TextFactory_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFactory_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFactory",7d,af,8a,67); }

		static  ::openfl::text::TextField createTextField(::String text,Float width, ::Dynamic textColor);
		static ::Dynamic createTextField_dyn();

		static  ::openfl::text::TextFormat getTextFormat(int textColor);
		static ::Dynamic getTextFormat_dyn();

};

} // end namespace src
} // end namespace factory

#endif /* INCLUDED_src_factory_TextFactory */ 
