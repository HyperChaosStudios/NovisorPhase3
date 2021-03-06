#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
#endif
#ifndef INCLUDED_MenuItem
#include <MenuItem.h>
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
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_ResetScoreSubState
#include <ResetScoreSubState.h>
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
#ifndef INCLUDED_WeekData
#include <WeekData.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f93022dfbe651d27_23_new,"StoryMenuState","new",0xec20accf,"StoryMenuState.new","StoryMenuState.hx",23,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_53_create,"StoryMenuState","create",0xac12b9ed,"StoryMenuState.create","StoryMenuState.hx",53,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_185_closeSubState,"StoryMenuState","closeSubState",0x2b9a7578,"StoryMenuState.closeSubState","StoryMenuState.hx",185,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_255_update,"StoryMenuState","update",0xb708d8fa,"StoryMenuState.update","StoryMenuState.hx",255,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_192_update,"StoryMenuState","update",0xb708d8fa,"StoryMenuState.update","StoryMenuState.hx",192,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_265_selectWeek,"StoryMenuState","selectWeek",0x4a36f481,"StoryMenuState.selectWeek","StoryMenuState.hx",265,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_298_selectWeek,"StoryMenuState","selectWeek",0x4a36f481,"StoryMenuState.selectWeek","StoryMenuState.hx",298,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_316_changeDifficulty,"StoryMenuState","changeDifficulty",0xd5c0d9fc,"StoryMenuState.changeDifficulty","StoryMenuState.hx",316,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_308_changeDifficulty,"StoryMenuState","changeDifficulty",0xd5c0d9fc,"StoryMenuState.changeDifficulty","StoryMenuState.hx",308,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_335_changeWeek,"StoryMenuState","changeWeek",0xb5e4b4f5,"StoryMenuState.changeWeek","StoryMenuState.hx",335,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_372_weekIsLocked,"StoryMenuState","weekIsLocked",0x95e86e59,"StoryMenuState.weekIsLocked","StoryMenuState.hx",372,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_378_updateText,"StoryMenuState","updateText",0x9254d6c7,"StoryMenuState.updateText","StoryMenuState.hx",378,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_29_boot,"StoryMenuState","boot",0xa88f88e3,"StoryMenuState.boot","StoryMenuState.hx",29,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_33_boot,"StoryMenuState","boot",0xa88f88e3,"StoryMenuState.boot","StoryMenuState.hx",33,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_38_boot,"StoryMenuState","boot",0xa88f88e3,"StoryMenuState.boot","StoryMenuState.hx",38,0xd8e12181)

void StoryMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_23_new)
HXLINE( 332)		this->intendedScore = 0;
HXLINE( 331)		this->lerpScore = 0;
HXLINE( 261)		this->stopspamming = false;
HXLINE( 260)		this->selectedWeek = false;
HXLINE( 259)		this->movedBack = false;
HXLINE(  23)		super::__construct(TransIn,TransOut);
            	}

Dynamic StoryMenuState_obj::__CreateEmpty() { return new StoryMenuState_obj; }

void *StoryMenuState_obj::_hx_vtable = 0;

Dynamic StoryMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StoryMenuState_obj > _hx_result = new StoryMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool StoryMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x244c1c1d) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x244c1c1d;
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

void StoryMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_53_create)
HXLINE(  55)		::Paths_obj::destroyLoadedImages(null());
HXLINE(  57)		::WeekData_obj::reloadWeekFiles(true);
HXLINE(  58)		if ((::StoryMenuState_obj::curWeek >= ::WeekData_obj::weeksList->length)) {
HXLINE(  58)			::StoryMenuState_obj::curWeek = 0;
            		}
HXLINE(  59)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  61)		this->scoreText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,10,0,HX_("SCORE: 49324858",a3,72,f5,b2),36,null());
HXLINE(  62)		this->scoreText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,null(),null(),null(),null(),null());
HXLINE(  64)		this->txtWeekTitle =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7)),10,0,HX_("",00,00,00,00),32,null());
HXLINE(  65)		this->txtWeekTitle->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE(  66)		this->txtWeekTitle->set_alpha(((Float)0.7));
HXLINE(  68)		 ::flixel::text::FlxText rankText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,10,null(),null(),null(),null());
HXLINE(  69)		rankText->set_text(HX_("RANK: GREAT",9b,ee,9f,70));
HXLINE(  70)		rankText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  71)		rankText->set_size(::Std_obj::_hx_int(( (Float)(this->scoreText->_defaultFormat->size) )));
HXLINE(  72)		rankText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  74)		::String library = null();
HXDLIN(  74)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("campaign_menu_UI_assets",fd,f3,ba,6a));
HXDLIN(  74)		bool xmlExists = false;
HXDLIN(  74)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  74)			xmlExists = true;
            		}
HXDLIN(  74)		 ::Dynamic ui_tex;
HXDLIN(  74)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  74)			ui_tex = imageLoaded;
            		}
            		else {
HXLINE(  74)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("campaign_menu_UI_assets",fd,f3,ba,6a));
HXDLIN(  74)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  74)				ui_tex = imageToReturn;
            			}
            			else {
HXLINE(  74)				ui_tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN(  74)		::String ui_tex1;
HXDLIN(  74)		if (xmlExists) {
HXLINE(  74)			ui_tex1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  74)			ui_tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  74)		 ::flixel::graphics::frames::FlxAtlasFrames ui_tex2 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(ui_tex,ui_tex1);
HXLINE(  75)		 ::flixel::FlxSprite bgYellow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,56,null())->makeGraphic(::flixel::FlxG_obj::width,386,-405679,null(),null());
HXLINE(  76)		this->bgSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,56,null());
HXLINE(  77)		this->bgSprite->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  79)		this->grpWeekText =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  80)		this->add(this->grpWeekText);
HXLINE(  82)		 ::flixel::FlxSprite blackBarThingie =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,56,-16777216,null(),null());
HXLINE(  83)		this->add(blackBarThingie);
HXLINE(  85)		this->grpWeekCharacters =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  87)		this->grpLocks =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  88)		this->add(this->grpLocks);
HXLINE(  92)		::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  95)		{
HXLINE(  95)			int _g = 0;
HXDLIN(  95)			int _g1 = ::WeekData_obj::weeksList->length;
HXDLIN(  95)			while((_g < _g1)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  97)				::WeekData_obj::setDirectoryFromWeek(( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(i))) ));
HXLINE(  98)				 ::MenuItem weekThing =  ::MenuItem_obj::__alloc( HX_CTX ,( (Float)(0) ),(this->bgSprite->y + 396),::WeekData_obj::weeksList->__get(i));
HXLINE(  99)				Float weekThing1 = weekThing->y;
HXDLIN(  99)				weekThing->set_y((weekThing1 + ((weekThing->get_height() + 20) * ( (Float)(i) ))));
HXLINE( 100)				weekThing->targetY = ( (Float)(i) );
HXLINE( 101)				this->grpWeekText->add(weekThing).StaticCast<  ::MenuItem >();
HXLINE( 103)				weekThing->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 104)				weekThing->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 108)				if (this->weekIsLocked(i)) {
HXLINE( 110)					Float lock = (weekThing->get_width() + 10);
HXDLIN( 110)					 ::flixel::FlxSprite lock1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(lock + weekThing->x),null(),null());
HXLINE( 111)					lock1->set_frames(ui_tex2);
HXLINE( 112)					lock1->animation->addByPrefix(HX_("lock",eb,9b,b7,47),HX_("lock",eb,9b,b7,47),null(),null(),null(),null());
HXLINE( 113)					lock1->animation->play(HX_("lock",eb,9b,b7,47),null(),null(),null());
HXLINE( 114)					lock1->ID = i;
HXLINE( 115)					lock1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 116)					this->grpLocks->add(lock1).StaticCast<  ::flixel::FlxSprite >();
            				}
            			}
            		}
HXLINE( 120)		::WeekData_obj::setDirectoryFromWeek(( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(0))) ));
HXLINE( 121)		::Array< ::String > charArray = ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(0))) )->weekCharacters;
HXLINE( 122)		{
HXLINE( 123)			{
HXLINE( 124)				 ::MenuCharacter weekCharacterThing =  ::MenuCharacter_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) - ( (Float)(150) )),charArray->__get(0));
HXLINE( 125)				weekCharacterThing->set_y((weekCharacterThing->y + 70));
HXLINE( 126)				this->grpWeekCharacters->add(weekCharacterThing).StaticCast<  ::MenuCharacter >();
            			}
HXLINE( 123)			{
HXLINE( 124)				 ::MenuCharacter weekCharacterThing1 =  ::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(2) )) - ( (Float)(150) )),charArray->__get(1));
HXLINE( 125)				weekCharacterThing1->set_y((weekCharacterThing1->y + 70));
HXLINE( 126)				this->grpWeekCharacters->add(weekCharacterThing1).StaticCast<  ::MenuCharacter >();
            			}
HXLINE( 123)			{
HXLINE( 124)				 ::MenuCharacter weekCharacterThing2 =  ::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(3) )) - ( (Float)(150) )),charArray->__get(2));
HXLINE( 125)				weekCharacterThing2->set_y((weekCharacterThing2->y + 70));
HXLINE( 126)				this->grpWeekCharacters->add(weekCharacterThing2).StaticCast<  ::MenuCharacter >();
            			}
            		}
HXLINE( 129)		this->difficultySelectors =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 130)		this->add(this->difficultySelectors);
HXLINE( 132)		Float _hx_tmp = Dynamic( this->grpWeekText->members->__get(0)).StaticCast<  ::MenuItem >()->x;
HXDLIN( 132)		Float _hx_tmp1 = ((_hx_tmp + Dynamic( this->grpWeekText->members->__get(0)).StaticCast<  ::MenuItem >()->get_width()) + 10);
HXDLIN( 132)		this->leftArrow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,_hx_tmp1,(Dynamic( this->grpWeekText->members->__get(0)).StaticCast<  ::MenuItem >()->y + 10),null());
HXLINE( 133)		this->leftArrow->set_frames(ui_tex2);
HXLINE( 134)		this->leftArrow->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow left",be,05,f8,94),null(),null(),null(),null());
HXLINE( 135)		this->leftArrow->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("arrow push left",f6,7a,62,0c),null(),null(),null(),null());
HXLINE( 136)		this->leftArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 137)		this->leftArrow->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 138)		this->difficultySelectors->add(this->leftArrow).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 140)		this->sprDifficultyGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 141)		this->add(this->sprDifficultyGroup);
HXLINE( 144)		{
HXLINE( 144)			int _g2 = 0;
HXDLIN( 144)			int _g3 = ::CoolUtil_obj::difficultyStuff->get_length();
HXDLIN( 144)			while((_g2 < _g3)){
HXLINE( 144)				_g2 = (_g2 + 1);
HXDLIN( 144)				int i = (_g2 - 1);
HXLINE( 145)				 ::flixel::FlxSprite sprDifficulty =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->leftArrow->x + 60),this->leftArrow->y,null());
HXDLIN( 145)				::String key = (HX_("menudifficulties/",b7,09,b6,65) + ::CoolUtil_obj::difficultyStuff->__get(i)->__GetItem(0)->__Field(HX_("toLowerCase",56,4c,64,b8),::hx::paccDynamic)());
HXDLIN( 145)				::String library = null();
HXDLIN( 145)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 145)				 ::Dynamic sprDifficulty1;
HXDLIN( 145)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 145)					sprDifficulty1 = imageToReturn;
            				}
            				else {
HXLINE( 145)					sprDifficulty1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 145)				 ::flixel::FlxSprite sprDifficulty2 = sprDifficulty->loadGraphic(sprDifficulty1,null(),null(),null(),null(),null());
HXLINE( 146)				Float sprDifficulty3 = sprDifficulty2->x;
HXDLIN( 146)				sprDifficulty2->set_x((sprDifficulty3 + ((( (Float)(308) ) - sprDifficulty2->get_width()) / ( (Float)(2) ))));
HXLINE( 147)				sprDifficulty2->ID = i;
HXLINE( 148)				sprDifficulty2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 149)				this->sprDifficultyGroup->add(sprDifficulty2).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE( 151)		this->changeDifficulty(null());
HXLINE( 153)		this->difficultySelectors->add(this->sprDifficultyGroup).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 155)		this->rightArrow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->leftArrow->x + 376),this->leftArrow->y,null());
HXLINE( 156)		this->rightArrow->set_frames(ui_tex2);
HXLINE( 157)		this->rightArrow->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow right",45,0e,1a,3b),null(),null(),null(),null());
HXLINE( 158)		this->rightArrow->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("arrow push right",0d,2a,d6,40),24,false,null(),null());
HXLINE( 159)		this->rightArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 160)		this->rightArrow->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 161)		this->difficultySelectors->add(this->rightArrow).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 163)		this->add(bgYellow);
HXLINE( 164)		this->add(this->bgSprite);
HXLINE( 165)		this->add(this->grpWeekCharacters);
HXLINE( 167)		 ::flixel::FlxSprite tracksSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.07)),(this->bgSprite->y + 425),null());
HXDLIN( 167)		::String library1 = null();
HXDLIN( 167)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("Menu_Tracks",68,85,99,50));
HXDLIN( 167)		 ::Dynamic tracksSprite1;
HXDLIN( 167)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 167)			tracksSprite1 = imageToReturn;
            		}
            		else {
HXLINE( 167)			tracksSprite1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Menu_Tracks",68,85,99,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            		}
HXDLIN( 167)		 ::flixel::FlxSprite tracksSprite2 = tracksSprite->loadGraphic(tracksSprite1,null(),null(),null(),null(),null());
HXLINE( 168)		tracksSprite2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 169)		this->add(tracksSprite2);
HXLINE( 171)		this->txtTracklist =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.05)),(tracksSprite2->y + 60),0,HX_("",00,00,00,00),32,null());
HXLINE( 172)		this->txtTracklist->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 173)		this->txtTracklist->set_font(rankText->_font);
HXLINE( 174)		this->txtTracklist->set_color(-1747081);
HXLINE( 175)		this->add(this->txtTracklist);
HXLINE( 177)		this->add(this->scoreText);
HXLINE( 178)		this->add(this->txtWeekTitle);
HXLINE( 180)		this->changeWeek(null());
HXLINE( 182)		this->super::create();
            	}


void StoryMenuState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_185_closeSubState)
HXLINE( 186)		this->persistentUpdate = true;
HXLINE( 187)		this->changeWeek(null());
HXLINE( 188)		this->super::closeSubState();
            	}


void StoryMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::StoryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite lock){
            			HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_255_update)
HXLINE( 255)			lock->set_y(Dynamic( _gthis->grpWeekText->members->__get(lock->ID)).StaticCast<  ::MenuItem >()->y);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_192_update)
HXDLIN( 192)		 ::StoryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 194)		Float a = ( (Float)(this->lerpScore) );
HXDLIN( 194)		Float b = ( (Float)(this->intendedScore) );
HXDLIN( 194)		this->lerpScore = ::Math_obj::floor((a + (::CoolUtil_obj::boundTo((elapsed * ( (Float)(30) )),( (Float)(0) ),( (Float)(1) )) * (b - a))));
HXLINE( 195)		if ((::Math_obj::abs(( (Float)((this->intendedScore - this->lerpScore)) )) < 10)) {
HXLINE( 195)			this->lerpScore = this->intendedScore;
            		}
HXLINE( 197)		this->scoreText->set_text((HX_("WEEK SCORE:",74,77,1e,67) + this->lerpScore));
HXLINE( 201)		 ::flixel::group::FlxTypedGroup _hx_tmp = this->difficultySelectors;
HXDLIN( 201)		_hx_tmp->set_visible(!(this->weekIsLocked(::StoryMenuState_obj::curWeek)));
HXLINE( 203)		bool _hx_tmp1;
HXDLIN( 203)		if (!(this->movedBack)) {
HXLINE( 203)			_hx_tmp1 = !(this->selectedWeek);
            		}
            		else {
HXLINE( 203)			_hx_tmp1 = false;
            		}
HXDLIN( 203)		if (_hx_tmp1) {
HXLINE( 205)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 207)				this->changeWeek(-1);
HXLINE( 208)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 208)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 211)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 213)				this->changeWeek(1);
HXLINE( 214)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 214)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 217)			if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 218)				this->rightArrow->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            			}
            			else {
HXLINE( 220)				this->rightArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
HXLINE( 222)			if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 223)				this->leftArrow->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            			}
            			else {
HXLINE( 225)				this->leftArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
HXLINE( 227)			if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 228)				this->changeDifficulty(1);
            			}
HXLINE( 229)			if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 230)				this->changeDifficulty(-1);
            			}
HXLINE( 232)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 234)				this->selectWeek();
            			}
            			else {
HXLINE( 236)				if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 238)					this->persistentUpdate = false;
HXLINE( 239)					this->openSubState( ::ResetScoreSubState_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),::StoryMenuState_obj::curDifficulty,HX_("",00,00,00,00),::StoryMenuState_obj::curWeek));
HXLINE( 240)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 240)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
            			}
            		}
HXLINE( 244)		bool _hx_tmp2;
HXDLIN( 244)		bool _hx_tmp3;
HXDLIN( 244)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 244)			_hx_tmp3 = !(this->movedBack);
            		}
            		else {
HXLINE( 244)			_hx_tmp3 = false;
            		}
HXDLIN( 244)		if (_hx_tmp3) {
HXLINE( 244)			_hx_tmp2 = !(this->selectedWeek);
            		}
            		else {
HXLINE( 244)			_hx_tmp2 = false;
            		}
HXDLIN( 244)		if (_hx_tmp2) {
HXLINE( 246)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 246)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 247)			this->movedBack = true;
HXLINE( 248)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 251)		this->super::update(elapsed);
HXLINE( 253)		this->grpLocks->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


void StoryMenuState_obj::selectWeek(){
            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_265_selectWeek)
HXDLIN( 265)		if (!(this->weekIsLocked(::StoryMenuState_obj::curWeek))) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_298_selectWeek)
HXLINE( 299)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true));
HXLINE( 300)				::FreeplayState_obj::destroyFreeplayVocals();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 267)			if ((this->stopspamming == false)) {
HXLINE( 269)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 269)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 271)				Dynamic( this->grpWeekText->members->__get(::StoryMenuState_obj::curWeek)).StaticCast<  ::MenuItem >()->startFlashing();
HXLINE( 272)				if ((Dynamic( this->grpWeekCharacters->members->__get(1)).StaticCast<  ::MenuCharacter >()->character != HX_("",00,00,00,00))) {
HXLINE( 272)					Dynamic( this->grpWeekCharacters->members->__get(1)).StaticCast<  ::MenuCharacter >()->animation->play(HX_("confirm",00,9d,39,10),null(),null(),null());
            				}
HXLINE( 273)				this->stopspamming = true;
            			}
HXLINE( 277)			::Array< ::String > songArray = ::Array_obj< ::String >::__new(0);
HXLINE( 278)			::cpp::VirtualArray leWeek = ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(::StoryMenuState_obj::curWeek))) )->songs;
HXLINE( 279)			{
HXLINE( 279)				int _g = 0;
HXDLIN( 279)				int _g1 = leWeek->get_length();
HXDLIN( 279)				while((_g < _g1)){
HXLINE( 279)					_g = (_g + 1);
HXDLIN( 279)					int i = (_g - 1);
HXLINE( 280)					songArray->push(leWeek->__get(i)->__GetItem(0));
            				}
            			}
HXLINE( 284)			::PlayState_obj::storyPlaylist = songArray;
HXLINE( 285)			::PlayState_obj::isStoryMode = true;
HXLINE( 286)			this->selectedWeek = true;
HXLINE( 288)			::String diffic = ( (::String)(::CoolUtil_obj::difficultyStuff->__get(::StoryMenuState_obj::curDifficulty)->__GetItem(1)) );
HXLINE( 289)			if (::hx::IsNull( diffic )) {
HXLINE( 289)				diffic = HX_("",00,00,00,00);
            			}
HXLINE( 291)			::PlayState_obj::storyDifficulty = ::StoryMenuState_obj::curDifficulty;
HXLINE( 293)			::String _hx_tmp = (::PlayState_obj::storyPlaylist->__get(0).toLowerCase() + diffic);
HXDLIN( 293)			::PlayState_obj::SONG = ::Song_obj::loadFromJson(_hx_tmp,::PlayState_obj::storyPlaylist->__get(0).toLowerCase());
HXLINE( 294)			::PlayState_obj::storyWeek = ::StoryMenuState_obj::curWeek;
HXLINE( 295)			::PlayState_obj::campaignScore = 0;
HXLINE( 296)			::PlayState_obj::campaignMisses = 0;
HXLINE( 297)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0()),null());
            		}
            		else {
HXLINE( 303)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 303)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoryMenuState_obj,selectWeek,(void))

void StoryMenuState_obj::changeDifficulty(::hx::Null< int >  __o_change){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::StoryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_316_changeDifficulty)
HXLINE( 317)			spr->set_visible(false);
HXLINE( 318)			if ((::StoryMenuState_obj::curDifficulty == spr->ID)) {
HXLINE( 319)				spr->set_visible(true);
HXLINE( 320)				spr->set_alpha(( (Float)(0) ));
HXLINE( 321)				spr->set_y((_gthis->leftArrow->y - ( (Float)(15) )));
HXLINE( 322)				::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("y",79,00,00,00),(_gthis->leftArrow->y + 15))
            					->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.07),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_308_changeDifficulty)
HXDLIN( 308)		 ::StoryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 309)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::StoryMenuState >();
HXDLIN( 309)		::StoryMenuState_obj::curDifficulty = (::StoryMenuState_obj::curDifficulty + change);
HXLINE( 311)		if ((::StoryMenuState_obj::curDifficulty < 0)) {
HXLINE( 312)			::StoryMenuState_obj::curDifficulty = (::CoolUtil_obj::difficultyStuff->get_length() - 1);
            		}
HXLINE( 313)		if ((::StoryMenuState_obj::curDifficulty >= ::CoolUtil_obj::difficultyStuff->get_length())) {
HXLINE( 314)			::StoryMenuState_obj::curDifficulty = 0;
            		}
HXLINE( 316)		this->sprDifficultyGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 327)		this->intendedScore = ::Highscore_obj::getWeekScore(::WeekData_obj::weeksList->__get(::StoryMenuState_obj::curWeek),::StoryMenuState_obj::curDifficulty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoryMenuState_obj,changeDifficulty,(void))

void StoryMenuState_obj::changeWeek(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_335_changeWeek)
HXLINE( 336)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::StoryMenuState >();
HXDLIN( 336)		::StoryMenuState_obj::curWeek = (::StoryMenuState_obj::curWeek + change);
HXLINE( 338)		if ((::StoryMenuState_obj::curWeek >= ::WeekData_obj::weeksList->length)) {
HXLINE( 339)			::StoryMenuState_obj::curWeek = 0;
            		}
HXLINE( 340)		if ((::StoryMenuState_obj::curWeek < 0)) {
HXLINE( 341)			::StoryMenuState_obj::curWeek = (::WeekData_obj::weeksList->length - 1);
            		}
HXLINE( 343)		 ::WeekData leWeek = ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(::StoryMenuState_obj::curWeek))) );
HXLINE( 344)		::WeekData_obj::setDirectoryFromWeek(leWeek);
HXLINE( 346)		::String leName = leWeek->storyName;
HXLINE( 347)		 ::flixel::text::FlxText _hx_tmp1 = this->txtWeekTitle;
HXDLIN( 347)		_hx_tmp1->set_text(leName.toUpperCase());
HXLINE( 348)		 ::flixel::text::FlxText _hx_tmp2 = this->txtWeekTitle;
HXDLIN( 348)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN( 348)		_hx_tmp2->set_x((( (Float)(_hx_tmp3) ) - (this->txtWeekTitle->get_width() + 10)));
HXLINE( 350)		int bullShit = 0;
HXLINE( 352)		{
HXLINE( 352)			int _g = 0;
HXDLIN( 352)			::Array< ::Dynamic> _g1 = this->grpWeekText->members;
HXDLIN( 352)			while((_g < _g1->length)){
HXLINE( 352)				 ::MenuItem item = _g1->__get(_g).StaticCast<  ::MenuItem >();
HXDLIN( 352)				_g = (_g + 1);
HXLINE( 354)				item->targetY = ( (Float)((bullShit - ::StoryMenuState_obj::curWeek)) );
HXLINE( 355)				bool _hx_tmp;
HXDLIN( 355)				if ((item->targetY == 0)) {
HXLINE( 355)					_hx_tmp = !(this->weekIsLocked(::StoryMenuState_obj::curWeek));
            				}
            				else {
HXLINE( 355)					_hx_tmp = false;
            				}
HXDLIN( 355)				if (_hx_tmp) {
HXLINE( 356)					item->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 358)					item->set_alpha(((Float)0.6));
            				}
HXLINE( 359)				bullShit = (bullShit + 1);
            			}
            		}
HXLINE( 362)		this->bgSprite->set_visible(true);
HXLINE( 363)		::String assetName = leWeek->weekBackground;
HXLINE( 364)		bool _hx_tmp4;
HXDLIN( 364)		if (::hx::IsNotNull( assetName )) {
HXLINE( 364)			_hx_tmp4 = (assetName.length < 1);
            		}
            		else {
HXLINE( 364)			_hx_tmp4 = true;
            		}
HXDLIN( 364)		if (_hx_tmp4) {
HXLINE( 365)			this->bgSprite->set_visible(false);
            		}
            		else {
HXLINE( 367)			 ::flixel::FlxSprite _hx_tmp = this->bgSprite;
HXDLIN( 367)			::String key = (HX_("menubackgrounds/menu_",57,51,99,49) + assetName);
HXDLIN( 367)			::String library = null();
HXDLIN( 367)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 367)			 ::Dynamic _hx_tmp1;
HXDLIN( 367)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 367)				_hx_tmp1 = imageToReturn;
            			}
            			else {
HXLINE( 367)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
HXDLIN( 367)			_hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
            		}
HXLINE( 369)		this->updateText();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoryMenuState_obj,changeWeek,(void))

bool StoryMenuState_obj::weekIsLocked(int weekNum){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_372_weekIsLocked)
HXLINE( 373)		 ::WeekData leWeek = ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(weekNum))) );
HXLINE( 374)		bool _hx_tmp;
HXDLIN( 374)		if (!(leWeek->startUnlocked)) {
HXLINE( 374)			_hx_tmp = (leWeek->weekBefore.length > 0);
            		}
            		else {
HXLINE( 374)			_hx_tmp = false;
            		}
HXDLIN( 374)		if (_hx_tmp) {
HXLINE( 374)			if (::StoryMenuState_obj::weekCompleted->exists(leWeek->weekBefore)) {
HXLINE( 374)				return !(::StoryMenuState_obj::weekCompleted->get_bool(leWeek->weekBefore));
            			}
            			else {
HXLINE( 374)				return true;
            			}
            		}
            		else {
HXLINE( 374)			return false;
            		}
HXDLIN( 374)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoryMenuState_obj,weekIsLocked,return )

void StoryMenuState_obj::updateText(){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_378_updateText)
HXLINE( 379)		::Array< ::String > weekArray = ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(::StoryMenuState_obj::curWeek))) )->weekCharacters;
HXLINE( 380)		{
HXLINE( 380)			int _g = 0;
HXDLIN( 380)			int _g1 = this->grpWeekCharacters->length;
HXDLIN( 380)			while((_g < _g1)){
HXLINE( 380)				_g = (_g + 1);
HXDLIN( 380)				int i = (_g - 1);
HXLINE( 381)				Dynamic( this->grpWeekCharacters->members->__get(i)).StaticCast<  ::MenuCharacter >()->changeCharacter(weekArray->__get(i));
            			}
            		}
HXLINE( 384)		 ::WeekData leWeek = ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(::StoryMenuState_obj::curWeek))) );
HXLINE( 385)		::Array< ::String > stringThing = ::Array_obj< ::String >::__new(0);
HXLINE( 386)		{
HXLINE( 386)			int _g2 = 0;
HXDLIN( 386)			int _g3 = leWeek->songs->get_length();
HXDLIN( 386)			while((_g2 < _g3)){
HXLINE( 386)				_g2 = (_g2 + 1);
HXDLIN( 386)				int i = (_g2 - 1);
HXLINE( 387)				stringThing->push(leWeek->songs->__get(i)->__GetItem(0));
            			}
            		}
HXLINE( 390)		this->txtTracklist->set_text(HX_("",00,00,00,00));
HXLINE( 391)		{
HXLINE( 391)			int _g4 = 0;
HXDLIN( 391)			int _g5 = stringThing->length;
HXDLIN( 391)			while((_g4 < _g5)){
HXLINE( 391)				_g4 = (_g4 + 1);
HXDLIN( 391)				int i = (_g4 - 1);
HXLINE( 393)				 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 393)				fh->set_text((fh->text + (stringThing->__get(i) + HX_("\n",0a,00,00,00))));
            			}
            		}
HXLINE( 396)		 ::flixel::text::FlxText _hx_tmp = this->txtTracklist;
HXDLIN( 396)		_hx_tmp->set_text(this->txtTracklist->text.toUpperCase());
HXLINE( 398)		this->txtTracklist->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 399)		 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 399)		fh->set_x((fh->x - (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))));
HXLINE( 402)		this->intendedScore = ::Highscore_obj::getWeekScore(::WeekData_obj::weeksList->__get(::StoryMenuState_obj::curWeek),::StoryMenuState_obj::curDifficulty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoryMenuState_obj,updateText,(void))

 ::haxe::ds::StringMap StoryMenuState_obj::weekCompleted;

int StoryMenuState_obj::curDifficulty;

int StoryMenuState_obj::curWeek;


::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< StoryMenuState_obj > __this = new StoryMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	StoryMenuState_obj *__this = (StoryMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StoryMenuState_obj), true, "StoryMenuState"));
	*(void **)__this = StoryMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

StoryMenuState_obj::StoryMenuState_obj()
{
}

void StoryMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StoryMenuState);
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_MARK_MEMBER_NAME(bgSprite,"bgSprite");
	HX_MARK_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_MARK_MEMBER_NAME(grpWeekText,"grpWeekText");
	HX_MARK_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_MARK_MEMBER_NAME(grpLocks,"grpLocks");
	HX_MARK_MEMBER_NAME(difficultySelectors,"difficultySelectors");
	HX_MARK_MEMBER_NAME(sprDifficultyGroup,"sprDifficultyGroup");
	HX_MARK_MEMBER_NAME(leftArrow,"leftArrow");
	HX_MARK_MEMBER_NAME(rightArrow,"rightArrow");
	HX_MARK_MEMBER_NAME(movedBack,"movedBack");
	HX_MARK_MEMBER_NAME(selectedWeek,"selectedWeek");
	HX_MARK_MEMBER_NAME(stopspamming,"stopspamming");
	HX_MARK_MEMBER_NAME(lerpScore,"lerpScore");
	HX_MARK_MEMBER_NAME(intendedScore,"intendedScore");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StoryMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_VISIT_MEMBER_NAME(bgSprite,"bgSprite");
	HX_VISIT_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_VISIT_MEMBER_NAME(grpWeekText,"grpWeekText");
	HX_VISIT_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_VISIT_MEMBER_NAME(grpLocks,"grpLocks");
	HX_VISIT_MEMBER_NAME(difficultySelectors,"difficultySelectors");
	HX_VISIT_MEMBER_NAME(sprDifficultyGroup,"sprDifficultyGroup");
	HX_VISIT_MEMBER_NAME(leftArrow,"leftArrow");
	HX_VISIT_MEMBER_NAME(rightArrow,"rightArrow");
	HX_VISIT_MEMBER_NAME(movedBack,"movedBack");
	HX_VISIT_MEMBER_NAME(selectedWeek,"selectedWeek");
	HX_VISIT_MEMBER_NAME(stopspamming,"stopspamming");
	HX_VISIT_MEMBER_NAME(lerpScore,"lerpScore");
	HX_VISIT_MEMBER_NAME(intendedScore,"intendedScore");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StoryMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgSprite") ) { return ::hx::Val( bgSprite ); }
		if (HX_FIELD_EQ(inName,"grpLocks") ) { return ::hx::Val( grpLocks ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return ::hx::Val( scoreText ); }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { return ::hx::Val( leftArrow ); }
		if (HX_FIELD_EQ(inName,"movedBack") ) { return ::hx::Val( movedBack ); }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { return ::hx::Val( lerpScore ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightArrow") ) { return ::hx::Val( rightArrow ); }
		if (HX_FIELD_EQ(inName,"selectWeek") ) { return ::hx::Val( selectWeek_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeWeek") ) { return ::hx::Val( changeWeek_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateText") ) { return ::hx::Val( updateText_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpWeekText") ) { return ::hx::Val( grpWeekText ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { return ::hx::Val( txtWeekTitle ); }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { return ::hx::Val( txtTracklist ); }
		if (HX_FIELD_EQ(inName,"selectedWeek") ) { return ::hx::Val( selectedWeek ); }
		if (HX_FIELD_EQ(inName,"stopspamming") ) { return ::hx::Val( stopspamming ); }
		if (HX_FIELD_EQ(inName,"weekIsLocked") ) { return ::hx::Val( weekIsLocked_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"intendedScore") ) { return ::hx::Val( intendedScore ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeDifficulty") ) { return ::hx::Val( changeDifficulty_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { return ::hx::Val( grpWeekCharacters ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sprDifficultyGroup") ) { return ::hx::Val( sprDifficultyGroup ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"difficultySelectors") ) { return ::hx::Val( difficultySelectors ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StoryMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curWeek") ) { outValue = ( curWeek ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"weekCompleted") ) { outValue = ( weekCompleted ); return true; }
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { outValue = ( curDifficulty ); return true; }
	}
	return false;
}

::hx::Val StoryMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bgSprite") ) { bgSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpLocks") ) { grpLocks=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { leftArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movedBack") ) { movedBack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { lerpScore=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightArrow") ) { rightArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpWeekText") ) { grpWeekText=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { txtWeekTitle=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { txtTracklist=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedWeek") ) { selectedWeek=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stopspamming") ) { stopspamming=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedScore") ) { intendedScore=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { grpWeekCharacters=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sprDifficultyGroup") ) { sprDifficultyGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"difficultySelectors") ) { difficultySelectors=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StoryMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curWeek") ) { curWeek=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"weekCompleted") ) { weekCompleted=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { curDifficulty=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void StoryMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scoreText",1f,7d,bd,dc));
	outFields->push(HX_("txtWeekTitle",74,f4,3f,69));
	outFields->push(HX_("bgSprite",aa,c7,9c,98));
	outFields->push(HX_("txtTracklist",d9,6f,f5,3e));
	outFields->push(HX_("grpWeekText",c6,97,1f,d2));
	outFields->push(HX_("grpWeekCharacters",83,fc,76,59));
	outFields->push(HX_("grpLocks",03,78,f1,5b));
	outFields->push(HX_("difficultySelectors",b9,fa,53,88));
	outFields->push(HX_("sprDifficultyGroup",4f,e5,95,d1));
	outFields->push(HX_("leftArrow",42,68,6f,3a));
	outFields->push(HX_("rightArrow",4d,60,54,28));
	outFields->push(HX_("movedBack",fa,67,95,ea));
	outFields->push(HX_("selectedWeek",ef,7f,8f,df));
	outFields->push(HX_("stopspamming",e0,83,63,4e));
	outFields->push(HX_("lerpScore",5b,81,4d,e7));
	outFields->push(HX_("intendedScore",a7,fd,7c,89));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StoryMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,scoreText),HX_("scoreText",1f,7d,bd,dc)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,txtWeekTitle),HX_("txtWeekTitle",74,f4,3f,69)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,bgSprite),HX_("bgSprite",aa,c7,9c,98)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,txtTracklist),HX_("txtTracklist",d9,6f,f5,3e)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,grpWeekText),HX_("grpWeekText",c6,97,1f,d2)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,grpWeekCharacters),HX_("grpWeekCharacters",83,fc,76,59)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,grpLocks),HX_("grpLocks",03,78,f1,5b)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,difficultySelectors),HX_("difficultySelectors",b9,fa,53,88)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,sprDifficultyGroup),HX_("sprDifficultyGroup",4f,e5,95,d1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,leftArrow),HX_("leftArrow",42,68,6f,3a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,rightArrow),HX_("rightArrow",4d,60,54,28)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,movedBack),HX_("movedBack",fa,67,95,ea)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,selectedWeek),HX_("selectedWeek",ef,7f,8f,df)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,stopspamming),HX_("stopspamming",e0,83,63,4e)},
	{::hx::fsInt,(int)offsetof(StoryMenuState_obj,lerpScore),HX_("lerpScore",5b,81,4d,e7)},
	{::hx::fsInt,(int)offsetof(StoryMenuState_obj,intendedScore),HX_("intendedScore",a7,fd,7c,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StoryMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &StoryMenuState_obj::weekCompleted,HX_("weekCompleted",f7,82,ec,84)},
	{::hx::fsInt,(void *) &StoryMenuState_obj::curDifficulty,HX_("curDifficulty",db,b7,38,a7)},
	{::hx::fsInt,(void *) &StoryMenuState_obj::curWeek,HX_("curWeek",94,d1,0a,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StoryMenuState_obj_sMemberFields[] = {
	HX_("scoreText",1f,7d,bd,dc),
	HX_("txtWeekTitle",74,f4,3f,69),
	HX_("bgSprite",aa,c7,9c,98),
	HX_("txtTracklist",d9,6f,f5,3e),
	HX_("grpWeekText",c6,97,1f,d2),
	HX_("grpWeekCharacters",83,fc,76,59),
	HX_("grpLocks",03,78,f1,5b),
	HX_("difficultySelectors",b9,fa,53,88),
	HX_("sprDifficultyGroup",4f,e5,95,d1),
	HX_("leftArrow",42,68,6f,3a),
	HX_("rightArrow",4d,60,54,28),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("movedBack",fa,67,95,ea),
	HX_("selectedWeek",ef,7f,8f,df),
	HX_("stopspamming",e0,83,63,4e),
	HX_("selectWeek",10,d5,90,bd),
	HX_("changeDifficulty",cb,0f,40,d4),
	HX_("lerpScore",5b,81,4d,e7),
	HX_("intendedScore",a7,fd,7c,89),
	HX_("changeWeek",84,95,3e,29),
	HX_("weekIsLocked",a8,d0,e6,fb),
	HX_("updateText",56,b7,ae,05),
	::String(null()) };

static void StoryMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StoryMenuState_obj::weekCompleted,"weekCompleted");
	HX_MARK_MEMBER_NAME(StoryMenuState_obj::curDifficulty,"curDifficulty");
	HX_MARK_MEMBER_NAME(StoryMenuState_obj::curWeek,"curWeek");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StoryMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StoryMenuState_obj::weekCompleted,"weekCompleted");
	HX_VISIT_MEMBER_NAME(StoryMenuState_obj::curDifficulty,"curDifficulty");
	HX_VISIT_MEMBER_NAME(StoryMenuState_obj::curWeek,"curWeek");
};

#endif

::hx::Class StoryMenuState_obj::__mClass;

static ::String StoryMenuState_obj_sStaticFields[] = {
	HX_("weekCompleted",f7,82,ec,84),
	HX_("curDifficulty",db,b7,38,a7),
	HX_("curWeek",94,d1,0a,ba),
	::String(null())
};

void StoryMenuState_obj::__register()
{
	StoryMenuState_obj _hx_dummy;
	StoryMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StoryMenuState",5d,99,60,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StoryMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &StoryMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = StoryMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StoryMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StoryMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StoryMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StoryMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StoryMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StoryMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StoryMenuState_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_29_boot)
HXDLIN(  29)		weekCompleted =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_33_boot)
HXDLIN(  33)		curDifficulty = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_38_boot)
HXDLIN(  38)		curWeek = 0;
            	}
}

