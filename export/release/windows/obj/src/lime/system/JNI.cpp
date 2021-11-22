#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_system_JNI
#include <lime/system/JNI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif
#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_18_callMember,"lime.system.JNI","callMember",0x6d0f06e7,"lime.system.JNI.callMember","lime/system/JNI.hx",18,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_43_callStatic,"lime.system.JNI","callStatic",0x6e55013b,"lime.system.JNI.callStatic","lime/system/JNI.hx",43,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_67_createMemberField,"lime.system.JNI","createMemberField",0xd212c0f5,"lime.system.JNI.createMemberField","lime/system/JNI.hx",67,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_78_createMemberMethod,"lime.system.JNI","createMemberMethod",0x87227e46,"lime.system.JNI.createMemberMethod","lime/system/JNI.hx",78,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_103_createStaticField,"lime.system.JNI","createStaticField",0xe4dcd621,"lime.system.JNI.createStaticField","lime/system/JNI.hx",103,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_114_createStaticMethod,"lime.system.JNI","createStaticMethod",0xe52aef9a,"lime.system.JNI.createStaticMethod","lime/system/JNI.hx",114,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_139_getEnv,"lime.system.JNI","getEnv",0x2402f6c6,"lime.system.JNI.getEnv","lime/system/JNI.hx",139,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_151_init,"lime.system.JNI","init",0x6490931f,"lime.system.JNI.init","lime/system/JNI.hx",151,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_163_onCallback,"lime.system.JNI","onCallback",0x99e6bb53,"lime.system.JNI.onCallback","lime/system/JNI.hx",163,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_184_postUICallback,"lime.system.JNI","postUICallback",0x8d567168,"lime.system.JNI.postUICallback","lime/system/JNI.hx",184,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_13_boot,"lime.system.JNI","boot",0x5ff0dc41,"lime.system.JNI.boot","lime/system/JNI.hx",13,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_14_boot,"lime.system.JNI","boot",0x5ff0dc41,"lime.system.JNI.boot","lime/system/JNI.hx",14,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNI_obj::__construct() { }

Dynamic JNI_obj::__CreateEmpty() { return new JNI_obj; }

void *JNI_obj::_hx_vtable = 0;

Dynamic JNI_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JNI_obj > _hx_result = new JNI_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JNI_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ecdb141;
}

 ::haxe::ds::StringMap JNI_obj::alreadyCreated;

bool JNI_obj::initialized;

 ::Dynamic JNI_obj::callMember( ::Dynamic method, ::Dynamic jobject,::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_18_callMember)
HXDLIN(  18)		switch((int)(a->get_length())){
            			case (int)0: {
HXLINE(  21)				return method(jobject);
            			}
            			break;
            			case (int)1: {
HXLINE(  23)				return method(jobject,a->__get(0));
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return method(jobject,a->__get(0),a->__get(1));
            			}
            			break;
            			case (int)3: {
HXLINE(  27)				return method(jobject,a->__get(0),a->__get(1),a->__get(2));
            			}
            			break;
            			case (int)4: {
HXLINE(  29)				return method(jobject,a->__get(0),a->__get(1),a->__get(2),a->__get(3));
            			}
            			break;
            			case (int)5: {
HXLINE(  31)				return method(jobject,a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4));
            			}
            			break;
            			case (int)6: {
HXLINE(  33)				return method(jobject,a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4),a->__get(5));
            			}
            			break;
            			case (int)7: {
HXLINE(  35)				return method(jobject,a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4),a->__get(5),a->__get(6));
            			}
            			break;
            			default:{
HXLINE(  37)				return null();
            			}
            		}
HXLINE(  18)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,callMember,return )

 ::Dynamic JNI_obj::callStatic( ::Dynamic method,::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_43_callStatic)
HXDLIN(  43)		switch((int)(a->get_length())){
            			case (int)0: {
HXLINE(  46)				return method();
            			}
            			break;
            			case (int)1: {
HXLINE(  48)				return method(a->__get(0));
            			}
            			break;
            			case (int)2: {
HXLINE(  50)				return method(a->__get(0),a->__get(1));
            			}
            			break;
            			case (int)3: {
HXLINE(  52)				return method(a->__get(0),a->__get(1),a->__get(2));
            			}
            			break;
            			case (int)4: {
HXLINE(  54)				return method(a->__get(0),a->__get(1),a->__get(2),a->__get(3));
            			}
            			break;
            			case (int)5: {
HXLINE(  56)				return method(a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4));
            			}
            			break;
            			case (int)6: {
HXLINE(  58)				return method(a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4),a->__get(5));
            			}
            			break;
            			case (int)7: {
HXLINE(  60)				return method(a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4),a->__get(5),a->__get(6));
            			}
            			break;
            			default:{
HXLINE(  62)				return null();
            			}
            		}
HXLINE(  43)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,callStatic,return )

 ::lime::_hx_system::JNIMemberField JNI_obj::createMemberField(::String className,::String memberName,::String signature){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_67_createMemberField)
HXLINE(  68)		::lime::_hx_system::JNI_obj::init();
HXLINE(  73)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createMemberField,return )

 ::Dynamic JNI_obj::createMemberMethod(::String className,::String memberName,::String signature,::hx::Null< bool >  __o_useArray,::hx::Null< bool >  __o_quietFail){
            		bool useArray = __o_useArray.Default(false);
            		bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_78_createMemberMethod)
HXLINE(  79)		::lime::_hx_system::JNI_obj::init();
HXLINE(  98)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createMemberMethod,return )

 ::lime::_hx_system::JNIStaticField JNI_obj::createStaticField(::String className,::String memberName,::String signature){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_103_createStaticField)
HXLINE( 104)		::lime::_hx_system::JNI_obj::init();
HXLINE( 109)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createStaticField,return )

 ::Dynamic JNI_obj::createStaticMethod(::String className,::String memberName,::String signature,::hx::Null< bool >  __o_useArray,::hx::Null< bool >  __o_quietFail){
            		bool useArray = __o_useArray.Default(false);
            		bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_114_createStaticMethod)
HXLINE( 115)		::lime::_hx_system::JNI_obj::init();
HXLINE( 134)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createStaticMethod,return )

 ::Dynamic JNI_obj::getEnv(){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_139_getEnv)
HXLINE( 140)		::lime::_hx_system::JNI_obj::init();
HXLINE( 145)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,getEnv,return )

void JNI_obj::init(){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_151_init)
HXDLIN( 151)		if (!(::lime::_hx_system::JNI_obj::initialized)) {
HXLINE( 153)			::lime::_hx_system::JNI_obj::initialized = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

 ::Dynamic JNI_obj::onCallback( ::Dynamic object,::String method,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_163_onCallback)
HXLINE( 164)		 ::Dynamic field = ::Reflect_obj::field(object,method);
HXLINE( 166)		if (::hx::IsNotNull( field )) {
HXLINE( 168)			if (::hx::IsNull( args )) {
HXLINE( 168)				args = ::cpp::VirtualArray_obj::__new(0);
            			}
HXLINE( 170)			return ::Reflect_obj::callMethod(object,field,args);
            		}
HXLINE( 173)		::haxe::Log_obj::trace((HX_("onCallback - unknown field ",2b,28,2a,3c) + method),::hx::SourceInfo(HX_("lime/system/JNI.hx",7f,0b,97,21),173,HX_("lime.system.JNI",bf,02,fc,60),HX_("onCallback",04,6e,bd,5c)));
HXLINE( 174)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

void JNI_obj::postUICallback( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_184_postUICallback)
HXDLIN( 184)		callback();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNI_obj,postUICallback,(void))


JNI_obj::JNI_obj()
{
}

bool JNI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { outValue = callMember_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callStatic") ) { outValue = callStatic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onCallback") ) { outValue = onCallback_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { outValue = ( alreadyCreated ); return true; }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createMemberField") ) { outValue = createMemberField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createStaticField") ) { outValue = createStaticField_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { outValue = createMemberMethod_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { outValue = createStaticMethod_dyn(); return true; }
	}
	return false;
}

bool JNI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { alreadyCreated=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JNI_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo JNI_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &JNI_obj::alreadyCreated,HX_("alreadyCreated",30,e9,f8,79)},
	{::hx::fsBool,(void *) &JNI_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void JNI_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_MARK_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JNI_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_VISIT_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#endif

::hx::Class JNI_obj::__mClass;

static ::String JNI_obj_sStaticFields[] = {
	HX_("alreadyCreated",30,e9,f8,79),
	HX_("initialized",14,f5,0f,37),
	HX_("callMember",98,b9,e5,2f),
	HX_("callStatic",ec,b3,2b,31),
	HX_("createMemberField",64,36,37,55),
	HX_("createMemberMethod",f7,c9,e4,c3),
	HX_("createStaticField",90,4b,01,68),
	HX_("createStaticMethod",4b,3b,ed,21),
	HX_("getEnv",f7,3c,1c,a3),
	HX_("init",10,3b,bb,45),
	HX_("onCallback",04,6e,bd,5c),
	HX_("postUICallback",99,d0,5a,b0),
	::String(null())
};

void JNI_obj::__register()
{
	JNI_obj _hx_dummy;
	JNI_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JNI",bf,02,fc,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNI_obj::__GetStatic;
	__mClass->mSetStaticField = &JNI_obj::__SetStatic;
	__mClass->mMarkFunc = JNI_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(JNI_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JNI_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JNI_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNI_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JNI_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_13_boot)
HXDLIN(  13)		alreadyCreated =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_14_boot)
HXDLIN(  14)		initialized = false;
            	}
}

} // end namespace lime
} // end namespace system