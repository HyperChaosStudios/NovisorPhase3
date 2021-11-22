#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#define INCLUDED_flixel_input_actions_FlxInputDevice

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDevice)
namespace flixel{
namespace input{
namespace actions{


class FlxInputDevice_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxInputDevice_obj OBJ_;

	public:
		FlxInputDevice_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.input.actions.FlxInputDevice",95,fb,85,d5); }
		::String __ToString() const { return HX_("FlxInputDevice.",60,7b,cf,c7) + _hx_tag; }

		static ::flixel::input::actions::FlxInputDevice ALL;
		static inline ::flixel::input::actions::FlxInputDevice ALL_dyn() { return ALL; }
		static ::flixel::input::actions::FlxInputDevice ANDROID;
		static inline ::flixel::input::actions::FlxInputDevice ANDROID_dyn() { return ANDROID; }
		static ::flixel::input::actions::FlxInputDevice GAMEPAD;
		static inline ::flixel::input::actions::FlxInputDevice GAMEPAD_dyn() { return GAMEPAD; }
		static ::flixel::input::actions::FlxInputDevice IFLXINPUT_OBJECT;
		static inline ::flixel::input::actions::FlxInputDevice IFLXINPUT_OBJECT_dyn() { return IFLXINPUT_OBJECT; }
		static ::flixel::input::actions::FlxInputDevice KEYBOARD;
		static inline ::flixel::input::actions::FlxInputDevice KEYBOARD_dyn() { return KEYBOARD; }
		static ::flixel::input::actions::FlxInputDevice MOUSE;
		static inline ::flixel::input::actions::FlxInputDevice MOUSE_dyn() { return MOUSE; }
		static ::flixel::input::actions::FlxInputDevice MOUSE_WHEEL;
		static inline ::flixel::input::actions::FlxInputDevice MOUSE_WHEEL_dyn() { return MOUSE_WHEEL; }
		static ::flixel::input::actions::FlxInputDevice NONE;
		static inline ::flixel::input::actions::FlxInputDevice NONE_dyn() { return NONE; }
		static ::flixel::input::actions::FlxInputDevice OTHER;
		static inline ::flixel::input::actions::FlxInputDevice OTHER_dyn() { return OTHER; }
		static ::flixel::input::actions::FlxInputDevice STEAM_CONTROLLER;
		static inline ::flixel::input::actions::FlxInputDevice STEAM_CONTROLLER_dyn() { return STEAM_CONTROLLER; }
		static ::flixel::input::actions::FlxInputDevice UNKNOWN;
		static inline ::flixel::input::actions::FlxInputDevice UNKNOWN_dyn() { return UNKNOWN; }
};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxInputDevice */ 
