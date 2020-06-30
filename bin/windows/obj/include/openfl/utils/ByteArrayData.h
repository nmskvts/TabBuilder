// Generated by Haxe 4.0.5
#ifndef INCLUDED_openfl_utils_ByteArrayData
#define INCLUDED_openfl_utils_ByteArrayData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ByteArrayData_obj : public  ::haxe::io::Bytes_obj
{
	public:
		typedef  ::haxe::io::Bytes_obj super;
		typedef ByteArrayData_obj OBJ_;
		ByteArrayData_obj();

	public:
		enum { _hx_ClassId = 0x20f64c9a };

		void __construct(hx::Null< int >  __o_length);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils.ByteArrayData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.utils.ByteArrayData"); }
		static hx::ObjectPtr< ByteArrayData_obj > __new(hx::Null< int >  __o_length);
		static hx::ObjectPtr< ByteArrayData_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_length);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArrayData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ByteArrayData",1b,20,ed,7e); }

		static void __boot();
		static  ::Dynamic __meta__;
		static int defaultObjectEncoding;
		static  ::Dynamic _hx___defaultEndian;
		static  ::openfl::utils::ByteArrayData fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::Dynamic get_defaultEndian();
		static ::Dynamic get_defaultEndian_dyn();

		static  ::Dynamic set_defaultEndian( ::Dynamic value);
		static ::Dynamic set_defaultEndian_dyn();

		int objectEncoding;
		int position;
		 ::Dynamic _hx___endian;
		int __length;
		void clear();
		::Dynamic clear_dyn();

		void compress( ::Dynamic algorithm);
		::Dynamic compress_dyn();

		void deflate();
		::Dynamic deflate_dyn();

		void inflate();
		::Dynamic inflate_dyn();

		bool readBoolean();
		::Dynamic readBoolean_dyn();

		int readByte();
		::Dynamic readByte_dyn();

		void readBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  offset,hx::Null< int >  length);
		::Dynamic readBytes_dyn();

		Float readDouble();
		::Dynamic readDouble_dyn();

		Float readFloat();
		::Dynamic readFloat_dyn();

		int readInt();
		::Dynamic readInt_dyn();

		::String readMultiByte(int length,::String charSet);
		::Dynamic readMultiByte_dyn();

		 ::Dynamic readObject();
		::Dynamic readObject_dyn();

		int readShort();
		::Dynamic readShort_dyn();

		int readUnsignedByte();
		::Dynamic readUnsignedByte_dyn();

		int readUnsignedInt();
		::Dynamic readUnsignedInt_dyn();

		int readUnsignedShort();
		::Dynamic readUnsignedShort_dyn();

		::String readUTF();
		::Dynamic readUTF_dyn();

		::String readUTFBytes(int length);
		::Dynamic readUTFBytes_dyn();

		void uncompress( ::Dynamic algorithm);
		::Dynamic uncompress_dyn();

		void writeBoolean(bool value);
		::Dynamic writeBoolean_dyn();

		void writeByte(int value);
		::Dynamic writeByte_dyn();

		void writeBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  offset,hx::Null< int >  length);
		::Dynamic writeBytes_dyn();

		void writeDouble(Float value);
		::Dynamic writeDouble_dyn();

		void writeFloat(Float value);
		::Dynamic writeFloat_dyn();

		void writeInt(int value);
		::Dynamic writeInt_dyn();

		void writeMultiByte(::String value,::String charSet);
		::Dynamic writeMultiByte_dyn();

		void writeObject( ::Dynamic object);
		::Dynamic writeObject_dyn();

		void writeShort(int value);
		::Dynamic writeShort_dyn();

		void writeUnsignedInt(int value);
		::Dynamic writeUnsignedInt_dyn();

		void writeUTF(::String value);
		::Dynamic writeUTF_dyn();

		void writeUTFBytes(::String value);
		::Dynamic writeUTFBytes_dyn();

		void _hx___fromBytes( ::haxe::io::Bytes bytes);
		::Dynamic _hx___fromBytes_dyn();

		void _hx___resize(int size);
		::Dynamic _hx___resize_dyn();

		void _hx___setData( ::haxe::io::Bytes bytes);
		::Dynamic _hx___setData_dyn();

		int get_bytesAvailable();
		::Dynamic get_bytesAvailable_dyn();

		 ::Dynamic get_endian();
		::Dynamic get_endian_dyn();

		 ::Dynamic set_endian( ::Dynamic value);
		::Dynamic set_endian_dyn();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_ByteArrayData */ 
