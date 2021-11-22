#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_ControlsSubstate
#include <ControlsSubstate.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_NotesSubstate
#include <NotesSubstate.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_PreferencesSubstate
#include <PreferencesSubstate.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_03f5e745aacd5817_31_new,"OptionsState","new",0x73d32065,"OptionsState.new","OptionsState.hx",31,0x342db2ab)
static const ::String _hx_array_data_0f8009f3_1[] = {
	HX_("Notes",21,4c,f8,32),HX_("Controls",96,42,6e,11),HX_("Preferences",98,4e,23,57),
};
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_38_create,"OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",38,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_66_closeSubState,"OptionsState","closeSubState",0x724d808e,"OptionsState.closeSubState","OptionsState.hx",66,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_72_update,"OptionsState","update",0xf1464724,"OptionsState.update","OptionsState.hx",72,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_105_changeSelection,"OptionsState","changeSelection",0x02af5c41,"OptionsState.changeSelection","OptionsState.hx",105,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_35_boot,"OptionsState","boot",0xdd02388d,"OptionsState.boot","OptionsState.hx",35,0x342db2ab)

void OptionsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_31_new)
HXLINE(  33)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_0f8009f3_1,3);
HXLINE(  31)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2aabc417) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2aabc417;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_38_create)
HXLINE(  40)		::DiscordClient_obj::changePresence(HX_("Options Menu",e1,25,4c,98),null(),null(),null(),null());
HXLINE(  43)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  43)		::String library = null();
HXDLIN(  43)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  43)		 ::Dynamic _hx_tmp1;
HXDLIN(  43)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  43)			_hx_tmp1 = imageToReturn;
            		}
            		else {
HXLINE(  43)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  43)		::OptionsState_obj::menuBG = _hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE(  44)		::OptionsState_obj::menuBG->set_color(-1412611);
HXLINE(  45)		 ::flixel::FlxSprite _hx_tmp2 = ::OptionsState_obj::menuBG;
HXDLIN(  45)		_hx_tmp2->setGraphicSize(::Std_obj::_hx_int((::OptionsState_obj::menuBG->get_width() * ((Float)1.1))),null());
HXLINE(  46)		::OptionsState_obj::menuBG->updateHitbox();
HXLINE(  47)		::OptionsState_obj::menuBG->screenCenter(null());
HXLINE(  48)		::OptionsState_obj::menuBG->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  49)		this->add(::OptionsState_obj::menuBG);
HXLINE(  51)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  52)		this->add(this->grpOptions);
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			int _g1 = this->options->length;
HXDLIN(  54)			while((_g < _g1)){
HXLINE(  54)				_g = (_g + 1);
HXDLIN(  54)				int i = (_g - 1);
HXLINE(  56)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),this->options->__get(i),true,false,null(),null());
HXLINE(  57)				optionText->screenCenter(null());
HXLINE(  58)				optionText->set_y((optionText->y + ((( (Float)(100) ) * (( (Float)(i) ) - (( (Float)(this->options->length) ) / ( (Float)(2) )))) + 50)));
HXLINE(  59)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  61)		this->changeSelection(null());
HXLINE(  63)		this->super::create();
            	}


void OptionsState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_66_closeSubState)
HXLINE(  67)		this->super::closeSubState();
HXLINE(  68)		::ClientPrefs_obj::saveSettings();
HXLINE(  69)		this->changeSelection(null());
            	}


void OptionsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_72_update)
HXLINE(  73)		this->super::update(elapsed);
HXLINE(  75)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE(  76)			this->changeSelection(-1);
            		}
HXLINE(  78)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE(  79)			this->changeSelection(1);
            		}
HXLINE(  82)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  83)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  83)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  84)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(  87)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  88)			{
HXLINE(  88)				int _g = 0;
HXDLIN(  88)				::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN(  88)				while((_g < _g1->length)){
HXLINE(  88)					 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN(  88)					_g = (_g + 1);
HXLINE(  89)					item->set_alpha(( (Float)(0) ));
            				}
            			}
HXLINE(  92)			::String _hx_switch_0 = this->options->__get(::OptionsState_obj::curSelected);
            			if (  (_hx_switch_0==HX_("Controls",96,42,6e,11)) ){
HXLINE(  97)				this->openSubState( ::ControlsSubstate_obj::__alloc( HX_CTX ));
HXDLIN(  97)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Notes",21,4c,f8,32)) ){
HXLINE(  94)				this->openSubState( ::NotesSubstate_obj::__alloc( HX_CTX ));
HXDLIN(  94)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Preferences",98,4e,23,57)) ){
HXLINE( 100)				this->openSubState( ::PreferencesSubstate_obj::__alloc( HX_CTX ));
HXDLIN( 100)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
            		}
            	}


void OptionsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_105_changeSelection)
HXLINE( 106)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::OptionsState >();
HXDLIN( 106)		::OptionsState_obj::curSelected = (::OptionsState_obj::curSelected + change);
HXLINE( 107)		if ((::OptionsState_obj::curSelected < 0)) {
HXLINE( 108)			::OptionsState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE( 109)		if ((::OptionsState_obj::curSelected >= this->options->length)) {
HXLINE( 110)			::OptionsState_obj::curSelected = 0;
            		}
HXLINE( 112)		int bullShit = 0;
HXLINE( 114)		{
HXLINE( 114)			int _g = 0;
HXDLIN( 114)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 114)			while((_g < _g1->length)){
HXLINE( 114)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 114)				_g = (_g + 1);
HXLINE( 115)				item->targetY = ( (Float)((bullShit - ::OptionsState_obj::curSelected)) );
HXLINE( 116)				bullShit = (bullShit + 1);
HXLINE( 118)				item->set_alpha(((Float)0.6));
HXLINE( 119)				if ((item->targetY == 0)) {
HXLINE( 120)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,changeSelection,(void))

int OptionsState_obj::curSelected;

 ::flixel::FlxSprite OptionsState_obj::menuBG;


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { outValue = ( menuBG ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { menuBG=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &OptionsState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &OptionsState_obj::menuBG,HX_("menuBG",24,65,6d,05)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void OptionsState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
};

#endif

::hx::Class OptionsState_obj::__mClass;

static ::String OptionsState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuBG",24,65,6d,05),
	::String(null())
};

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsState",f3,09,80,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsState_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsState_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OptionsState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_35_boot)
HXDLIN(  35)		curSelected = 0;
            	}
}

