#ifndef INCLUDED_AttachedSprite
#define INCLUDED_AttachedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(AttachedSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES AttachedSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef AttachedSprite_obj OBJ_;
		AttachedSprite_obj();

	public:
		enum { _hx_ClassId = 0x607d9969 };

		void __construct(::String file,::String anim,::String library, ::Dynamic __o_loop);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AttachedSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AttachedSprite"); }
		static ::hx::ObjectPtr< AttachedSprite_obj > __new(::String file,::String anim,::String library, ::Dynamic __o_loop);
		static ::hx::ObjectPtr< AttachedSprite_obj > __alloc(::hx::Ctx *_hx_ctx,::String file,::String anim,::String library, ::Dynamic __o_loop);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AttachedSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AttachedSprite",a9,16,92,7e); }

		 ::flixel::FlxSprite sprTracker;
		Float xAdd;
		Float yAdd;
		Float angleAdd;
		Float alphaAdd;
		bool copyAngle;
		bool copyAlpha;
		bool copyVisible;
		void update(Float elapsed);

};


#endif /* INCLUDED_AttachedSprite */ 
