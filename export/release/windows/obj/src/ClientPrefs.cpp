#include <hxcpp.h>

#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_32_startControls,"ClientPrefs","startControls",0x3c29e88f,"ClientPrefs.startControls","ClientPrefs.hx",32,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_54_saveSettings,"ClientPrefs","saveSettings",0xab8c0989,"ClientPrefs.saveSettings","ClientPrefs.hx",54,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_83_loadPrefs,"ClientPrefs","loadPrefs",0x58c63c41,"ClientPrefs.loadPrefs","ClientPrefs.hx",83,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_159_reloadControls,"ClientPrefs","reloadControls",0xe353bb78,"ClientPrefs.reloadControls","ClientPrefs.hx",159,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_10_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",10,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_11_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",11,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_12_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",12,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_13_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",13,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_14_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",14,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_15_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",15,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_16_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",16,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_17_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",17,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_18_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",18,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_19_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",19,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_20_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",20,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_21_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",21,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_22_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",22,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_23_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",23,0x329d1619)
static const int _hx_array_data_8ae055c5_19[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_20[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_21[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_22[] = {
	(int)0,(int)0,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_24_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",24,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_25_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",25,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_26_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",26,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_29_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",29,0x329d1619)

void ClientPrefs_obj::__construct() { }

Dynamic ClientPrefs_obj::__CreateEmpty() { return new ClientPrefs_obj; }

void *ClientPrefs_obj::_hx_vtable = 0;

Dynamic ClientPrefs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientPrefs_obj > _hx_result = new ClientPrefs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClientPrefs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ddb9b05;
}

bool ClientPrefs_obj::downScroll;

bool ClientPrefs_obj::middleScroll;

bool ClientPrefs_obj::showFPS;

bool ClientPrefs_obj::flashing;

bool ClientPrefs_obj::globalAntialiasing;

bool ClientPrefs_obj::noteSplashes;

bool ClientPrefs_obj::lowQuality;

int ClientPrefs_obj::framerate;

bool ClientPrefs_obj::cursing;

bool ClientPrefs_obj::violence;

bool ClientPrefs_obj::camZooms;

bool ClientPrefs_obj::hideHud;

int ClientPrefs_obj::noteOffset;

::Array< ::Dynamic> ClientPrefs_obj::arrowHSV;

bool ClientPrefs_obj::imagesPersist;

bool ClientPrefs_obj::ghostTapping;

bool ClientPrefs_obj::hideTime;

 ::haxe::ds::StringMap ClientPrefs_obj::keyBinds;

 ::haxe::ds::StringMap ClientPrefs_obj::defaultKeys;

void ClientPrefs_obj::startControls(){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_32_startControls)
HXLINE(  34)		::ClientPrefs_obj::keyBinds->set(HX_("note_left",b4,fe,20,a5),::cpp::VirtualArray_obj::__new(2)->init(0,65)->init(1,37));
HXLINE(  35)		::ClientPrefs_obj::keyBinds->set(HX_("note_down",0f,ef,de,9f),::cpp::VirtualArray_obj::__new(2)->init(0,83)->init(1,40));
HXLINE(  36)		::ClientPrefs_obj::keyBinds->set(HX_("note_up",c8,67,5c,4d),::cpp::VirtualArray_obj::__new(2)->init(0,87)->init(1,38));
HXLINE(  37)		::ClientPrefs_obj::keyBinds->set(HX_("note_right",8f,ec,ca,4e),::cpp::VirtualArray_obj::__new(2)->init(0,68)->init(1,39));
HXLINE(  39)		::ClientPrefs_obj::keyBinds->set(HX_("ui_left",12,4d,89,f7),::cpp::VirtualArray_obj::__new(2)->init(0,65)->init(1,37));
HXLINE(  40)		::ClientPrefs_obj::keyBinds->set(HX_("ui_down",6d,3d,47,f2),::cpp::VirtualArray_obj::__new(2)->init(0,83)->init(1,40));
HXLINE(  41)		::ClientPrefs_obj::keyBinds->set(HX_("ui_up",a6,c2,91,a3),::cpp::VirtualArray_obj::__new(2)->init(0,87)->init(1,38));
HXLINE(  42)		::ClientPrefs_obj::keyBinds->set(HX_("ui_right",71,30,a7,17),::cpp::VirtualArray_obj::__new(2)->init(0,68)->init(1,39));
HXLINE(  44)		::ClientPrefs_obj::keyBinds->set(HX_("accept",08,93,06,0b),::cpp::VirtualArray_obj::__new(2)->init(0,32)->init(1,13));
HXLINE(  45)		::ClientPrefs_obj::keyBinds->set(HX_("back",27,da,10,41),::cpp::VirtualArray_obj::__new(2)->init(0,8)->init(1,27));
HXLINE(  46)		::ClientPrefs_obj::keyBinds->set(HX_("pause",f6,d6,57,bd),::cpp::VirtualArray_obj::__new(2)->init(0,13)->init(1,27));
HXLINE(  47)		::ClientPrefs_obj::keyBinds->set(HX_("reset",cf,49,c8,e6),::cpp::VirtualArray_obj::__new(2)->init(0,82)->init(1,-1));
HXLINE(  51)		::ClientPrefs_obj::defaultKeys = ::ClientPrefs_obj::keyBinds->copy();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,startControls,(void))

void ClientPrefs_obj::saveSettings(){
            	HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_54_saveSettings)
HXLINE(  55)		::flixel::FlxG_obj::save->data->__SetField(HX_("downScroll",0f,ba,68,84),::ClientPrefs_obj::downScroll,::hx::paccDynamic);
HXLINE(  56)		::flixel::FlxG_obj::save->data->__SetField(HX_("middleScroll",42,cd,58,62),::ClientPrefs_obj::middleScroll,::hx::paccDynamic);
HXLINE(  57)		::flixel::FlxG_obj::save->data->__SetField(HX_("showFPS",ec,0a,9a,7b),::ClientPrefs_obj::showFPS,::hx::paccDynamic);
HXLINE(  58)		::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),::ClientPrefs_obj::flashing,::hx::paccDynamic);
HXLINE(  59)		::flixel::FlxG_obj::save->data->__SetField(HX_("globalAntialiasing",f7,9c,ed,4c),::ClientPrefs_obj::globalAntialiasing,::hx::paccDynamic);
HXLINE(  60)		::flixel::FlxG_obj::save->data->__SetField(HX_("noteSplashes",a7,57,29,8d),::ClientPrefs_obj::noteSplashes,::hx::paccDynamic);
HXLINE(  61)		::flixel::FlxG_obj::save->data->__SetField(HX_("lowQuality",8b,52,27,3e),::ClientPrefs_obj::lowQuality,::hx::paccDynamic);
HXLINE(  62)		::flixel::FlxG_obj::save->data->__SetField(HX_("framerate",8d,e5,4b,4e),::ClientPrefs_obj::framerate,::hx::paccDynamic);
HXLINE(  65)		::flixel::FlxG_obj::save->data->__SetField(HX_("camZooms",71,f3,cd,90),::ClientPrefs_obj::camZooms,::hx::paccDynamic);
HXLINE(  66)		::flixel::FlxG_obj::save->data->__SetField(HX_("noteOffset",25,a5,53,fe),::ClientPrefs_obj::noteOffset,::hx::paccDynamic);
HXLINE(  67)		::flixel::FlxG_obj::save->data->__SetField(HX_("hideHud",15,b9,3c,b7),::ClientPrefs_obj::hideHud,::hx::paccDynamic);
HXLINE(  68)		::flixel::FlxG_obj::save->data->__SetField(HX_("arrowHSV",c2,f4,b4,fd),::ClientPrefs_obj::arrowHSV,::hx::paccDynamic);
HXLINE(  69)		::flixel::FlxG_obj::save->data->__SetField(HX_("imagesPersist",3c,00,5c,08),::ClientPrefs_obj::imagesPersist,::hx::paccDynamic);
HXLINE(  70)		::flixel::FlxG_obj::save->data->__SetField(HX_("ghostTapping",c6,6a,da,10),::ClientPrefs_obj::ghostTapping,::hx::paccDynamic);
HXLINE(  71)		::flixel::FlxG_obj::save->data->__SetField(HX_("hideTime",ef,b5,ca,a5),::ClientPrefs_obj::hideTime,::hx::paccDynamic);
HXLINE(  72)		::flixel::FlxG_obj::save->data->__SetField(HX_("achievementsMap",d8,6f,d5,91),::Achievements_obj::achievementsMap,::hx::paccDynamic);
HXLINE(  73)		::flixel::FlxG_obj::save->data->__SetField(HX_("henchmenDeath",f4,76,2a,dd),::Achievements_obj::henchmenDeath,::hx::paccDynamic);
HXLINE(  74)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE(  76)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  77)		save->bind(HX_("controls_v2",65,e4,a2,26),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE(  78)		save->data->__SetField(HX_("customControls",47,63,49,5a),::ClientPrefs_obj::keyBinds,::hx::paccDynamic);
HXLINE(  79)		save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,saveSettings,(void))

void ClientPrefs_obj::loadPrefs(){
            	HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_83_loadPrefs)
HXLINE(  84)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downScroll",0f,ba,68,84),::hx::paccDynamic) )) {
HXLINE(  85)			::ClientPrefs_obj::downScroll = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downScroll",0f,ba,68,84),::hx::paccDynamic)) );
            		}
HXLINE(  87)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic) )) {
HXLINE(  88)			::ClientPrefs_obj::middleScroll = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) );
            		}
HXLINE(  90)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("showFPS",ec,0a,9a,7b),::hx::paccDynamic) )) {
HXLINE(  91)			::ClientPrefs_obj::showFPS = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("showFPS",ec,0a,9a,7b),::hx::paccDynamic)) );
HXLINE(  92)			if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE(  93)				::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            			}
            		}
HXLINE(  96)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE(  97)			::ClientPrefs_obj::flashing = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) );
            		}
HXLINE(  99)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("globalAntialiasing",f7,9c,ed,4c),::hx::paccDynamic) )) {
HXLINE( 100)			::ClientPrefs_obj::globalAntialiasing = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("globalAntialiasing",f7,9c,ed,4c),::hx::paccDynamic)) );
            		}
HXLINE( 102)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("noteSplashes",a7,57,29,8d),::hx::paccDynamic) )) {
HXLINE( 103)			::ClientPrefs_obj::noteSplashes = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("noteSplashes",a7,57,29,8d),::hx::paccDynamic)) );
            		}
HXLINE( 105)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("lowQuality",8b,52,27,3e),::hx::paccDynamic) )) {
HXLINE( 106)			::ClientPrefs_obj::lowQuality = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("lowQuality",8b,52,27,3e),::hx::paccDynamic)) );
            		}
HXLINE( 108)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic) )) {
HXLINE( 109)			::ClientPrefs_obj::framerate = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic)) );
HXLINE( 110)			if ((::ClientPrefs_obj::framerate > ::flixel::FlxG_obj::drawFramerate)) {
HXLINE( 111)				::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
HXLINE( 112)				::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
            			}
            			else {
HXLINE( 114)				::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
HXLINE( 115)				::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
            			}
            		}
HXLINE( 124)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("camZooms",71,f3,cd,90),::hx::paccDynamic) )) {
HXLINE( 125)			::ClientPrefs_obj::camZooms = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("camZooms",71,f3,cd,90),::hx::paccDynamic)) );
            		}
HXLINE( 127)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("hideHud",15,b9,3c,b7),::hx::paccDynamic) )) {
HXLINE( 128)			::ClientPrefs_obj::hideHud = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("hideHud",15,b9,3c,b7),::hx::paccDynamic)) );
            		}
HXLINE( 130)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("noteOffset",25,a5,53,fe),::hx::paccDynamic) )) {
HXLINE( 131)			::ClientPrefs_obj::noteOffset = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("noteOffset",25,a5,53,fe),::hx::paccDynamic)) );
            		}
HXLINE( 133)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("arrowHSV",c2,f4,b4,fd),::hx::paccDynamic) )) {
HXLINE( 134)			::ClientPrefs_obj::arrowHSV = ( (::Array< ::Dynamic>)(::flixel::FlxG_obj::save->data->__Field(HX_("arrowHSV",c2,f4,b4,fd),::hx::paccDynamic)) );
            		}
HXLINE( 136)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("imagesPersist",3c,00,5c,08),::hx::paccDynamic) )) {
HXLINE( 137)			::ClientPrefs_obj::imagesPersist = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("imagesPersist",3c,00,5c,08),::hx::paccDynamic)) );
HXLINE( 138)			::flixel::graphics::FlxGraphic_obj::defaultPersist = ::ClientPrefs_obj::imagesPersist;
            		}
HXLINE( 140)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("ghostTapping",c6,6a,da,10),::hx::paccDynamic) )) {
HXLINE( 141)			::ClientPrefs_obj::ghostTapping = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("ghostTapping",c6,6a,da,10),::hx::paccDynamic)) );
            		}
HXLINE( 143)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("hideTime",ef,b5,ca,a5),::hx::paccDynamic) )) {
HXLINE( 144)			::ClientPrefs_obj::hideTime = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("hideTime",ef,b5,ca,a5),::hx::paccDynamic)) );
            		}
HXLINE( 147)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 148)		save->bind(HX_("controls_v2",65,e4,a2,26),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		if (::hx::IsNotNull( save )) {
HXLINE( 149)			_hx_tmp = ::hx::IsNotNull( save->data->__Field(HX_("customControls",47,63,49,5a),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 149)			_hx_tmp = false;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 150)			 ::haxe::ds::StringMap loadedControls = ( ( ::haxe::ds::StringMap)(save->data->__Field(HX_("customControls",47,63,49,5a),::hx::paccDynamic)) );
HXLINE( 151)			{
HXLINE( 151)				::Dynamic map = loadedControls;
HXDLIN( 151)				::Dynamic _g_map = map;
HXDLIN( 151)				 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 151)				while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 151)					::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 151)					 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 151)					::String _g1_key = key;
HXDLIN( 151)					::String control = _g1_key;
HXDLIN( 151)					 ::Dynamic keys = _g1_value;
HXLINE( 152)					::ClientPrefs_obj::keyBinds->set(control,keys);
            				}
            			}
HXLINE( 154)			::ClientPrefs_obj::reloadControls();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,loadPrefs,(void))

void ClientPrefs_obj::reloadControls(){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_159_reloadControls)
HXDLIN( 159)		::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Solo_dyn(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,reloadControls,(void))


ClientPrefs_obj::ClientPrefs_obj()
{
}

bool ClientPrefs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"showFPS") ) { outValue = ( showFPS ); return true; }
		if (HX_FIELD_EQ(inName,"cursing") ) { outValue = ( cursing ); return true; }
		if (HX_FIELD_EQ(inName,"hideHud") ) { outValue = ( hideHud ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashing") ) { outValue = ( flashing ); return true; }
		if (HX_FIELD_EQ(inName,"violence") ) { outValue = ( violence ); return true; }
		if (HX_FIELD_EQ(inName,"camZooms") ) { outValue = ( camZooms ); return true; }
		if (HX_FIELD_EQ(inName,"arrowHSV") ) { outValue = ( arrowHSV ); return true; }
		if (HX_FIELD_EQ(inName,"hideTime") ) { outValue = ( hideTime ); return true; }
		if (HX_FIELD_EQ(inName,"keyBinds") ) { outValue = ( keyBinds ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"framerate") ) { outValue = ( framerate ); return true; }
		if (HX_FIELD_EQ(inName,"loadPrefs") ) { outValue = loadPrefs_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { outValue = ( downScroll ); return true; }
		if (HX_FIELD_EQ(inName,"lowQuality") ) { outValue = ( lowQuality ); return true; }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { outValue = ( noteOffset ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { outValue = ( defaultKeys ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleScroll") ) { outValue = ( middleScroll ); return true; }
		if (HX_FIELD_EQ(inName,"noteSplashes") ) { outValue = ( noteSplashes ); return true; }
		if (HX_FIELD_EQ(inName,"ghostTapping") ) { outValue = ( ghostTapping ); return true; }
		if (HX_FIELD_EQ(inName,"saveSettings") ) { outValue = saveSettings_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imagesPersist") ) { outValue = ( imagesPersist ); return true; }
		if (HX_FIELD_EQ(inName,"startControls") ) { outValue = startControls_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"reloadControls") ) { outValue = reloadControls_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"globalAntialiasing") ) { outValue = ( globalAntialiasing ); return true; }
	}
	return false;
}

bool ClientPrefs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"showFPS") ) { showFPS=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"cursing") ) { cursing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hideHud") ) { hideHud=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashing") ) { flashing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"violence") ) { violence=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"camZooms") ) { camZooms=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"arrowHSV") ) { arrowHSV=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"hideTime") ) { hideTime=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"keyBinds") ) { keyBinds=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { downScroll=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"lowQuality") ) { lowQuality=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { noteOffset=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { defaultKeys=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleScroll") ) { middleScroll=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"noteSplashes") ) { noteSplashes=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"ghostTapping") ) { ghostTapping=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imagesPersist") ) { imagesPersist=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"globalAntialiasing") ) { globalAntialiasing=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ClientPrefs_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ClientPrefs_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &ClientPrefs_obj::downScroll,HX_("downScroll",0f,ba,68,84)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::middleScroll,HX_("middleScroll",42,cd,58,62)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::showFPS,HX_("showFPS",ec,0a,9a,7b)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::flashing,HX_("flashing",32,85,e8,99)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::globalAntialiasing,HX_("globalAntialiasing",f7,9c,ed,4c)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::noteSplashes,HX_("noteSplashes",a7,57,29,8d)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::lowQuality,HX_("lowQuality",8b,52,27,3e)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::framerate,HX_("framerate",8d,e5,4b,4e)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::cursing,HX_("cursing",cf,db,8f,cc)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::violence,HX_("violence",5b,5e,88,3f)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::camZooms,HX_("camZooms",71,f3,cd,90)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::hideHud,HX_("hideHud",15,b9,3c,b7)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::noteOffset,HX_("noteOffset",25,a5,53,fe)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ClientPrefs_obj::arrowHSV,HX_("arrowHSV",c2,f4,b4,fd)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::imagesPersist,HX_("imagesPersist",3c,00,5c,08)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::ghostTapping,HX_("ghostTapping",c6,6a,da,10)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::hideTime,HX_("hideTime",ef,b5,ca,a5)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::keyBinds,HX_("keyBinds",f7,b5,69,f7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::defaultKeys,HX_("defaultKeys",55,db,c5,18)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ClientPrefs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::downScroll,"downScroll");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::middleScroll,"middleScroll");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::showFPS,"showFPS");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::flashing,"flashing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::globalAntialiasing,"globalAntialiasing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::noteSplashes,"noteSplashes");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::lowQuality,"lowQuality");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::framerate,"framerate");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::cursing,"cursing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::violence,"violence");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::camZooms,"camZooms");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::hideHud,"hideHud");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::noteOffset,"noteOffset");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::arrowHSV,"arrowHSV");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::imagesPersist,"imagesPersist");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::ghostTapping,"ghostTapping");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::hideTime,"hideTime");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::keyBinds,"keyBinds");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::defaultKeys,"defaultKeys");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClientPrefs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::downScroll,"downScroll");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::middleScroll,"middleScroll");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::showFPS,"showFPS");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::flashing,"flashing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::globalAntialiasing,"globalAntialiasing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::noteSplashes,"noteSplashes");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::lowQuality,"lowQuality");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::framerate,"framerate");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::cursing,"cursing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::violence,"violence");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::camZooms,"camZooms");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::hideHud,"hideHud");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::noteOffset,"noteOffset");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::arrowHSV,"arrowHSV");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::imagesPersist,"imagesPersist");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::ghostTapping,"ghostTapping");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::hideTime,"hideTime");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::keyBinds,"keyBinds");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::defaultKeys,"defaultKeys");
};

#endif

::hx::Class ClientPrefs_obj::__mClass;

static ::String ClientPrefs_obj_sStaticFields[] = {
	HX_("downScroll",0f,ba,68,84),
	HX_("middleScroll",42,cd,58,62),
	HX_("showFPS",ec,0a,9a,7b),
	HX_("flashing",32,85,e8,99),
	HX_("globalAntialiasing",f7,9c,ed,4c),
	HX_("noteSplashes",a7,57,29,8d),
	HX_("lowQuality",8b,52,27,3e),
	HX_("framerate",8d,e5,4b,4e),
	HX_("cursing",cf,db,8f,cc),
	HX_("violence",5b,5e,88,3f),
	HX_("camZooms",71,f3,cd,90),
	HX_("hideHud",15,b9,3c,b7),
	HX_("noteOffset",25,a5,53,fe),
	HX_("arrowHSV",c2,f4,b4,fd),
	HX_("imagesPersist",3c,00,5c,08),
	HX_("ghostTapping",c6,6a,da,10),
	HX_("hideTime",ef,b5,ca,a5),
	HX_("keyBinds",f7,b5,69,f7),
	HX_("defaultKeys",55,db,c5,18),
	HX_("startControls",f8,e8,77,3c),
	HX_("saveSettings",40,c9,c5,9d),
	HX_("loadPrefs",2a,94,bf,e3),
	HX_("reloadControls",ef,16,46,27),
	::String(null())
};

void ClientPrefs_obj::__register()
{
	ClientPrefs_obj _hx_dummy;
	ClientPrefs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ClientPrefs",c5,55,e0,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ClientPrefs_obj::__GetStatic;
	__mClass->mSetStaticField = &ClientPrefs_obj::__SetStatic;
	__mClass->mMarkFunc = ClientPrefs_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ClientPrefs_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ClientPrefs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClientPrefs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientPrefs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientPrefs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ClientPrefs_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_10_boot)
HXDLIN(  10)		downScroll = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_11_boot)
HXDLIN(  11)		middleScroll = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_12_boot)
HXDLIN(  12)		showFPS = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_13_boot)
HXDLIN(  13)		flashing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_14_boot)
HXDLIN(  14)		globalAntialiasing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_15_boot)
HXDLIN(  15)		noteSplashes = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_16_boot)
HXDLIN(  16)		lowQuality = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_17_boot)
HXDLIN(  17)		framerate = 60;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_18_boot)
HXDLIN(  18)		cursing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_19_boot)
HXDLIN(  19)		violence = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_20_boot)
HXDLIN(  20)		camZooms = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_21_boot)
HXDLIN(  21)		hideHud = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_22_boot)
HXDLIN(  22)		noteOffset = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_23_boot)
HXDLIN(  23)		arrowHSV = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_19,3))->init(1,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_20,3))->init(2,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_21,3))->init(3,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_22,3));
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_24_boot)
HXDLIN(  24)		imagesPersist = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_25_boot)
HXDLIN(  25)		ghostTapping = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_26_boot)
HXDLIN(  26)		hideTime = false;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_29_boot)
HXDLIN(  29)		keyBinds =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

