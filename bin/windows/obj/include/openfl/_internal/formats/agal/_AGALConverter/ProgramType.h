// Generated by Haxe 4.0.5
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_ProgramType
#define INCLUDED_openfl__internal_formats_agal__AGALConverter_ProgramType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(openfl,_internal,formats,agal,_AGALConverter,ProgramType)
namespace openfl{
namespace _internal{
namespace formats{
namespace agal{
namespace _AGALConverter{


class ProgramType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ProgramType_obj OBJ_;

	public:
		ProgramType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl._internal.formats.agal._AGALConverter.ProgramType",5b,b6,f6,00); }
		::String __ToString() const { return HX_("ProgramType.",30,43,41,ab) + _hx_tag; }

		static ::openfl::_internal::formats::agal::_AGALConverter::ProgramType FRAGMENT;
		static inline ::openfl::_internal::formats::agal::_AGALConverter::ProgramType FRAGMENT_dyn() { return FRAGMENT; }
		static ::openfl::_internal::formats::agal::_AGALConverter::ProgramType VERTEX;
		static inline ::openfl::_internal::formats::agal::_AGALConverter::ProgramType VERTEX_dyn() { return VERTEX; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace agal
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_formats_agal__AGALConverter_ProgramType */ 
