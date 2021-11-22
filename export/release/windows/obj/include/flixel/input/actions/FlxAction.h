#ifndef INCLUDED_flixel_input_actions_FlxAction
#define INCLUDED_flixel_input_actions_FlxAction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxInputType)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxAction_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAction_obj OBJ_;
		FlxAction_obj();

	public:
		enum { _hx_ClassId = 0x2660e195 };

		void __construct( ::flixel::input::actions::FlxInputType InputType,::String Name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxAction")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxAction"); }
		static ::hx::ObjectPtr< FlxAction_obj > __new( ::flixel::input::actions::FlxInputType InputType,::String Name);
		static ::hx::ObjectPtr< FlxAction_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputType InputType,::String Name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAction_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxAction",a8,35,35,98); }

		 ::flixel::input::actions::FlxInputType type;
		::String name;
		int steamHandle;
		bool triggered;
		::Array< ::Dynamic> inputs;
		 ::Dynamic _x;
		 ::Dynamic _y;
		int _timestamp;
		bool _checked;
		bool steamOriginsChanged;
		int getFirstSteamOrigin();
		::Dynamic getFirstSteamOrigin_dyn();

		::Array< int > getSteamOrigins(::Array< int > origins);
		::Dynamic getSteamOrigins_dyn();

		void removeAll(::hx::Null< bool >  Destroy);
		::Dynamic removeAll_dyn();

		void remove( ::flixel::input::actions::FlxActionInput Input,::hx::Null< bool >  Destroy);
		::Dynamic remove_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		virtual bool check();
		::Dynamic check_dyn();

		virtual void update();
		::Dynamic update_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		bool match( ::flixel::input::actions::FlxAction other);
		::Dynamic match_dyn();

		 ::flixel::input::actions::FlxAction addGenericInput( ::flixel::input::actions::FlxActionInput input);
		::Dynamic addGenericInput_dyn();

		bool checkExists( ::flixel::input::actions::FlxActionInput input);
		::Dynamic checkExists_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxAction */ 
