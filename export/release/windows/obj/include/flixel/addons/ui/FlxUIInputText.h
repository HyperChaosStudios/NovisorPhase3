#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#define INCLUDED_flixel_addons_ui_FlxUIInputText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIInputText_obj : public  ::flixel::addons::ui::FlxInputText_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxInputText_obj super;
		typedef FlxUIInputText_obj OBJ_;
		FlxUIInputText_obj();

	public:
		enum { _hx_ClassId = 0x2bf43458 };

		void __construct( ::Dynamic X, ::Dynamic Y, ::Dynamic Width,::String Text, ::Dynamic size, ::Dynamic TextColor, ::Dynamic BackgroundColor, ::Dynamic EmbeddedFont);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIInputText")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIInputText"); }
		static ::hx::ObjectPtr< FlxUIInputText_obj > __new( ::Dynamic X, ::Dynamic Y, ::Dynamic Width,::String Text, ::Dynamic size, ::Dynamic TextColor, ::Dynamic BackgroundColor, ::Dynamic EmbeddedFont);
		static ::hx::ObjectPtr< FlxUIInputText_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic Width,::String Text, ::Dynamic size, ::Dynamic TextColor, ::Dynamic BackgroundColor, ::Dynamic EmbeddedFont);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIInputText_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUIInputText",d1,55,62,cf); }

		static void __boot();
		static ::String CHANGE_EVENT;
		static ::String ENTER_EVENT;
		static ::String DELETE_EVENT;
		static ::String INPUT_EVENT;
		::String name;
		bool broadcastToFlxUI;
		void resize(Float w,Float h);
		::Dynamic resize_dyn();

		void onChange(::String action);

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIInputText */ 
