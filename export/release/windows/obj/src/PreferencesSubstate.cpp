#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_CheckboxThingie
#include <CheckboxThingie.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_641e954371eb7a1d_703_new,"PreferencesSubstate","new",0xf9ee38bb,"PreferencesSubstate.new","OptionsState.hx",703,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_823_update,"PreferencesSubstate","update",0x0402888e,"PreferencesSubstate.update","OptionsState.hx",823,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_835_update,"PreferencesSubstate","update",0x0402888e,"PreferencesSubstate.update","OptionsState.hx",835,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_838_update,"PreferencesSubstate","update",0x0402888e,"PreferencesSubstate.update","OptionsState.hx",838,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_970_changeSelection,"PreferencesSubstate","changeSelection",0x3fb89d97,"PreferencesSubstate.changeSelection","OptionsState.hx",970,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_1051_reloadValues,"PreferencesSubstate","reloadValues",0xc2328860,"PreferencesSubstate.reloadValues","OptionsState.hx",1051,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_1107_unselectableCheck,"PreferencesSubstate","unselectableCheck",0x1b4089b4,"PreferencesSubstate.unselectableCheck","OptionsState.hx",1107,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_705_boot,"PreferencesSubstate","boot",0xae9c6b77,"PreferencesSubstate.boot","OptionsState.hx",705,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_706_boot,"PreferencesSubstate","boot",0xae9c6b77,"PreferencesSubstate.boot","OptionsState.hx",706,0x342db2ab)
static const ::String _hx_array_data_bf26bf49_28[] = {
	HX_("GRAPHICS",cb,88,ed,6b),HX_("GAMEPLAY",e6,92,2c,25),
};
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_710_boot,"PreferencesSubstate","boot",0xae9c6b77,"PreferencesSubstate.boot","OptionsState.hx",710,0x342db2ab)
static const ::String _hx_array_data_bf26bf49_30[] = {
	HX_("Framerate",6d,c5,1e,f0),HX_("Note Delay",d5,70,f0,95),
};
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_715_boot,"PreferencesSubstate","boot",0xae9c6b77,"PreferencesSubstate.boot","OptionsState.hx",715,0x342db2ab)
static const ::String _hx_array_data_bf26bf49_32[] = {
	HX_("GRAPHICS",cb,88,ed,6b),HX_("Low Quality",f3,10,75,e8),HX_("Anti-Aliasing",9d,02,6c,80),HX_("Persistent Cached Data",ff,eb,03,14),HX_("Framerate",6d,c5,1e,f0),HX_("GAMEPLAY",e6,92,2c,25),HX_("Downscroll",0f,4a,85,46),HX_("Middlescroll",42,a5,d6,f5),HX_("Ghost Tapping",44,6c,9f,40),HX_("Note Delay",d5,70,f0,95),HX_("Note Splashes",83,c7,78,74),HX_("Hide HUD",59,3a,04,5d),HX_("Hide Song Length",93,89,0c,bf),HX_("Flashing Lights",0b,e4,0d,04),HX_("Camera Zooms",45,a6,9b,43),HX_("FPS Counter",85,ef,54,c9),
};

void PreferencesSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_641e954371eb7a1d_703_new)
HXLINE( 821)		this->holdTime = ((Float)0);
HXLINE( 820)		this->nextAccept = 5;
HXLINE( 744)		this->showCharacter = null();
HXLINE( 742)		this->textNumber = ::Array_obj< int >::__new(0);
HXLINE( 740)		this->checkboxNumber = ::Array_obj< int >::__new(0);
HXLINE( 739)		this->checkboxArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 749)		super::__construct();
HXLINE( 751)		this->showCharacter =  ::Character_obj::__alloc( HX_CTX ,( (Float)(840) ),( (Float)(170) ),HX_("bf",c4,55,00,00),true);
HXLINE( 752)		 ::Character _hx_tmp = this->showCharacter;
HXDLIN( 752)		_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->showCharacter->get_width() * ((Float)0.8))),null());
HXLINE( 753)		this->showCharacter->updateHitbox();
HXLINE( 754)		this->showCharacter->dance();
HXLINE( 755)		this->add(this->showCharacter);
HXLINE( 756)		this->showCharacter->set_visible(false);
HXLINE( 758)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 759)		this->add(this->grpOptions);
HXLINE( 761)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 762)		this->add(this->grpTexts);
HXLINE( 764)		{
HXLINE( 764)			int _g = 0;
HXDLIN( 764)			int _g1 = ::PreferencesSubstate_obj::options->length;
HXDLIN( 764)			while((_g < _g1)){
HXLINE( 764)				_g = (_g + 1);
HXDLIN( 764)				int i = (_g - 1);
HXLINE( 766)				bool isCentered = this->unselectableCheck(i);
HXLINE( 767)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((70 * i)) ),::PreferencesSubstate_obj::options->__get(i),false,false,null(),null());
HXLINE( 768)				optionText->isMenuItem = true;
HXLINE( 769)				if (isCentered) {
HXLINE( 770)					optionText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 771)					optionText->forceX = optionText->x;
            				}
            				else {
HXLINE( 773)					optionText->set_x((optionText->x + 300));
HXLINE( 774)					optionText->forceX = ( (Float)(300) );
            				}
HXLINE( 776)				optionText->yMult = ( (Float)(90) );
HXLINE( 777)				optionText->targetY = ( (Float)(i) );
HXLINE( 778)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE( 780)				if (!(isCentered)) {
HXLINE( 781)					bool useCheckbox = true;
HXLINE( 782)					{
HXLINE( 782)						int _g = 0;
HXDLIN( 782)						int _g1 = ::PreferencesSubstate_obj::noCheckbox->length;
HXDLIN( 782)						while((_g < _g1)){
HXLINE( 782)							_g = (_g + 1);
HXDLIN( 782)							int j = (_g - 1);
HXLINE( 783)							if ((::PreferencesSubstate_obj::options->__get(i) == ::PreferencesSubstate_obj::noCheckbox->__get(j))) {
HXLINE( 784)								useCheckbox = false;
HXLINE( 785)								goto _hx_goto_1;
            							}
            						}
            						_hx_goto_1:;
            					}
HXLINE( 789)					if (useCheckbox) {
HXLINE( 790)						 ::CheckboxThingie checkbox =  ::CheckboxThingie_obj::__alloc( HX_CTX ,(optionText->x - ( (Float)(105) )),optionText->y,false);
HXLINE( 791)						checkbox->sprTracker = optionText;
HXLINE( 792)						this->checkboxArray->push(checkbox);
HXLINE( 793)						this->checkboxNumber->push(i);
HXLINE( 794)						this->add(checkbox);
            					}
            					else {
HXLINE( 796)						 ::AttachedText valueText =  ::AttachedText_obj::__alloc( HX_CTX ,HX_("0",30,00,00,00),(optionText->get_width() + 80),null(),null());
HXLINE( 797)						valueText->sprTracker = optionText;
HXLINE( 798)						this->grpTexts->add(valueText).StaticCast<  ::AttachedText >();
HXLINE( 799)						this->textNumber->push(i);
            					}
            				}
            			}
            		}
HXLINE( 804)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,600,1180,HX_("",00,00,00,00),32,null());
HXLINE( 805)		this->descText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 806)		this->descText->scrollFactor->set(null(),null());
HXLINE( 807)		this->descText->set_borderSize(((Float)2.4));
HXLINE( 808)		this->add(this->descText);
HXLINE( 810)		{
HXLINE( 810)			int _g2 = 0;
HXDLIN( 810)			int _g3 = ::PreferencesSubstate_obj::options->length;
HXDLIN( 810)			while((_g2 < _g3)){
HXLINE( 810)				_g2 = (_g2 + 1);
HXDLIN( 810)				int i = (_g2 - 1);
HXLINE( 811)				if (!(this->unselectableCheck(i))) {
HXLINE( 812)					::PreferencesSubstate_obj::curSelected = i;
HXLINE( 813)					goto _hx_goto_2;
            				}
            			}
            			_hx_goto_2:;
            		}
HXLINE( 816)		this->changeSelection(null());
HXLINE( 817)		this->reloadValues();
            	}

Dynamic PreferencesSubstate_obj::__CreateEmpty() { return new PreferencesSubstate_obj; }

void *PreferencesSubstate_obj::_hx_vtable = 0;

Dynamic PreferencesSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PreferencesSubstate_obj > _hx_result = new PreferencesSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PreferencesSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x32c94489) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x32c94489;
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

void PreferencesSubstate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_641e954371eb7a1d_823_update)
HXLINE( 824)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 826)			this->changeSelection(-1);
            		}
HXLINE( 828)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 830)			this->changeSelection(1);
            		}
HXLINE( 833)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::Alphabet spr){
            				HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_835_update)
HXLINE( 835)				spr->set_alpha(( (Float)(0) ));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::AttachedText spr){
            				HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_838_update)
HXLINE( 838)				spr->set_alpha(( (Float)(0) ));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 834)			this->grpOptions->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 837)			this->grpTexts->forEachAlive( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 840)			{
HXLINE( 840)				int _g = 0;
HXDLIN( 840)				int _g1 = this->checkboxArray->length;
HXDLIN( 840)				while((_g < _g1)){
HXLINE( 840)					_g = (_g + 1);
HXDLIN( 840)					int i = (_g - 1);
HXLINE( 841)					 ::CheckboxThingie spr = this->checkboxArray->__get(i).StaticCast<  ::CheckboxThingie >();
HXLINE( 842)					if (::hx::IsNotNull( spr )) {
HXLINE( 843)						spr->set_alpha(( (Float)(0) ));
            					}
            				}
            			}
HXLINE( 846)			if (::hx::IsNotNull( this->showCharacter )) {
HXLINE( 847)				this->showCharacter->set_alpha(( (Float)(0) ));
            			}
HXLINE( 849)			this->descText->set_alpha(( (Float)(0) ));
HXLINE( 850)			this->close();
HXLINE( 851)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 851)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 854)		bool usesCheckbox = true;
HXLINE( 855)		{
HXLINE( 855)			int _g = 0;
HXDLIN( 855)			int _g1 = ::PreferencesSubstate_obj::noCheckbox->length;
HXDLIN( 855)			while((_g < _g1)){
HXLINE( 855)				_g = (_g + 1);
HXDLIN( 855)				int i = (_g - 1);
HXLINE( 856)				if ((::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected) == ::PreferencesSubstate_obj::noCheckbox->__get(i))) {
HXLINE( 857)					usesCheckbox = false;
HXLINE( 858)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 862)		if (usesCheckbox) {
HXLINE( 863)			bool _hx_tmp;
HXDLIN( 863)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 863)				_hx_tmp = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 863)				_hx_tmp = false;
            			}
HXDLIN( 863)			if (_hx_tmp) {
HXLINE( 864)				::String _hx_switch_0 = ::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected);
            				if (  (_hx_switch_0==HX_("Anti-Aliasing",9d,02,6c,80)) ){
HXLINE( 874)					::ClientPrefs_obj::globalAntialiasing = !(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 875)					this->showCharacter->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 876)					{
HXLINE( 876)						 ::Dynamic filter = null();
HXDLIN( 876)						 ::flixel::group::FlxTypedGroupIterator item =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpOptions->members,filter);
HXDLIN( 876)						while(item->hasNext()){
HXLINE( 876)							 ::Alphabet item1 = item->next().StaticCast<  ::Alphabet >();
HXLINE( 877)							item1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            						}
            					}
HXLINE( 879)					{
HXLINE( 879)						int _g = 0;
HXDLIN( 879)						int _g1 = this->checkboxArray->length;
HXDLIN( 879)						while((_g < _g1)){
HXLINE( 879)							_g = (_g + 1);
HXDLIN( 879)							int i = (_g - 1);
HXLINE( 880)							 ::CheckboxThingie spr = this->checkboxArray->__get(i).StaticCast<  ::CheckboxThingie >();
HXLINE( 881)							if (::hx::IsNotNull( spr )) {
HXLINE( 882)								spr->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            							}
            						}
            					}
HXLINE( 885)					::OptionsState_obj::menuBG->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 873)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Camera Zooms",45,a6,9b,43)) ){
HXLINE( 909)					::ClientPrefs_obj::camZooms = !(::ClientPrefs_obj::camZooms);
HXDLIN( 909)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Downscroll",0f,4a,85,46)) ){
HXLINE( 900)					::ClientPrefs_obj::downScroll = !(::ClientPrefs_obj::downScroll);
HXDLIN( 900)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("FPS Counter",85,ef,54,c9)) ){
HXLINE( 866)					::ClientPrefs_obj::showFPS = !(::ClientPrefs_obj::showFPS);
HXLINE( 867)					if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 868)						::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            					}
HXLINE( 865)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Flashing Lights",0b,e4,0d,04)) ){
HXLINE( 891)					::ClientPrefs_obj::flashing = !(::ClientPrefs_obj::flashing);
HXDLIN( 891)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Ghost Tapping",44,6c,9f,40)) ){
HXLINE( 906)					::ClientPrefs_obj::ghostTapping = !(::ClientPrefs_obj::ghostTapping);
HXDLIN( 906)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Hide HUD",59,3a,04,5d)) ){
HXLINE( 912)					::ClientPrefs_obj::hideHud = !(::ClientPrefs_obj::hideHud);
HXDLIN( 912)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Hide Song Length",93,89,0c,bf)) ){
HXLINE( 919)					::ClientPrefs_obj::hideTime = !(::ClientPrefs_obj::hideTime);
HXDLIN( 919)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Low Quality",f3,10,75,e8)) ){
HXLINE( 871)					::ClientPrefs_obj::lowQuality = !(::ClientPrefs_obj::lowQuality);
HXDLIN( 871)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Middlescroll",42,a5,d6,f5)) ){
HXLINE( 903)					::ClientPrefs_obj::middleScroll = !(::ClientPrefs_obj::middleScroll);
HXDLIN( 903)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Note Splashes",83,c7,78,74)) ){
HXLINE( 888)					::ClientPrefs_obj::noteSplashes = !(::ClientPrefs_obj::noteSplashes);
HXDLIN( 888)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Persistent Cached Data",ff,eb,03,14)) ){
HXLINE( 915)					::ClientPrefs_obj::imagesPersist = !(::ClientPrefs_obj::imagesPersist);
HXLINE( 916)					::flixel::graphics::FlxGraphic_obj::defaultPersist = ::ClientPrefs_obj::imagesPersist;
HXLINE( 914)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Swearing",d0,49,69,67)) ){
HXLINE( 897)					::ClientPrefs_obj::cursing = !(::ClientPrefs_obj::cursing);
HXDLIN( 897)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Violence",7b,1a,3a,19)) ){
HXLINE( 894)					::ClientPrefs_obj::violence = !(::ClientPrefs_obj::violence);
HXDLIN( 894)					goto _hx_goto_6;
            				}
            				_hx_goto_6:;
HXLINE( 921)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 921)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 922)				this->reloadValues();
            			}
            		}
            		else {
HXLINE( 925)			bool _hx_tmp;
HXDLIN( 925)			if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 925)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            			}
            			else {
HXLINE( 925)				_hx_tmp = true;
            			}
HXDLIN( 925)			if (_hx_tmp) {
HXLINE( 926)				int add;
HXDLIN( 926)				if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 926)					add = -1;
            				}
            				else {
HXLINE( 926)					add = 1;
            				}
HXLINE( 927)				bool _hx_tmp;
HXDLIN( 927)				bool _hx_tmp1;
HXDLIN( 927)				if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 927)					_hx_tmp1 = ::PlayerSettings_obj::player1->controls->_ui_leftP->check();
            				}
            				else {
HXLINE( 927)					_hx_tmp1 = true;
            				}
HXDLIN( 927)				if (!(_hx_tmp1)) {
HXLINE( 927)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            				}
            				else {
HXLINE( 927)					_hx_tmp = true;
            				}
HXDLIN( 927)				if (_hx_tmp) {
HXLINE( 928)					::String _hx_switch_1 = ::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected);
            					if (  (_hx_switch_1==HX_("Framerate",6d,c5,1e,f0)) ){
HXLINE( 930)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ClientPrefs >();
HXDLIN( 930)						::ClientPrefs_obj::framerate = (::ClientPrefs_obj::framerate + add);
HXLINE( 931)						if ((::ClientPrefs_obj::framerate < 60)) {
HXLINE( 931)							::ClientPrefs_obj::framerate = 60;
            						}
            						else {
HXLINE( 932)							if ((::ClientPrefs_obj::framerate > 240)) {
HXLINE( 932)								::ClientPrefs_obj::framerate = 240;
            							}
            						}
HXLINE( 934)						if ((::ClientPrefs_obj::framerate > ::flixel::FlxG_obj::drawFramerate)) {
HXLINE( 935)							::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
HXLINE( 936)							::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
            						}
            						else {
HXLINE( 938)							::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
HXLINE( 939)							::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
            						}
HXLINE( 929)						goto _hx_goto_9;
            					}
            					if (  (_hx_switch_1==HX_("Note Delay",d5,70,f0,95)) ){
HXLINE( 942)						int mult = 1;
HXLINE( 943)						if ((this->holdTime > ((Float)1.5))) {
HXLINE( 944)							mult = 2;
            						}
HXLINE( 946)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ClientPrefs >();
HXDLIN( 946)						::ClientPrefs_obj::noteOffset = (::ClientPrefs_obj::noteOffset + (add * mult));
HXLINE( 947)						if ((::ClientPrefs_obj::noteOffset < 0)) {
HXLINE( 947)							::ClientPrefs_obj::noteOffset = 0;
            						}
            						else {
HXLINE( 948)							if ((::ClientPrefs_obj::noteOffset > 500)) {
HXLINE( 948)								::ClientPrefs_obj::noteOffset = 500;
            							}
            						}
HXLINE( 941)						goto _hx_goto_9;
            					}
            					_hx_goto_9:;
            				}
HXLINE( 950)				this->reloadValues();
HXLINE( 952)				if ((this->holdTime <= 0)) {
HXLINE( 952)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 952)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
HXLINE( 953)				 ::PreferencesSubstate _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 953)				_hx_tmp2->holdTime = (_hx_tmp2->holdTime + elapsed);
            			}
            			else {
HXLINE( 955)				this->holdTime = ( (Float)(0) );
            			}
            		}
HXLINE( 959)		bool _hx_tmp;
HXDLIN( 959)		if (::hx::IsNotNull( this->showCharacter )) {
HXLINE( 959)			_hx_tmp = this->showCharacter->animation->_curAnim->finished;
            		}
            		else {
HXLINE( 959)			_hx_tmp = false;
            		}
HXDLIN( 959)		if (_hx_tmp) {
HXLINE( 960)			this->showCharacter->dance();
            		}
HXLINE( 963)		if ((this->nextAccept > 0)) {
HXLINE( 964)			 ::PreferencesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 964)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 966)		this->super::update(elapsed);
            	}


void PreferencesSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_970_changeSelection)
HXLINE( 971)		while(true){
HXLINE( 972)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PreferencesSubstate >();
HXDLIN( 972)			::PreferencesSubstate_obj::curSelected = (::PreferencesSubstate_obj::curSelected + change);
HXLINE( 973)			if ((::PreferencesSubstate_obj::curSelected < 0)) {
HXLINE( 974)				::PreferencesSubstate_obj::curSelected = (::PreferencesSubstate_obj::options->length - 1);
            			}
HXLINE( 975)			if ((::PreferencesSubstate_obj::curSelected >= ::PreferencesSubstate_obj::options->length)) {
HXLINE( 976)				::PreferencesSubstate_obj::curSelected = 0;
            			}
HXLINE( 971)			if (!(this->unselectableCheck(::PreferencesSubstate_obj::curSelected))) {
HXLINE( 971)				goto _hx_goto_13;
            			}
            		}
            		_hx_goto_13:;
HXLINE( 979)		::String daText = HX_("",00,00,00,00);
HXLINE( 980)		::String _hx_switch_0 = ::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected);
            		if (  (_hx_switch_0==HX_("Anti-Aliasing",9d,02,6c,80)) ){
HXLINE( 992)			daText = HX_("If unchecked, disables anti-aliasing, increases performance\nat the cost of the graphics not looking as smooth.",14,51,dd,4e);
HXDLIN( 992)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Camera Zooms",45,a6,9b,43)) ){
HXLINE(1008)			daText = HX_("If unchecked, the camera won't zoom in on a beat hit.",fd,78,13,6b);
HXDLIN(1008)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Downscroll",0f,4a,85,46)) ){
HXLINE( 994)			daText = HX_("If checked, notes go Down instead of Up, simple enough.",0d,a5,bc,fc);
HXDLIN( 994)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("FPS Counter",85,ef,54,c9)) ){
HXLINE( 986)			daText = HX_("If unchecked, hides FPS Counter.",17,fc,a1,74);
HXDLIN( 986)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Flashing Lights",0b,e4,0d,04)) ){
HXLINE(1006)			daText = HX_("Uncheck this if you're sensitive to flashing lights!",9e,ed,11,12);
HXDLIN(1006)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Framerate",6d,c5,1e,f0)) ){
HXLINE( 982)			daText = HX_("Pretty self explanatory, isn't it?\nDefault value is 60.",02,87,bf,af);
HXDLIN( 982)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Ghost Tapping",44,6c,9f,40)) ){
HXLINE( 998)			daText = HX_("If checked, you won't get misses from pressing keys\nwhile there are no notes able to be hit.",c7,46,2f,fa);
HXDLIN( 998)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Hide HUD",59,3a,04,5d)) ){
HXLINE(1010)			daText = HX_("If checked, hides most HUD elements.",b8,a1,19,66);
HXDLIN(1010)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Hide Song Length",93,89,0c,bf)) ){
HXLINE(1012)			daText = HX_("If checked, the bar showing how much time is left\nwill be hidden.",a9,6a,6a,bc);
HXDLIN(1012)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Low Quality",f3,10,75,e8)) ){
HXLINE( 988)			daText = HX_("If checked, disables some background details,\ndecreases loading times and improves performance.",14,52,02,0c);
HXDLIN( 988)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Middlescroll",42,a5,d6,f5)) ){
HXLINE( 996)			daText = HX_("If checked, hides Opponent's notes and your notes get centered.",bc,f9,f6,16);
HXDLIN( 996)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Note Delay",d5,70,f0,95)) ){
HXLINE( 984)			daText = HX_("Changes how late a note is spawned.\nUseful for preventing audio lag from wireless earphones.",0e,d5,9c,1d);
HXDLIN( 984)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Note Splashes",83,c7,78,74)) ){
HXLINE(1004)			daText = HX_("If unchecked, hitting \"Sick!\" notes won't show particles.",eb,88,e6,c4);
HXDLIN(1004)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Persistent Cached Data",ff,eb,03,14)) ){
HXLINE( 990)			daText = HX_("If checked, images loaded will stay in memory\nuntil the game is closed, this increases memory usage,\nbut basically makes reloading times instant.",98,42,eb,6a);
HXDLIN( 990)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Swearing",d0,49,69,67)) ){
HXLINE(1000)			daText = HX_("If unchecked, your mom won't be angry at you.",c0,b5,09,e3);
HXDLIN(1000)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Violence",7b,1a,3a,19)) ){
HXLINE(1002)			daText = HX_("If unchecked, you won't get disgusted as frequently.",90,5d,3a,4e);
HXDLIN(1002)			goto _hx_goto_14;
            		}
            		_hx_goto_14:;
HXLINE(1014)		this->descText->set_text(daText);
HXLINE(1016)		int bullShit = 0;
HXLINE(1018)		{
HXLINE(1018)			int _g = 0;
HXDLIN(1018)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN(1018)			while((_g < _g1->length)){
HXLINE(1018)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN(1018)				_g = (_g + 1);
HXLINE(1019)				item->targetY = ( (Float)((bullShit - ::PreferencesSubstate_obj::curSelected)) );
HXLINE(1020)				bullShit = (bullShit + 1);
HXLINE(1022)				if (!(this->unselectableCheck((bullShit - 1)))) {
HXLINE(1023)					item->set_alpha(((Float)0.6));
HXLINE(1024)					if ((item->targetY == 0)) {
HXLINE(1025)						item->set_alpha(( (Float)(1) ));
            					}
HXLINE(1028)					{
HXLINE(1028)						int _g = 0;
HXDLIN(1028)						int _g1 = this->checkboxArray->length;
HXDLIN(1028)						while((_g < _g1)){
HXLINE(1028)							_g = (_g + 1);
HXDLIN(1028)							int j = (_g - 1);
HXLINE(1029)							 ::flixel::FlxSprite tracker = this->checkboxArray->__get(j).StaticCast<  ::CheckboxThingie >()->sprTracker;
HXLINE(1030)							if (::hx::IsInstanceEq( tracker,item )) {
HXLINE(1031)								this->checkboxArray->__get(j).StaticCast<  ::CheckboxThingie >()->set_alpha(item->alpha);
HXLINE(1032)								goto _hx_goto_16;
            							}
            						}
            						_hx_goto_16:;
            					}
            				}
            			}
            		}
HXLINE(1037)		{
HXLINE(1037)			int _g2 = 0;
HXDLIN(1037)			int _g3 = this->grpTexts->members->get_length();
HXDLIN(1037)			while((_g2 < _g3)){
HXLINE(1037)				_g2 = (_g2 + 1);
HXDLIN(1037)				int i = (_g2 - 1);
HXLINE(1038)				 ::AttachedText text = Dynamic( this->grpTexts->members->__get(i)).StaticCast<  ::AttachedText >();
HXLINE(1039)				if (::hx::IsNotNull( text )) {
HXLINE(1040)					text->set_alpha(((Float)0.6));
HXLINE(1041)					if ((this->textNumber->__get(i) == ::PreferencesSubstate_obj::curSelected)) {
HXLINE(1042)						text->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE(1047)		this->showCharacter->set_visible((::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected) == HX_("Anti-Aliasing",9d,02,6c,80)));
HXLINE(1048)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1048)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreferencesSubstate_obj,changeSelection,(void))

void PreferencesSubstate_obj::reloadValues(){
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_1051_reloadValues)
HXLINE(1052)		{
HXLINE(1052)			int _g = 0;
HXDLIN(1052)			int _g1 = this->checkboxArray->length;
HXDLIN(1052)			while((_g < _g1)){
HXLINE(1052)				_g = (_g + 1);
HXDLIN(1052)				int i = (_g - 1);
HXLINE(1053)				 ::CheckboxThingie checkbox = this->checkboxArray->__get(i).StaticCast<  ::CheckboxThingie >();
HXLINE(1054)				if (::hx::IsNotNull( checkbox )) {
HXLINE(1055)					bool daValue = false;
HXLINE(1056)					::String _hx_switch_0 = ::PreferencesSubstate_obj::options->__get(this->checkboxNumber->__get(i));
            					if (  (_hx_switch_0==HX_("Anti-Aliasing",9d,02,6c,80)) ){
HXLINE(1062)						daValue = ::ClientPrefs_obj::globalAntialiasing;
HXDLIN(1062)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Camera Zooms",45,a6,9b,43)) ){
HXLINE(1078)						daValue = ::ClientPrefs_obj::camZooms;
HXDLIN(1078)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Downscroll",0f,4a,85,46)) ){
HXLINE(1068)						daValue = ::ClientPrefs_obj::downScroll;
HXDLIN(1068)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("FPS Counter",85,ef,54,c9)) ){
HXLINE(1058)						daValue = ::ClientPrefs_obj::showFPS;
HXDLIN(1058)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Flashing Lights",0b,e4,0d,04)) ){
HXLINE(1066)						daValue = ::ClientPrefs_obj::flashing;
HXDLIN(1066)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Ghost Tapping",44,6c,9f,40)) ){
HXLINE(1072)						daValue = ::ClientPrefs_obj::ghostTapping;
HXDLIN(1072)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Hide HUD",59,3a,04,5d)) ){
HXLINE(1080)						daValue = ::ClientPrefs_obj::hideHud;
HXDLIN(1080)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Hide Song Length",93,89,0c,bf)) ){
HXLINE(1084)						daValue = ::ClientPrefs_obj::hideTime;
HXDLIN(1084)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Low Quality",f3,10,75,e8)) ){
HXLINE(1060)						daValue = ::ClientPrefs_obj::lowQuality;
HXDLIN(1060)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Middlescroll",42,a5,d6,f5)) ){
HXLINE(1070)						daValue = ::ClientPrefs_obj::middleScroll;
HXDLIN(1070)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Note Splashes",83,c7,78,74)) ){
HXLINE(1064)						daValue = ::ClientPrefs_obj::noteSplashes;
HXDLIN(1064)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Persistent Cached Data",ff,eb,03,14)) ){
HXLINE(1082)						daValue = ::ClientPrefs_obj::imagesPersist;
HXDLIN(1082)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Swearing",d0,49,69,67)) ){
HXLINE(1074)						daValue = ::ClientPrefs_obj::cursing;
HXDLIN(1074)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Violence",7b,1a,3a,19)) ){
HXLINE(1076)						daValue = ::ClientPrefs_obj::violence;
HXDLIN(1076)						goto _hx_goto_20;
            					}
            					_hx_goto_20:;
HXLINE(1086)					checkbox->set_daValue(daValue);
            				}
            			}
            		}
HXLINE(1089)		{
HXLINE(1089)			int _g2 = 0;
HXDLIN(1089)			int _g3 = this->grpTexts->members->get_length();
HXDLIN(1089)			while((_g2 < _g3)){
HXLINE(1089)				_g2 = (_g2 + 1);
HXDLIN(1089)				int i = (_g2 - 1);
HXLINE(1090)				 ::AttachedText text = Dynamic( this->grpTexts->members->__get(i)).StaticCast<  ::AttachedText >();
HXLINE(1091)				if (::hx::IsNotNull( text )) {
HXLINE(1092)					::String daText = HX_("",00,00,00,00);
HXLINE(1093)					::String _hx_switch_1 = ::PreferencesSubstate_obj::options->__get(this->textNumber->__get(i));
            					if (  (_hx_switch_1==HX_("Framerate",6d,c5,1e,f0)) ){
HXLINE(1095)						daText = (HX_("",00,00,00,00) + ::ClientPrefs_obj::framerate);
HXDLIN(1095)						goto _hx_goto_22;
            					}
            					if (  (_hx_switch_1==HX_("Note Delay",d5,70,f0,95)) ){
HXLINE(1097)						daText = (::ClientPrefs_obj::noteOffset + HX_("ms",66,5f,00,00));
HXDLIN(1097)						goto _hx_goto_22;
            					}
            					_hx_goto_22:;
HXLINE(1099)					 ::flixel::FlxSprite lastTracker = text->sprTracker;
HXLINE(1100)					text->sprTracker = null();
HXLINE(1101)					text->changeText(daText,null());
HXLINE(1102)					text->sprTracker = lastTracker;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PreferencesSubstate_obj,reloadValues,(void))

bool PreferencesSubstate_obj::unselectableCheck(int num){
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_1107_unselectableCheck)
HXLINE(1108)		{
HXLINE(1108)			int _g = 0;
HXDLIN(1108)			int _g1 = ::PreferencesSubstate_obj::unselectableOptions->length;
HXDLIN(1108)			while((_g < _g1)){
HXLINE(1108)				_g = (_g + 1);
HXDLIN(1108)				int i = (_g - 1);
HXLINE(1109)				if ((::PreferencesSubstate_obj::options->__get(num) == ::PreferencesSubstate_obj::unselectableOptions->__get(i))) {
HXLINE(1110)					return true;
            				}
            			}
            		}
HXLINE(1113)		if (::hx::IsNotNull( ::PreferencesSubstate_obj::options->__get(num) )) {
HXLINE(1113)			return (::PreferencesSubstate_obj::options->__get(num).length < 1);
            		}
            		else {
HXLINE(1113)			return true;
            		}
HXDLIN(1113)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreferencesSubstate_obj,unselectableCheck,return )

int PreferencesSubstate_obj::curSelected;

::Array< ::String > PreferencesSubstate_obj::unselectableOptions;

::Array< ::String > PreferencesSubstate_obj::noCheckbox;

::Array< ::String > PreferencesSubstate_obj::options;


::hx::ObjectPtr< PreferencesSubstate_obj > PreferencesSubstate_obj::__new() {
	::hx::ObjectPtr< PreferencesSubstate_obj > __this = new PreferencesSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PreferencesSubstate_obj > PreferencesSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PreferencesSubstate_obj *__this = (PreferencesSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PreferencesSubstate_obj), true, "PreferencesSubstate"));
	*(void **)__this = PreferencesSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PreferencesSubstate_obj::PreferencesSubstate_obj()
{
}

void PreferencesSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PreferencesSubstate);
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxArray,"checkboxArray");
	HX_MARK_MEMBER_NAME(checkboxNumber,"checkboxNumber");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(textNumber,"textNumber");
	HX_MARK_MEMBER_NAME(showCharacter,"showCharacter");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PreferencesSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxArray,"checkboxArray");
	HX_VISIT_MEMBER_NAME(checkboxNumber,"checkboxNumber");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(textNumber,"textNumber");
	HX_VISIT_MEMBER_NAME(showCharacter,"showCharacter");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PreferencesSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"textNumber") ) { return ::hx::Val( textNumber ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reloadValues") ) { return ::hx::Val( reloadValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxArray") ) { return ::hx::Val( checkboxArray ); }
		if (HX_FIELD_EQ(inName,"showCharacter") ) { return ::hx::Val( showCharacter ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkboxNumber") ) { return ::hx::Val( checkboxNumber ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PreferencesSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { outValue = ( options ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noCheckbox") ) { outValue = ( noCheckbox ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unselectableOptions") ) { outValue = ( unselectableOptions ); return true; }
	}
	return false;
}

::hx::Val PreferencesSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textNumber") ) { textNumber=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxArray") ) { checkboxArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showCharacter") ) { showCharacter=inValue.Cast<  ::Character >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkboxNumber") ) { checkboxNumber=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PreferencesSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noCheckbox") ) { noCheckbox=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unselectableOptions") ) { unselectableOptions=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void PreferencesSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxArray",56,f8,56,af));
	outFields->push(HX_("checkboxNumber",6c,61,4c,a6));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("textNumber",56,07,6b,d8));
	outFields->push(HX_("showCharacter",ec,de,ef,31));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PreferencesSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PreferencesSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PreferencesSubstate_obj,checkboxArray),HX_("checkboxArray",56,f8,56,af)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PreferencesSubstate_obj,checkboxNumber),HX_("checkboxNumber",6c,61,4c,a6)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PreferencesSubstate_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PreferencesSubstate_obj,textNumber),HX_("textNumber",56,07,6b,d8)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(PreferencesSubstate_obj,showCharacter),HX_("showCharacter",ec,de,ef,31)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PreferencesSubstate_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsInt,(int)offsetof(PreferencesSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(PreferencesSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PreferencesSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PreferencesSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &PreferencesSubstate_obj::unselectableOptions,HX_("unselectableOptions",ef,28,01,b9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &PreferencesSubstate_obj::noCheckbox,HX_("noCheckbox",a4,97,53,9d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &PreferencesSubstate_obj::options,HX_("options",5e,33,fe,df)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PreferencesSubstate_obj_sMemberFields[] = {
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxArray",56,f8,56,af),
	HX_("checkboxNumber",6c,61,4c,a6),
	HX_("grpTexts",01,f1,99,f0),
	HX_("textNumber",56,07,6b,d8),
	HX_("showCharacter",ec,de,ef,31),
	HX_("descText",9e,53,35,f3),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadValues",1b,54,e1,23),
	HX_("unselectableCheck",19,58,ce,19),
	::String(null()) };

static void PreferencesSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreferencesSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(PreferencesSubstate_obj::unselectableOptions,"unselectableOptions");
	HX_MARK_MEMBER_NAME(PreferencesSubstate_obj::noCheckbox,"noCheckbox");
	HX_MARK_MEMBER_NAME(PreferencesSubstate_obj::options,"options");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PreferencesSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreferencesSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(PreferencesSubstate_obj::unselectableOptions,"unselectableOptions");
	HX_VISIT_MEMBER_NAME(PreferencesSubstate_obj::noCheckbox,"noCheckbox");
	HX_VISIT_MEMBER_NAME(PreferencesSubstate_obj::options,"options");
};

#endif

::hx::Class PreferencesSubstate_obj::__mClass;

static ::String PreferencesSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("unselectableOptions",ef,28,01,b9),
	HX_("noCheckbox",a4,97,53,9d),
	HX_("options",5e,33,fe,df),
	::String(null())
};

void PreferencesSubstate_obj::__register()
{
	PreferencesSubstate_obj _hx_dummy;
	PreferencesSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PreferencesSubstate",49,bf,26,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PreferencesSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &PreferencesSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = PreferencesSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PreferencesSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PreferencesSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PreferencesSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PreferencesSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PreferencesSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PreferencesSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PreferencesSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_705_boot)
HXDLIN( 705)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_706_boot)
HXDLIN( 706)		unselectableOptions = ::Array_obj< ::String >::fromData( _hx_array_data_bf26bf49_28,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_710_boot)
HXDLIN( 710)		noCheckbox = ::Array_obj< ::String >::fromData( _hx_array_data_bf26bf49_30,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_715_boot)
HXDLIN( 715)		options = ::Array_obj< ::String >::fromData( _hx_array_data_bf26bf49_32,16);
            	}
}

