#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
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
#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0105b02946ff30ba_395_new,"ControlsSubstate","new",0xe75631b9,"ControlsSubstate.new","OptionsState.hx",395,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_468_update,"ControlsSubstate","update",0xc5c9c250,"ControlsSubstate.update","OptionsState.hx",468,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_484_update,"ControlsSubstate","update",0xc5c9c250,"ControlsSubstate.update","OptionsState.hx",484,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_543_getInputTextNum,"ControlsSubstate","getInputTextNum",0xeb55653e,"ControlsSubstate.getInputTextNum","OptionsState.hx",543,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_553_changeSelection,"ControlsSubstate","changeSelection",0xda311b95,"ControlsSubstate.changeSelection","OptionsState.hx",553,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_600_changeAlt,"ControlsSubstate","changeAlt",0x496f0fb2,"ControlsSubstate.changeAlt","OptionsState.hx",600,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_623_unselectableCheck,"ControlsSubstate","unselectableCheck",0xa3530332,"ControlsSubstate.unselectableCheck","OptionsState.hx",623,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_630_addBindTexts,"ControlsSubstate","addBindTexts",0xea2c254f,"ControlsSubstate.addBindTexts","OptionsState.hx",630,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_645_reloadKeys,"ControlsSubstate","reloadKeys",0x6f13edb4,"ControlsSubstate.reloadKeys","OptionsState.hx",645,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_396_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",396,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_397_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",397,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_399_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",399,0x342db2ab)

void ControlsSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0105b02946ff30ba_395_new)
HXLINE( 467)		this->bindingTime = ((Float)0);
HXLINE( 466)		this->leaving = false;
HXLINE( 426)		this->nextAccept = 5;
HXLINE( 425)		this->rebindingKey = false;
HXLINE( 423)		this->grpInputsAlt = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 422)		this->grpInputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 402)		this->optionShit = ::cpp::VirtualArray_obj::__new(16)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("NOTES",21,14,b9,1d)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("note_left",b4,fe,20,a5)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("note_down",0f,ef,de,9f)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("note_up",c8,67,5c,4d)))->init(4,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("note_right",8f,ec,ca,4e)))->init(5,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(6,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("UI",54,4a,00,00)))->init(7,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("ui_left",12,4d,89,f7)))->init(8,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("ui_down",6d,3d,47,f2)))->init(9,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("ui_up",a6,c2,91,a3)))->init(10,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("ui_right",71,30,a7,17)))->init(11,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(12,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Reset",af,b9,f5,79))->init(1,HX_("reset",cf,49,c8,e6)))->init(13,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Accept",28,07,9b,3f))->init(1,HX_("accept",08,93,06,0b)))->init(14,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Back",47,06,ea,2b))->init(1,HX_("back",27,da,10,41)))->init(15,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Pause",d6,46,85,50))->init(1,HX_("pause",f6,d6,57,bd)));
HXLINE( 400)		this->bindLength = 0;
HXLINE( 429)		super::__construct();
HXLINE( 430)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 431)		this->add(this->grpOptions);
HXLINE( 433)		this->controlMap = ::ClientPrefs_obj::keyBinds->copy();
HXLINE( 434)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)));
HXLINE( 435)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,::ControlsSubstate_obj::defaultKey));
HXLINE( 437)		{
HXLINE( 437)			int _g = 0;
HXDLIN( 437)			int _g1 = this->optionShit->get_length();
HXDLIN( 437)			while((_g < _g1)){
HXLINE( 437)				_g = (_g + 1);
HXDLIN( 437)				int i = (_g - 1);
HXLINE( 438)				bool isCentered = false;
HXLINE( 439)				bool isDefaultKey = ::hx::IsEq( this->optionShit->__get(i)->__GetItem(0),::ControlsSubstate_obj::defaultKey );
HXLINE( 440)				if (this->unselectableCheck(i,true)) {
HXLINE( 441)					isCentered = true;
            				}
HXLINE( 444)				bool optionText;
HXDLIN( 444)				if (isCentered) {
HXLINE( 444)					optionText = isDefaultKey;
            				}
            				else {
HXLINE( 444)					optionText = true;
            				}
HXDLIN( 444)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((10 * i)) ),( (::String)(this->optionShit->__get(i)->__GetItem(0)) ),optionText,false,null(),null());
HXLINE( 445)				optionText1->isMenuItem = true;
HXLINE( 446)				if (isCentered) {
HXLINE( 447)					optionText1->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 448)					optionText1->forceX = optionText1->x;
HXLINE( 449)					optionText1->yAdd = ( (Float)(-55) );
            				}
            				else {
HXLINE( 451)					optionText1->forceX = ( (Float)(200) );
            				}
HXLINE( 453)				optionText1->yMult = ( (Float)(60) );
HXLINE( 454)				optionText1->targetY = ( (Float)(i) );
HXLINE( 455)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE( 457)				if (!(isCentered)) {
HXLINE( 458)					this->addBindTexts(optionText1,i);
HXLINE( 459)					this->bindLength++;
HXLINE( 460)					if ((::ControlsSubstate_obj::curSelected < 0)) {
HXLINE( 460)						::ControlsSubstate_obj::curSelected = i;
            					}
            				}
            			}
            		}
HXLINE( 463)		this->changeSelection(null());
            	}

Dynamic ControlsSubstate_obj::__CreateEmpty() { return new ControlsSubstate_obj; }

void *ControlsSubstate_obj::_hx_vtable = 0;

Dynamic ControlsSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlsSubstate_obj > _hx_result = new ControlsSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControlsSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x1b849407) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1b849407;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void ControlsSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_468_update)
HXLINE( 469)		if (!(this->rebindingKey)) {
HXLINE( 470)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 471)				this->changeSelection(-1);
            			}
HXLINE( 473)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 474)				this->changeSelection(1);
            			}
HXLINE( 476)			bool _hx_tmp;
HXDLIN( 476)			if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 476)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            			}
            			else {
HXLINE( 476)				_hx_tmp = true;
            			}
HXDLIN( 476)			if (_hx_tmp) {
HXLINE( 477)				this->changeAlt();
            			}
HXLINE( 480)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::Alphabet spr){
            					HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_484_update)
HXLINE( 484)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 481)				::ClientPrefs_obj::keyBinds = this->controlMap->copy();
HXLINE( 482)				::ClientPrefs_obj::reloadControls();
HXLINE( 483)				this->grpOptions->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 486)				this->close();
HXLINE( 487)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 487)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 490)			bool _hx_tmp1;
HXDLIN( 490)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 490)				_hx_tmp1 = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 490)				_hx_tmp1 = false;
            			}
HXDLIN( 490)			if (_hx_tmp1) {
HXLINE( 491)				if (::hx::IsEq( this->optionShit->__get(::ControlsSubstate_obj::curSelected)->__GetItem(0),::ControlsSubstate_obj::defaultKey )) {
HXLINE( 492)					this->controlMap = ::ClientPrefs_obj::defaultKeys->copy();
HXLINE( 493)					this->reloadKeys();
HXLINE( 494)					this->changeSelection(null());
HXLINE( 495)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 495)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 496)					if (!(this->unselectableCheck(::ControlsSubstate_obj::curSelected,null()))) {
HXLINE( 497)						this->bindingTime = ( (Float)(0) );
HXLINE( 498)						this->rebindingKey = true;
HXLINE( 499)						if (::ControlsSubstate_obj::curAlt) {
HXLINE( 500)							this->grpInputsAlt->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
            						else {
HXLINE( 502)							this->grpInputs->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
HXLINE( 504)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 504)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE( 508)			int keyPressed = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 509)			if ((keyPressed > -1)) {
HXLINE( 510)				::Array< int > keysArray = ( (::Array< int >)(this->controlMap->get(this->optionShit->__get(::ControlsSubstate_obj::curSelected)->__GetItem(1))) );
HXLINE( 511)				int _hx_tmp;
HXDLIN( 511)				if (::ControlsSubstate_obj::curAlt) {
HXLINE( 511)					_hx_tmp = 1;
            				}
            				else {
HXLINE( 511)					_hx_tmp = 0;
            				}
HXDLIN( 511)				keysArray[_hx_tmp] = keyPressed;
HXLINE( 513)				int opposite;
HXDLIN( 513)				if (::ControlsSubstate_obj::curAlt) {
HXLINE( 513)					opposite = 0;
            				}
            				else {
HXLINE( 513)					opposite = 1;
            				}
HXLINE( 514)				if ((keysArray->__get(opposite) == keysArray->__get((1 - opposite)))) {
HXLINE( 515)					keysArray[opposite] = -1;
            				}
HXLINE( 517)				this->controlMap->set(( (::String)(this->optionShit->__get(::ControlsSubstate_obj::curSelected)->__GetItem(1)) ),keysArray);
HXLINE( 519)				this->reloadKeys();
HXLINE( 520)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 520)				_hx_tmp1->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 521)				this->rebindingKey = false;
            			}
HXLINE( 524)			 ::ControlsSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 524)			_hx_tmp->bindingTime = (_hx_tmp->bindingTime + elapsed);
HXLINE( 525)			if ((this->bindingTime > 5)) {
HXLINE( 526)				if (::ControlsSubstate_obj::curAlt) {
HXLINE( 527)					this->grpInputsAlt->__get(::ControlsSubstate_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 529)					this->grpInputs->__get(::ControlsSubstate_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
HXLINE( 531)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 531)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 532)				this->rebindingKey = false;
HXLINE( 533)				this->bindingTime = ( (Float)(0) );
            			}
            		}
HXLINE( 537)		if ((this->nextAccept > 0)) {
HXLINE( 538)			 ::ControlsSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 538)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 540)		this->super::update(elapsed);
            	}


int ControlsSubstate_obj::getInputTextNum(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_543_getInputTextNum)
HXLINE( 544)		int num = 0;
HXLINE( 545)		{
HXLINE( 545)			int _g = 0;
HXDLIN( 545)			int _g1 = ::ControlsSubstate_obj::curSelected;
HXDLIN( 545)			while((_g < _g1)){
HXLINE( 545)				_g = (_g + 1);
HXDLIN( 545)				int i = (_g - 1);
HXLINE( 546)				if (::hx::IsGreater( this->optionShit->__get(i)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),1 )) {
HXLINE( 547)					num = (num + 1);
            				}
            			}
            		}
HXLINE( 550)		return num;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,getInputTextNum,return )

void ControlsSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_553_changeSelection)
HXLINE( 554)		while(true){
HXLINE( 555)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ControlsSubstate >();
HXDLIN( 555)			::ControlsSubstate_obj::curSelected = (::ControlsSubstate_obj::curSelected + change);
HXLINE( 556)			if ((::ControlsSubstate_obj::curSelected < 0)) {
HXLINE( 557)				::ControlsSubstate_obj::curSelected = (this->optionShit->get_length() - 1);
            			}
HXLINE( 558)			if ((::ControlsSubstate_obj::curSelected >= this->optionShit->get_length())) {
HXLINE( 559)				::ControlsSubstate_obj::curSelected = 0;
            			}
HXLINE( 554)			if (!(this->unselectableCheck(::ControlsSubstate_obj::curSelected,null()))) {
HXLINE( 554)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
HXLINE( 562)		int bullShit = 0;
HXLINE( 564)		{
HXLINE( 564)			int _g = 0;
HXDLIN( 564)			int _g1 = this->grpInputs->length;
HXDLIN( 564)			while((_g < _g1)){
HXLINE( 564)				_g = (_g + 1);
HXDLIN( 564)				int i = (_g - 1);
HXLINE( 565)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 567)		{
HXLINE( 567)			int _g2 = 0;
HXDLIN( 567)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 567)			while((_g2 < _g3)){
HXLINE( 567)				_g2 = (_g2 + 1);
HXDLIN( 567)				int i = (_g2 - 1);
HXLINE( 568)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 571)		{
HXLINE( 571)			int _g4 = 0;
HXDLIN( 571)			::Array< ::Dynamic> _g5 = this->grpOptions->members;
HXDLIN( 571)			while((_g4 < _g5->length)){
HXLINE( 571)				 ::Alphabet item = _g5->__get(_g4).StaticCast<  ::Alphabet >();
HXDLIN( 571)				_g4 = (_g4 + 1);
HXLINE( 572)				item->targetY = ( (Float)((bullShit - ::ControlsSubstate_obj::curSelected)) );
HXLINE( 573)				bullShit = (bullShit + 1);
HXLINE( 575)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 576)					item->set_alpha(((Float)0.6));
HXLINE( 577)					if ((item->targetY == 0)) {
HXLINE( 578)						item->set_alpha(( (Float)(1) ));
HXLINE( 579)						if (::ControlsSubstate_obj::curAlt) {
HXLINE( 580)							int _g = 0;
HXDLIN( 580)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 580)							while((_g < _g1)){
HXLINE( 580)								_g = (_g + 1);
HXDLIN( 580)								int i = (_g - 1);
HXLINE( 581)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 582)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 583)									goto _hx_goto_10;
            								}
            							}
            							_hx_goto_10:;
            						}
            						else {
HXLINE( 587)							int _g = 0;
HXDLIN( 587)							int _g1 = this->grpInputs->length;
HXDLIN( 587)							while((_g < _g1)){
HXLINE( 587)								_g = (_g + 1);
HXDLIN( 587)								int i = (_g - 1);
HXLINE( 588)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 589)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 590)									goto _hx_goto_11;
            								}
            							}
            							_hx_goto_11:;
            						}
            					}
            				}
            			}
            		}
HXLINE( 597)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 597)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubstate_obj,changeSelection,(void))

void ControlsSubstate_obj::changeAlt(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_600_changeAlt)
HXLINE( 601)		::ControlsSubstate_obj::curAlt = !(::ControlsSubstate_obj::curAlt);
HXLINE( 602)		{
HXLINE( 602)			int _g = 0;
HXDLIN( 602)			int _g1 = this->grpInputs->length;
HXDLIN( 602)			while((_g < _g1)){
HXLINE( 602)				_g = (_g + 1);
HXDLIN( 602)				int i = (_g - 1);
HXLINE( 603)				if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::ControlsSubstate_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 604)					this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 605)					if (!(::ControlsSubstate_obj::curAlt)) {
HXLINE( 606)						this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 608)					goto _hx_goto_13;
            				}
            			}
            			_hx_goto_13:;
            		}
HXLINE( 611)		{
HXLINE( 611)			int _g2 = 0;
HXDLIN( 611)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 611)			while((_g2 < _g3)){
HXLINE( 611)				_g2 = (_g2 + 1);
HXDLIN( 611)				int i = (_g2 - 1);
HXLINE( 612)				if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::ControlsSubstate_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 613)					this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 614)					if (::ControlsSubstate_obj::curAlt) {
HXLINE( 615)						this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 617)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE( 620)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 620)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,changeAlt,(void))

bool ControlsSubstate_obj::unselectableCheck(int num, ::Dynamic __o_checkDefaultKey){
            		 ::Dynamic checkDefaultKey = __o_checkDefaultKey;
            		if (::hx::IsNull(__o_checkDefaultKey)) checkDefaultKey = false;
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_623_unselectableCheck)
HXLINE( 624)		if (::hx::IsEq( this->optionShit->__get(num)->__GetItem(0),::ControlsSubstate_obj::defaultKey )) {
HXLINE( 625)			return ( (bool)(checkDefaultKey) );
            		}
HXLINE( 627)		if (::hx::IsLess( this->optionShit->__get(num)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),2 )) {
HXLINE( 627)			return ::hx::IsNotEq( this->optionShit->__get(num)->__GetItem(0),::ControlsSubstate_obj::defaultKey );
            		}
            		else {
HXLINE( 627)			return false;
            		}
HXDLIN( 627)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubstate_obj,unselectableCheck,return )

void ControlsSubstate_obj::addBindTexts( ::Alphabet optionText,int num){
            	HX_GC_STACKFRAME(&_hx_pos_0105b02946ff30ba_630_addBindTexts)
HXLINE( 631)		::cpp::VirtualArray keys = ( (::cpp::VirtualArray)(this->controlMap->get(this->optionShit->__get(num)->__GetItem(1))) );
HXLINE( 632)		 ::AttachedText text1 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(0)) )),400,-55,null());
HXLINE( 633)		text1->setPosition((optionText->x + 400),(optionText->y - ( (Float)(55) )));
HXLINE( 634)		text1->sprTracker = optionText;
HXLINE( 635)		this->grpInputs->push(text1);
HXLINE( 636)		this->add(text1);
HXLINE( 638)		 ::AttachedText text2 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(1)) )),650,-55,null());
HXLINE( 639)		text2->setPosition((optionText->x + 650),(optionText->y - ( (Float)(55) )));
HXLINE( 640)		text2->sprTracker = optionText;
HXLINE( 641)		this->grpInputsAlt->push(text2);
HXLINE( 642)		this->add(text2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubstate_obj,addBindTexts,(void))

void ControlsSubstate_obj::reloadKeys(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_645_reloadKeys)
HXLINE( 646)		while((this->grpInputs->length > 0)){
HXLINE( 647)			 ::AttachedText item = this->grpInputs->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 648)			item->kill();
HXLINE( 649)			this->grpInputs->remove(item);
HXLINE( 650)			item->destroy();
            		}
HXLINE( 652)		while((this->grpInputsAlt->length > 0)){
HXLINE( 653)			 ::AttachedText item = this->grpInputsAlt->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 654)			item->kill();
HXLINE( 655)			this->grpInputsAlt->remove(item);
HXLINE( 656)			item->destroy();
            		}
HXLINE( 659)		{
HXLINE( 659)			int _g = 0;
HXDLIN( 659)			int _g1 = this->grpOptions->length;
HXDLIN( 659)			while((_g < _g1)){
HXLINE( 659)				_g = (_g + 1);
HXDLIN( 659)				int i = (_g - 1);
HXLINE( 660)				if (!(this->unselectableCheck(i,true))) {
HXLINE( 661)					this->addBindTexts(Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::Alphabet >(),i);
            				}
            			}
            		}
HXLINE( 666)		int bullShit = 0;
HXLINE( 667)		{
HXLINE( 667)			int _g2 = 0;
HXDLIN( 667)			int _g3 = this->grpInputs->length;
HXDLIN( 667)			while((_g2 < _g3)){
HXLINE( 667)				_g2 = (_g2 + 1);
HXDLIN( 667)				int i = (_g2 - 1);
HXLINE( 668)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 670)		{
HXLINE( 670)			int _g4 = 0;
HXDLIN( 670)			int _g5 = this->grpInputsAlt->length;
HXDLIN( 670)			while((_g4 < _g5)){
HXLINE( 670)				_g4 = (_g4 + 1);
HXDLIN( 670)				int i = (_g4 - 1);
HXLINE( 671)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 674)		{
HXLINE( 674)			int _g6 = 0;
HXDLIN( 674)			::Array< ::Dynamic> _g7 = this->grpOptions->members;
HXDLIN( 674)			while((_g6 < _g7->length)){
HXLINE( 674)				 ::Alphabet item = _g7->__get(_g6).StaticCast<  ::Alphabet >();
HXDLIN( 674)				_g6 = (_g6 + 1);
HXLINE( 675)				item->targetY = ( (Float)((bullShit - ::ControlsSubstate_obj::curSelected)) );
HXLINE( 676)				bullShit = (bullShit + 1);
HXLINE( 678)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 679)					item->set_alpha(((Float)0.6));
HXLINE( 680)					if ((item->targetY == 0)) {
HXLINE( 681)						item->set_alpha(( (Float)(1) ));
HXLINE( 682)						if (::ControlsSubstate_obj::curAlt) {
HXLINE( 683)							int _g = 0;
HXDLIN( 683)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 683)							while((_g < _g1)){
HXLINE( 683)								_g = (_g + 1);
HXDLIN( 683)								int i = (_g - 1);
HXLINE( 684)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 685)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            						else {
HXLINE( 689)							int _g = 0;
HXDLIN( 689)							int _g1 = this->grpInputs->length;
HXDLIN( 689)							while((_g < _g1)){
HXLINE( 689)								_g = (_g + 1);
HXDLIN( 689)								int i = (_g - 1);
HXLINE( 690)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 691)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,reloadKeys,(void))

int ControlsSubstate_obj::curSelected;

bool ControlsSubstate_obj::curAlt;

::String ControlsSubstate_obj::defaultKey;


::hx::ObjectPtr< ControlsSubstate_obj > ControlsSubstate_obj::__new() {
	::hx::ObjectPtr< ControlsSubstate_obj > __this = new ControlsSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControlsSubstate_obj > ControlsSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControlsSubstate_obj *__this = (ControlsSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlsSubstate_obj), true, "ControlsSubstate"));
	*(void **)__this = ControlsSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControlsSubstate_obj::ControlsSubstate_obj()
{
}

void ControlsSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlsSubstate);
	HX_MARK_MEMBER_NAME(bindLength,"bindLength");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpInputs,"grpInputs");
	HX_MARK_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_MARK_MEMBER_NAME(controlMap,"controlMap");
	HX_MARK_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(leaving,"leaving");
	HX_MARK_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlsSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindLength,"bindLength");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpInputs,"grpInputs");
	HX_VISIT_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_VISIT_MEMBER_NAME(controlMap,"controlMap");
	HX_VISIT_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(leaving,"leaving");
	HX_VISIT_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ControlsSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { return ::hx::Val( leaving ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { return ::hx::Val( grpInputs ); }
		if (HX_FIELD_EQ(inName,"changeAlt") ) { return ::hx::Val( changeAlt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { return ::hx::Val( bindLength ); }
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"controlMap") ) { return ::hx::Val( controlMap ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"reloadKeys") ) { return ::hx::Val( reloadKeys_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { return ::hx::Val( bindingTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { return ::hx::Val( grpInputsAlt ); }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { return ::hx::Val( rebindingKey ); }
		if (HX_FIELD_EQ(inName,"addBindTexts") ) { return ::hx::Val( addBindTexts_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getInputTextNum") ) { return ::hx::Val( getInputTextNum_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ControlsSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { outValue = ( curAlt ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { outValue = ( defaultKey ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val ControlsSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { leaving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { grpInputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { bindLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlMap") ) { controlMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { bindingTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { grpInputsAlt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { rebindingKey=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControlsSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { curAlt=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { defaultKey=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ControlsSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bindLength",83,6a,31,c7));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpInputs",ee,3e,7e,59));
	outFields->push(HX_("grpInputsAlt",db,fa,fe,c1));
	outFields->push(HX_("controlMap",3f,0f,a7,04));
	outFields->push(HX_("rebindingKey",cd,70,6f,a8));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("leaving",f4,09,47,15));
	outFields->push(HX_("bindingTime",f2,09,cb,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControlsSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ControlsSubstate_obj,bindLength),HX_("bindLength",83,6a,31,c7)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ControlsSubstate_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ControlsSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubstate_obj,grpInputs),HX_("grpInputs",ee,3e,7e,59)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubstate_obj,grpInputsAlt),HX_("grpInputsAlt",db,fa,fe,c1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ControlsSubstate_obj,controlMap),HX_("controlMap",3f,0f,a7,04)},
	{::hx::fsBool,(int)offsetof(ControlsSubstate_obj,rebindingKey),HX_("rebindingKey",cd,70,6f,a8)},
	{::hx::fsInt,(int)offsetof(ControlsSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsBool,(int)offsetof(ControlsSubstate_obj,leaving),HX_("leaving",f4,09,47,15)},
	{::hx::fsFloat,(int)offsetof(ControlsSubstate_obj,bindingTime),HX_("bindingTime",f2,09,cb,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ControlsSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ControlsSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &ControlsSubstate_obj::curAlt,HX_("curAlt",89,9b,c2,3e)},
	{::hx::fsString,(void *) &ControlsSubstate_obj::defaultKey,HX_("defaultKey",5e,97,fe,25)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ControlsSubstate_obj_sMemberFields[] = {
	HX_("bindLength",83,6a,31,c7),
	HX_("optionShit",d5,2d,ee,91),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpInputs",ee,3e,7e,59),
	HX_("grpInputsAlt",db,fa,fe,c1),
	HX_("controlMap",3f,0f,a7,04),
	HX_("rebindingKey",cd,70,6f,a8),
	HX_("nextAccept",5b,44,38,c0),
	HX_("leaving",f4,09,47,15),
	HX_("bindingTime",f2,09,cb,be),
	HX_("update",09,86,05,87),
	HX_("getInputTextNum",65,e2,d9,59),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeAlt",99,a5,f7,1d),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("addBindTexts",c8,f9,1e,b0),
	HX_("reloadKeys",ed,81,0e,92),
	::String(null()) };

static void ControlsSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::curAlt,"curAlt");
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::defaultKey,"defaultKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlsSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::curAlt,"curAlt");
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::defaultKey,"defaultKey");
};

#endif

::hx::Class ControlsSubstate_obj::__mClass;

static ::String ControlsSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("curAlt",89,9b,c2,3e),
	HX_("defaultKey",5e,97,fe,25),
	::String(null())
};

void ControlsSubstate_obj::__register()
{
	ControlsSubstate_obj _hx_dummy;
	ControlsSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ControlsSubstate",47,e1,a2,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControlsSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &ControlsSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = ControlsSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ControlsSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlsSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlsSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlsSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlsSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlsSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ControlsSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_396_boot)
HXDLIN( 396)		curSelected = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_397_boot)
HXDLIN( 397)		curAlt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_399_boot)
HXDLIN( 399)		defaultKey = HX_("Reset to Default Keys",47,5b,97,3d);
            	}
}

