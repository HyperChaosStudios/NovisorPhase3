#include <hxcpp.h>

#ifndef INCLUDED_WiggleEffectType
#include <WiggleEffectType.h>
#endif

::WiggleEffectType WiggleEffectType_obj::DREAMY;

::WiggleEffectType WiggleEffectType_obj::FLAG;

::WiggleEffectType WiggleEffectType_obj::HEAT_WAVE_HORIZONTAL;

::WiggleEffectType WiggleEffectType_obj::HEAT_WAVE_VERTICAL;

::WiggleEffectType WiggleEffectType_obj::WAVY;

bool WiggleEffectType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DREAMY",56,69,ed,94)) { outValue = WiggleEffectType_obj::DREAMY; return true; }
	if (inName==HX_("FLAG",ac,d3,7e,2e)) { outValue = WiggleEffectType_obj::FLAG; return true; }
	if (inName==HX_("HEAT_WAVE_HORIZONTAL",9b,fc,33,c8)) { outValue = WiggleEffectType_obj::HEAT_WAVE_HORIZONTAL; return true; }
	if (inName==HX_("HEAT_WAVE_VERTICAL",6d,ac,f0,bb)) { outValue = WiggleEffectType_obj::HEAT_WAVE_VERTICAL; return true; }
	if (inName==HX_("WAVY",cd,2d,b3,39)) { outValue = WiggleEffectType_obj::WAVY; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(WiggleEffectType_obj)

int WiggleEffectType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DREAMY",56,69,ed,94)) return 0;
	if (inName==HX_("FLAG",ac,d3,7e,2e)) return 4;
	if (inName==HX_("HEAT_WAVE_HORIZONTAL",9b,fc,33,c8)) return 2;
	if (inName==HX_("HEAT_WAVE_VERTICAL",6d,ac,f0,bb)) return 3;
	if (inName==HX_("WAVY",cd,2d,b3,39)) return 1;
	return super::__FindIndex(inName);
}

int WiggleEffectType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DREAMY",56,69,ed,94)) return 0;
	if (inName==HX_("FLAG",ac,d3,7e,2e)) return 0;
	if (inName==HX_("HEAT_WAVE_HORIZONTAL",9b,fc,33,c8)) return 0;
	if (inName==HX_("HEAT_WAVE_VERTICAL",6d,ac,f0,bb)) return 0;
	if (inName==HX_("WAVY",cd,2d,b3,39)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val WiggleEffectType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DREAMY",56,69,ed,94)) return DREAMY;
	if (inName==HX_("FLAG",ac,d3,7e,2e)) return FLAG;
	if (inName==HX_("HEAT_WAVE_HORIZONTAL",9b,fc,33,c8)) return HEAT_WAVE_HORIZONTAL;
	if (inName==HX_("HEAT_WAVE_VERTICAL",6d,ac,f0,bb)) return HEAT_WAVE_VERTICAL;
	if (inName==HX_("WAVY",cd,2d,b3,39)) return WAVY;
	return super::__Field(inName,inCallProp);
}

static ::String WiggleEffectType_obj_sStaticFields[] = {
	HX_("DREAMY",56,69,ed,94),
	HX_("WAVY",cd,2d,b3,39),
	HX_("HEAT_WAVE_HORIZONTAL",9b,fc,33,c8),
	HX_("HEAT_WAVE_VERTICAL",6d,ac,f0,bb),
	HX_("FLAG",ac,d3,7e,2e),
	::String(null())
};

::hx::Class WiggleEffectType_obj::__mClass;

Dynamic __Create_WiggleEffectType_obj() { return new WiggleEffectType_obj; }

void WiggleEffectType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("WiggleEffectType",96,b3,49,6f), ::hx::TCanCast< WiggleEffectType_obj >,WiggleEffectType_obj_sStaticFields,0,
	&__Create_WiggleEffectType_obj, &__Create,
	&super::__SGetClass(), &CreateWiggleEffectType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &WiggleEffectType_obj::__GetStatic;
}

void WiggleEffectType_obj::__boot()
{
DREAMY = ::hx::CreateConstEnum< WiggleEffectType_obj >(HX_("DREAMY",56,69,ed,94),0);
FLAG = ::hx::CreateConstEnum< WiggleEffectType_obj >(HX_("FLAG",ac,d3,7e,2e),4);
HEAT_WAVE_HORIZONTAL = ::hx::CreateConstEnum< WiggleEffectType_obj >(HX_("HEAT_WAVE_HORIZONTAL",9b,fc,33,c8),2);
HEAT_WAVE_VERTICAL = ::hx::CreateConstEnum< WiggleEffectType_obj >(HX_("HEAT_WAVE_VERTICAL",6d,ac,f0,bb),3);
WAVY = ::hx::CreateConstEnum< WiggleEffectType_obj >(HX_("WAVY",cd,2d,b3,39),1);
}


