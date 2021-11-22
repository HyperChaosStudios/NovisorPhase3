#ifndef INCLUDED_editors_EditorPlayState
#define INCLUDED_editors_EditorPlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS1(editors,EditorPlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace editors{


class HXCPP_CLASS_ATTRIBUTES EditorPlayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef EditorPlayState_obj OBJ_;
		EditorPlayState_obj();

	public:
		enum { _hx_ClassId = 0x299dddd2 };

		void __construct(Float startPos);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="editors.EditorPlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"editors.EditorPlayState"); }
		static ::hx::ObjectPtr< EditorPlayState_obj > __new(Float startPos);
		static ::hx::ObjectPtr< EditorPlayState_obj > __alloc(::hx::Ctx *_hx_ctx,Float startPos);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EditorPlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EditorPlayState",f0,2b,94,62); }

		 ::flixel::FlxSprite strumLine;
		 ::flixel::group::FlxTypedGroup comboGroup;
		 ::flixel::group::FlxTypedGroup strumLineNotes;
		 ::flixel::group::FlxTypedGroup opponentStrums;
		 ::flixel::group::FlxTypedGroup playerStrums;
		 ::flixel::group::FlxTypedGroup grpNoteSplashes;
		 ::flixel::group::FlxTypedGroup notes;
		::Array< ::Dynamic> unspawnNotes;
		bool generatedMusic;
		 ::flixel::_hx_system::FlxSound vocals;
		Float startOffset;
		Float startPos;
		 ::flixel::text::FlxText scoreTxt;
		 ::flixel::text::FlxText stepTxt;
		 ::flixel::text::FlxText beatTxt;
		Float timerToStart;
		 ::haxe::ds::StringMap noteTypeMap;
		void create();

		void sayGo();
		::Dynamic sayGo_dyn();

		int songHits;
		int songMisses;
		int ghostMisses;
		bool startingSong;
		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		void startSong();
		::Dynamic startSong_dyn();

		int sortByShit( ::Note Obj1, ::Note Obj2);
		::Dynamic sortByShit_dyn();

		void endSong();
		::Dynamic endSong_dyn();

		void update(Float elapsed);

		void beatHit();

		void stepHit();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		void keyShit();
		::Dynamic keyShit_dyn();

		int combo;
		void goodNoteHit( ::Note note);
		::Dynamic goodNoteHit_dyn();

		void noteMiss(::hx::Null< int >  direction, ::Dynamic ghostMiss);
		::Dynamic noteMiss_dyn();

		Float COMBO_X;
		Float COMBO_Y;
		void popUpScore( ::Note note);
		::Dynamic popUpScore_dyn();

		void generateStaticArrows(int player);
		::Dynamic generateStaticArrows_dyn();

		void StrumPlayAnim(bool isDad,int id,Float time);
		::Dynamic StrumPlayAnim_dyn();

		void spawnNoteSplashOnNote( ::Note note);
		::Dynamic spawnNoteSplashOnNote_dyn();

		void spawnNoteSplash(Float x,Float y,int data, ::Note note);
		::Dynamic spawnNoteSplash_dyn();

		void destroy();

};

} // end namespace editors

#endif /* INCLUDED_editors_EditorPlayState */ 
