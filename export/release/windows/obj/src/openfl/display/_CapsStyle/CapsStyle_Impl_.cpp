#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_
#include <openfl/display/_CapsStyle/CapsStyle_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_37_fromInt,"openfl.display._CapsStyle.CapsStyle_Impl_","fromInt",0xdf1ba554,"openfl.display._CapsStyle.CapsStyle_Impl_.fromInt","openfl/display/CapsStyle.hx",37,0x1f3162da)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_42_fromString,"openfl.display._CapsStyle.CapsStyle_Impl_","fromString",0xfe761d8c,"openfl.display._CapsStyle.CapsStyle_Impl_.fromString","openfl/display/CapsStyle.hx",42,0x1f3162da)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_53_toInt,"openfl.display._CapsStyle.CapsStyle_Impl_","toInt",0xbad7ec23,"openfl.display._CapsStyle.CapsStyle_Impl_.toInt","openfl/display/CapsStyle.hx",53,0x1f3162da)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_58_toString,"openfl.display._CapsStyle.CapsStyle_Impl_","toString",0xedfcc21d,"openfl.display._CapsStyle.CapsStyle_Impl_.toString","openfl/display/CapsStyle.hx",58,0x1f3162da)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_21_boot,"openfl.display._CapsStyle.CapsStyle_Impl_","boot",0xb135a923,"openfl.display._CapsStyle.CapsStyle_Impl_.boot","openfl/display/CapsStyle.hx",21,0x1f3162da)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_27_boot,"openfl.display._CapsStyle.CapsStyle_Impl_","boot",0xb135a923,"openfl.display._CapsStyle.CapsStyle_Impl_.boot","openfl/display/CapsStyle.hx",27,0x1f3162da)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_33_boot,"openfl.display._CapsStyle.CapsStyle_Impl_","boot",0xb135a923,"openfl.display._CapsStyle.CapsStyle_Impl_.boot","openfl/display/CapsStyle.hx",33,0x1f3162da)
namespace openfl{
namespace display{
namespace _CapsStyle{

void CapsStyle_Impl__obj::__construct() { }

Dynamic CapsStyle_Impl__obj::__CreateEmpty() { return new CapsStyle_Impl__obj; }

void *CapsStyle_Impl__obj::_hx_vtable = 0;

Dynamic CapsStyle_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CapsStyle_Impl__obj > _hx_result = new CapsStyle_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CapsStyle_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24f4d5cd;
}

 ::Dynamic CapsStyle_Impl__obj::NONE;

 ::Dynamic CapsStyle_Impl__obj::ROUND;

 ::Dynamic CapsStyle_Impl__obj::SQUARE;

 ::Dynamic CapsStyle_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_37_fromInt)
HXDLIN(  37)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CapsStyle_Impl__obj,fromInt,return )

 ::Dynamic CapsStyle_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_42_fromString)
HXDLIN(  42)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  44)			return 0;
HXDLIN(  44)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("round",4e,f8,65,ed)) ){
HXLINE(  45)			return 1;
HXDLIN(  45)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("square",9d,00,f2,58)) ){
HXLINE(  46)			return 2;
HXDLIN(  46)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  47)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CapsStyle_Impl__obj,fromString,return )

 ::Dynamic CapsStyle_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_53_toInt)
HXDLIN(  53)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CapsStyle_Impl__obj,toInt,return )

::String CapsStyle_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_58_toString)
HXDLIN(  58)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  60)			return HX_("none",b8,12,0a,49);
HXDLIN(  60)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  61)			return HX_("round",4e,f8,65,ed);
HXDLIN(  61)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  62)			return HX_("square",9d,00,f2,58);
HXDLIN(  62)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  63)			return null();
            		}
            		_hx_goto_4:;
HXLINE(  58)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CapsStyle_Impl__obj,toString,return )


CapsStyle_Impl__obj::CapsStyle_Impl__obj()
{
}

bool CapsStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CapsStyle_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CapsStyle_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CapsStyle_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CapsStyle_Impl__obj::ROUND,HX_("ROUND",2e,30,54,6b)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CapsStyle_Impl__obj::SQUARE,HX_("SQUARE",9d,ac,74,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CapsStyle_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::ROUND,"ROUND");
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::SQUARE,"SQUARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CapsStyle_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::ROUND,"ROUND");
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::SQUARE,"SQUARE");
};

#endif

::hx::Class CapsStyle_Impl__obj::__mClass;

static ::String CapsStyle_Impl__obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("ROUND",2e,30,54,6b),
	HX_("SQUARE",9d,ac,74,0b),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void CapsStyle_Impl__obj::__register()
{
	CapsStyle_Impl__obj _hx_dummy;
	CapsStyle_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._CapsStyle.CapsStyle_Impl_",1d,61,ee,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CapsStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CapsStyle_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CapsStyle_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CapsStyle_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CapsStyle_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CapsStyle_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CapsStyle_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CapsStyle_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_21_boot)
HXDLIN(  21)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_27_boot)
HXDLIN(  27)		ROUND = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_33_boot)
HXDLIN(  33)		SQUARE = 2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _CapsStyle
