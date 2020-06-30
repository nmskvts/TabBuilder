// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl__internal_text_GlyphPosition
#include <openfl/_internal/text/GlyphPosition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da1ef37d0e5fbdd1_21_new,"openfl._internal.text.GlyphPosition","new",0x52b187f6,"openfl._internal.text.GlyphPosition.new","openfl/_internal/text/GlyphPosition.hx",21,0xa350dbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_da1ef37d0e5fbdd1_13_boot,"openfl._internal.text.GlyphPosition","boot",0x00be6fdc,"openfl._internal.text.GlyphPosition.boot","openfl/_internal/text/GlyphPosition.hx",13,0xa350dbb9)
namespace openfl{
namespace _internal{
namespace text{

void GlyphPosition_obj::__construct(int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset){
            	HX_GC_STACKFRAME(&_hx_pos_da1ef37d0e5fbdd1_21_new)
HXLINE(  22)		this->glyph = glyph;
HXLINE(  23)		this->advance = advance;
HXLINE(  25)		if (hx::IsNotNull( offset )) {
HXLINE(  27)			this->offset = offset;
            		}
            		else {
HXLINE(  31)			this->offset =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
            	}

Dynamic GlyphPosition_obj::__CreateEmpty() { return new GlyphPosition_obj; }

void *GlyphPosition_obj::_hx_vtable = 0;

Dynamic GlyphPosition_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlyphPosition_obj > _hx_result = new GlyphPosition_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GlyphPosition_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a210fc4;
}


hx::ObjectPtr< GlyphPosition_obj > GlyphPosition_obj::__new(int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset) {
	hx::ObjectPtr< GlyphPosition_obj > __this = new GlyphPosition_obj();
	__this->__construct(glyph,advance,offset);
	return __this;
}

hx::ObjectPtr< GlyphPosition_obj > GlyphPosition_obj::__alloc(hx::Ctx *_hx_ctx,int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset) {
	GlyphPosition_obj *__this = (GlyphPosition_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GlyphPosition_obj), true, "openfl._internal.text.GlyphPosition"));
	*(void **)__this = GlyphPosition_obj::_hx_vtable;
	__this->__construct(glyph,advance,offset);
	return __this;
}

GlyphPosition_obj::GlyphPosition_obj()
{
}

void GlyphPosition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlyphPosition);
	HX_MARK_MEMBER_NAME(advance,"advance");
	HX_MARK_MEMBER_NAME(glyph,"glyph");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void GlyphPosition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advance,"advance");
	HX_VISIT_MEMBER_NAME(glyph,"glyph");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

hx::Val GlyphPosition_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { return hx::Val( glyph ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return hx::Val( advance ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GlyphPosition_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { glyph=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { advance=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlyphPosition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("advance",82,08,0c,ef));
	outFields->push(HX_("glyph",ac,fd,04,96));
	outFields->push(HX_("offset",93,97,3f,60));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo GlyphPosition_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::lime::math::Vector2 */ ,(int)offsetof(GlyphPosition_obj,advance),HX_("advance",82,08,0c,ef)},
	{hx::fsInt,(int)offsetof(GlyphPosition_obj,glyph),HX_("glyph",ac,fd,04,96)},
	{hx::fsObject /*  ::lime::math::Vector2 */ ,(int)offsetof(GlyphPosition_obj,offset),HX_("offset",93,97,3f,60)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GlyphPosition_obj_sStaticStorageInfo = 0;
#endif

static ::String GlyphPosition_obj_sMemberFields[] = {
	HX_("advance",82,08,0c,ef),
	HX_("glyph",ac,fd,04,96),
	HX_("offset",93,97,3f,60),
	::String(null()) };

hx::Class GlyphPosition_obj::__mClass;

void GlyphPosition_obj::__register()
{
	GlyphPosition_obj _hx_dummy;
	GlyphPosition_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.text.GlyphPosition",04,15,ad,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlyphPosition_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlyphPosition_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlyphPosition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlyphPosition_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GlyphPosition_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_da1ef37d0e5fbdd1_13_boot)
HXDLIN(  13)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))->init(1,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text
