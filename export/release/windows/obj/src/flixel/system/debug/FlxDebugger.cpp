#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_64_new,"flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",64,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void FlxDebugger_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_64_new)
HXDLIN(  64)		super::__construct();
            	}

Dynamic FlxDebugger_obj::__CreateEmpty() { return new FlxDebugger_obj; }

void *FlxDebugger_obj::_hx_vtable = 0;

Dynamic FlxDebugger_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDebugger_obj > _hx_result = new FlxDebugger_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDebugger_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x54b8beab) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x54b8beab;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new() {
	::hx::ObjectPtr< FlxDebugger_obj > __this = new FlxDebugger_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxDebugger_obj *__this = (FlxDebugger_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDebugger_obj), true, "flixel.system.debug.FlxDebugger"));
	*(void **)__this = FlxDebugger_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDebugger_obj::FlxDebugger_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxDebugger_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxDebugger_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxDebugger_obj::__mClass;

void FlxDebugger_obj::__register()
{
	FlxDebugger_obj _hx_dummy;
	FlxDebugger_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.FlxDebugger",0b,53,a2,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxDebugger_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDebugger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDebugger_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
