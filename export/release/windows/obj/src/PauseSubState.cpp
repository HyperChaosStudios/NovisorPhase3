#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_17_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",17,0x953dc7b7)
static const ::String _hx_array_data_08e59567_3[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Change Difficulty",eb,7e,37,a6),HX_("Toggle Practice Mode",7c,8b,b4,6b),HX_("Botplay",5b,23,fb,2e),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_121_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",121,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_199_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",199,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_206_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",206,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_234_regenMenu,"PauseSubState","regenMenu",0xfb4cc935,"PauseSubState.regenMenu","PauseSubState.hx",234,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_17_new)
HXLINE(  24)		this->curSelected = 0;
HXLINE(  23)		this->difficultyChoices = ::Array_obj< ::String >::__new(0);
HXLINE(  22)		this->menuItemsOG = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_3,6);
HXLINE(  21)		this->menuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  34)		super::__construct();
HXLINE(  35)		this->menuItems = this->menuItemsOG;
HXLINE(  37)		{
HXLINE(  37)			int _g = 0;
HXDLIN(  37)			int _g1 = ::CoolUtil_obj::difficultyStuff->get_length();
HXDLIN(  37)			while((_g < _g1)){
HXLINE(  37)				_g = (_g + 1);
HXDLIN(  37)				int i = (_g - 1);
HXLINE(  38)				::String diff = (HX_("",00,00,00,00) + ::CoolUtil_obj::difficultyStuff->__get(i)->__GetItem(0));
HXLINE(  39)				this->difficultyChoices->push(diff);
            			}
            		}
HXLINE(  41)		this->difficultyChoices->push(HX_("BACK",27,a2,d1,2b));
HXLINE(  43)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  43)		::String library = null();
HXDLIN(  43)		::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN(  43)		 ::Dynamic _hx_tmp1;
HXDLIN(  43)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  43)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE(  43)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN(  43)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXDLIN(  43)			_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            		}
            		else {
HXLINE(  43)			_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            		}
HXDLIN(  43)		this->pauseMusic = _hx_tmp->loadEmbedded(_hx_tmp1,true,true,null());
HXLINE(  44)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  45)		 ::flixel::_hx_system::FlxSound _hx_tmp2 = this->pauseMusic;
HXDLIN(  45)		 ::flixel::math::FlxRandom _hx_tmp3 = ::flixel::FlxG_obj::random;
HXDLIN(  45)		_hx_tmp2->play(false,_hx_tmp3->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  47)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  49)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  50)		bg->set_alpha(( (Float)(0) ));
HXLINE(  51)		bg->scrollFactor->set(null(),null());
HXLINE(  52)		this->add(bg);
HXLINE(  54)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  55)		levelInfo->set_text(( (::String)((levelInfo->text + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
HXLINE(  56)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  57)		levelInfo->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  58)		levelInfo->updateHitbox();
HXLINE(  59)		this->add(levelInfo);
HXLINE(  61)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  62)		::String levelDifficulty1 = levelDifficulty->text;
HXDLIN(  62)		levelDifficulty->set_text((levelDifficulty1 + ::CoolUtil_obj::difficultyString()));
HXLINE(  63)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  64)		levelDifficulty->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  65)		levelDifficulty->updateHitbox();
HXLINE(  66)		this->add(levelDifficulty);
HXLINE(  68)		 ::flixel::text::FlxText blueballedTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,79,0,HX_("",00,00,00,00),32,null());
HXLINE(  69)		blueballedTxt->set_text((HX_("Blueballed: ",fe,a6,48,b4) + ::PlayState_obj::deathCounter));
HXLINE(  70)		blueballedTxt->scrollFactor->set(null(),null());
HXLINE(  71)		blueballedTxt->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  72)		blueballedTxt->updateHitbox();
HXLINE(  73)		this->add(blueballedTxt);
HXLINE(  75)		this->practiceText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("PRACTICE MODE",e8,14,ba,86),32,null());
HXLINE(  76)		this->practiceText->scrollFactor->set(null(),null());
HXLINE(  77)		this->practiceText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  78)		 ::flixel::text::FlxText _hx_tmp4 = this->practiceText;
HXDLIN(  78)		int _hx_tmp5 = ::flixel::FlxG_obj::width;
HXDLIN(  78)		_hx_tmp4->set_x((( (Float)(_hx_tmp5) ) - (this->practiceText->get_width() + 20)));
HXLINE(  79)		this->practiceText->updateHitbox();
HXLINE(  80)		this->practiceText->set_visible(::PlayState_obj::practiceMode);
HXLINE(  81)		this->add(this->practiceText);
HXLINE(  83)		this->botplayText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,(::flixel::FlxG_obj::height - 40),0,HX_("BOTPLAY",5b,cf,7d,e1),32,null());
HXLINE(  84)		this->botplayText->scrollFactor->set(null(),null());
HXLINE(  85)		this->botplayText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  86)		 ::flixel::text::FlxText _hx_tmp6 = this->botplayText;
HXDLIN(  86)		int _hx_tmp7 = ::flixel::FlxG_obj::width;
HXDLIN(  86)		_hx_tmp6->set_x((( (Float)(_hx_tmp7) ) - (this->botplayText->get_width() + 20)));
HXLINE(  87)		this->botplayText->updateHitbox();
HXLINE(  88)		this->botplayText->set_visible(::PlayState_obj::cpuControlled);
HXLINE(  89)		this->add(this->botplayText);
HXLINE(  91)		blueballedTxt->set_alpha(( (Float)(0) ));
HXLINE(  92)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE(  93)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE(  95)		int _hx_tmp8 = ::flixel::FlxG_obj::width;
HXDLIN(  95)		levelInfo->set_x((( (Float)(_hx_tmp8) ) - (levelInfo->get_width() + 20)));
HXLINE(  96)		int _hx_tmp9 = ::flixel::FlxG_obj::width;
HXDLIN(  96)		levelDifficulty->set_x((( (Float)(_hx_tmp9) ) - (levelDifficulty->get_width() + 20)));
HXLINE(  97)		int _hx_tmp10 = ::flixel::FlxG_obj::width;
HXDLIN(  97)		blueballedTxt->set_x((( (Float)(_hx_tmp10) ) - (blueballedTxt->get_width() + 20)));
HXLINE(  99)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 100)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 101)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 102)		::flixel::tweens::FlxTween_obj::tween(blueballedTxt, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(blueballedTxt->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.7))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 104)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 105)		this->add(this->grpMenuShit);
HXLINE( 107)		{
HXLINE( 107)			int _g2 = 0;
HXDLIN( 107)			int _g3 = this->menuItems->length;
HXDLIN( 107)			while((_g2 < _g3)){
HXLINE( 107)				_g2 = (_g2 + 1);
HXDLIN( 107)				int i = (_g2 - 1);
HXLINE( 109)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 110)				songText->isMenuItem = true;
HXLINE( 111)				songText->targetY = ( (Float)(i) );
HXLINE( 112)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 115)		this->changeSelection(null());
HXLINE( 117)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
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

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_121_update)
HXLINE( 122)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 123)			 ::flixel::_hx_system::FlxSound fh = this->pauseMusic;
HXDLIN( 123)			fh->set_volume((fh->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 125)		this->super::update(elapsed);
HXLINE( 127)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 128)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 129)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 131)		if (upP) {
HXLINE( 133)			this->changeSelection(-1);
            		}
HXLINE( 135)		if (downP) {
HXLINE( 137)			this->changeSelection(1);
            		}
HXLINE( 140)		if (accepted) {
HXLINE( 142)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 143)			{
HXLINE( 143)				int _g = 0;
HXDLIN( 143)				int _g1 = (this->difficultyChoices->length - 1);
HXDLIN( 143)				while((_g < _g1)){
HXLINE( 143)					_g = (_g + 1);
HXDLIN( 143)					int i = (_g - 1);
HXLINE( 144)					if ((this->difficultyChoices->__get(i) == daSelected)) {
HXLINE( 145)						::String name = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
HXLINE( 146)						::String poop = ::Highscore_obj::formatSong(name,this->curSelected);
HXLINE( 147)						::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop,name);
HXLINE( 148)						::PlayState_obj::storyDifficulty = this->curSelected;
HXLINE( 149)						::CustomFadeTransition_obj::nextCamera = ::PauseSubState_obj::transCamera;
HXLINE( 150)						::MusicBeatState_obj::resetState();
HXLINE( 151)						::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 152)						::PlayState_obj::changedDifficulty = true;
HXLINE( 153)						::PlayState_obj::cpuControlled = false;
HXLINE( 154)						return;
            					}
            				}
            			}
HXLINE( 158)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("BACK",27,a2,d1,2b)) ){
HXLINE( 192)				this->menuItems = this->menuItemsOG;
HXLINE( 193)				this->regenMenu();
HXLINE( 191)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Botplay",5b,23,fb,2e)) ){
HXLINE( 174)				::PlayState_obj::cpuControlled = !(::PlayState_obj::cpuControlled);
HXLINE( 175)				::PlayState_obj::usedPractice = true;
HXLINE( 176)				this->botplayText->set_visible(::PlayState_obj::cpuControlled);
HXLINE( 173)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Change Difficulty",eb,7e,37,a6)) ){
HXLINE( 163)				this->menuItems = this->difficultyChoices;
HXLINE( 164)				this->regenMenu();
HXLINE( 162)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 178)				::PlayState_obj::deathCounter = 0;
HXLINE( 179)				::PlayState_obj::seenCutscene = false;
HXLINE( 180)				::CustomFadeTransition_obj::nextCamera = ::PauseSubState_obj::transCamera;
HXLINE( 181)				if (::PlayState_obj::isStoryMode) {
HXLINE( 182)					::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				else {
HXLINE( 184)					::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
HXLINE( 186)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 186)				::String library = null();
HXDLIN( 186)				::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 186)				 ::Dynamic _hx_tmp1;
HXDLIN( 186)				if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 186)					if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 186)						::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 186)						( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            					}
HXDLIN( 186)					_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            				}
            				else {
HXLINE( 186)					_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            				}
HXDLIN( 186)				_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE( 187)				::PlayState_obj::usedPractice = false;
HXLINE( 188)				::PlayState_obj::changedDifficulty = false;
HXLINE( 189)				::PlayState_obj::cpuControlled = false;
HXLINE( 177)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 170)				::CustomFadeTransition_obj::nextCamera = ::PauseSubState_obj::transCamera;
HXLINE( 171)				::MusicBeatState_obj::resetState();
HXLINE( 172)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 169)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 161)				this->close();
HXDLIN( 161)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Practice Mode",7c,8b,b4,6b)) ){
HXLINE( 166)				::PlayState_obj::practiceMode = !(::PlayState_obj::practiceMode);
HXLINE( 167)				::PlayState_obj::usedPractice = true;
HXLINE( 168)				this->practiceText->set_visible(::PlayState_obj::practiceMode);
HXLINE( 165)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_199_destroy)
HXLINE( 200)		this->pauseMusic->destroy();
HXLINE( 202)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_206_changeSelection)
HXLINE( 207)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 209)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 209)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 211)		if ((this->curSelected < 0)) {
HXLINE( 212)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 213)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 214)			this->curSelected = 0;
            		}
HXLINE( 216)		int bullShit = 0;
HXLINE( 218)		{
HXLINE( 218)			int _g = 0;
HXDLIN( 218)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 218)			while((_g < _g1->length)){
HXLINE( 218)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 218)				_g = (_g + 1);
HXLINE( 220)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 221)				bullShit = (bullShit + 1);
HXLINE( 223)				item->set_alpha(((Float)0.6));
HXLINE( 226)				if ((item->targetY == 0)) {
HXLINE( 228)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))

void PauseSubState_obj::regenMenu(){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_234_regenMenu)
HXLINE( 235)		{
HXLINE( 235)			int _g = 0;
HXDLIN( 235)			int _g1 = this->grpMenuShit->members->get_length();
HXDLIN( 235)			while((_g < _g1)){
HXLINE( 235)				_g = (_g + 1);
HXDLIN( 235)				int i = (_g - 1);
HXLINE( 236)				this->grpMenuShit->remove(Dynamic( this->grpMenuShit->members->__get(0)).StaticCast<  ::Alphabet >(),true).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 238)		{
HXLINE( 238)			int _g2 = 0;
HXDLIN( 238)			int _g3 = this->menuItems->length;
HXDLIN( 238)			while((_g2 < _g3)){
HXLINE( 238)				_g2 = (_g2 + 1);
HXDLIN( 238)				int i = (_g2 - 1);
HXLINE( 239)				 ::Alphabet item =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 240)				item->isMenuItem = true;
HXLINE( 241)				item->targetY = ( (Float)(i) );
HXLINE( 242)				this->grpMenuShit->add(item).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 244)		this->curSelected = 0;
HXLINE( 245)		this->changeSelection(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,regenMenu,(void))

 ::flixel::FlxCamera PauseSubState_obj::transCamera;


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_MARK_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(practiceText,"practiceText");
	HX_MARK_MEMBER_NAME(botplayText,"botplayText");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_VISIT_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(practiceText,"practiceText");
	HX_VISIT_MEMBER_NAME(botplayText,"botplayText");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"regenMenu") ) { return ::hx::Val( regenMenu_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { return ::hx::Val( menuItemsOG ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"botplayText") ) { return ::hx::Val( botplayText ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { return ::hx::Val( practiceText ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { return ::hx::Val( difficultyChoices ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PauseSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { outValue = ( transCamera ); return true; }
	}
	return false;
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { menuItemsOG=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"botplayText") ) { botplayText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { practiceText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { difficultyChoices=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PauseSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { transCamera=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
	}
	return false;
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("menuItemsOG",39,55,bf,30));
	outFields->push(HX_("difficultyChoices",f7,9c,00,1a));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("practiceText",08,73,28,84));
	outFields->push(HX_("botplayText",c8,cd,df,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItemsOG),HX_("menuItemsOG",39,55,bf,30)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,difficultyChoices),HX_("difficultyChoices",f7,9c,00,1a)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,practiceText),HX_("practiceText",08,73,28,84)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,botplayText),HX_("botplayText",c8,cd,df,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PauseSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &PauseSubState_obj::transCamera,HX_("transCamera",ed,e0,5c,21)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("menuItemsOG",39,55,bf,30),
	HX_("difficultyChoices",f7,9c,00,1a),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("practiceText",08,73,28,84),
	HX_("botplayText",c8,cd,df,87),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	HX_("regenMenu",fc,42,dc,26),
	::String(null()) };

static void PauseSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PauseSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#endif

::hx::Class PauseSubState_obj::__mClass;

static ::String PauseSubState_obj_sStaticFields[] = {
	HX_("transCamera",ed,e0,5c,21),
	::String(null())
};

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PauseSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &PauseSubState_obj::__SetStatic;
	__mClass->mMarkFunc = PauseSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PauseSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

