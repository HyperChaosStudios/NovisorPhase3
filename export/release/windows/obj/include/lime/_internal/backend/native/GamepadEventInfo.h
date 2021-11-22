#ifndef INCLUDED_lime__internal_backend_native_GamepadEventInfo
#define INCLUDED_lime__internal_backend_native_GamepadEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d0c0bd38b1c3a1bc_680_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,GamepadEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES GamepadEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GamepadEventInfo_obj OBJ_;
		GamepadEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x1c78324b };

		void __construct( ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< int >  __o_button,::hx::Null< int >  __o_axis,::hx::Null< Float >  __o_value);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.GamepadEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.GamepadEventInfo"); }

		inline static ::hx::ObjectPtr< GamepadEventInfo_obj > __new( ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< int >  __o_button,::hx::Null< int >  __o_axis,::hx::Null< Float >  __o_value) {
			::hx::ObjectPtr< GamepadEventInfo_obj > __this = new GamepadEventInfo_obj();
			__this->__construct(type,__o_id,__o_button,__o_axis,__o_value);
			return __this;
		}

		inline static ::hx::ObjectPtr< GamepadEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< int >  __o_button,::hx::Null< int >  __o_axis,::hx::Null< Float >  __o_value) {
			GamepadEventInfo_obj *__this = (GamepadEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GamepadEventInfo_obj), false, "lime._internal.backend.native.GamepadEventInfo"));
			*(void **)__this = GamepadEventInfo_obj::_hx_vtable;
{
            		int id = __o_id.Default(0);
            		int button = __o_button.Default(0);
            		int axis = __o_axis.Default(0);
            		Float value = __o_value.Default(0);
            	HX_STACKFRAME(&_hx_pos_d0c0bd38b1c3a1bc_680_new)
HXLINE( 681)		( ( ::lime::_internal::backend::native::GamepadEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 682)		( ( ::lime::_internal::backend::native::GamepadEventInfo)(__this) )->id = id;
HXLINE( 683)		( ( ::lime::_internal::backend::native::GamepadEventInfo)(__this) )->button = button;
HXLINE( 684)		( ( ::lime::_internal::backend::native::GamepadEventInfo)(__this) )->axis = axis;
HXLINE( 685)		( ( ::lime::_internal::backend::native::GamepadEventInfo)(__this) )->axisValue = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GamepadEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GamepadEventInfo",e7,80,29,66); }

		int axis;
		int button;
		int id;
		int type;
		Float axisValue;
		 ::lime::_internal::backend::native::GamepadEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_GamepadEventInfo */ 
