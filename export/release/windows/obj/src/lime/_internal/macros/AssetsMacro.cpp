#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_macros_AssetsMacro
#include <lime/_internal/macros/AssetsMacro.h>
#endif

namespace lime{
namespace _internal{
namespace macros{

void AssetsMacro_obj::__construct() { }

Dynamic AssetsMacro_obj::__CreateEmpty() { return new AssetsMacro_obj; }

void *AssetsMacro_obj::_hx_vtable = 0;

Dynamic AssetsMacro_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetsMacro_obj > _hx_result = new AssetsMacro_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetsMacro_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e2af41b;
}


AssetsMacro_obj::AssetsMacro_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetsMacro_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AssetsMacro_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AssetsMacro_obj::__mClass;

void AssetsMacro_obj::__register()
{
	AssetsMacro_obj _hx_dummy;
	AssetsMacro_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.macros.AssetsMacro",ed,85,fc,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AssetsMacro_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetsMacro_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetsMacro_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace macros
