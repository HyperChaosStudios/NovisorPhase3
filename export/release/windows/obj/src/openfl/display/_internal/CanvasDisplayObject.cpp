#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasDisplayObject
#include <openfl/display/_internal/CanvasDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasGraphics
#include <openfl/display/_internal/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9de5459f7a503b62_15_render,"openfl.display._internal.CanvasDisplayObject","render",0xf8cbf477,"openfl.display._internal.CanvasDisplayObject.render","openfl/display/_internal/CanvasDisplayObject.hx",15,0x8a7cf974)
HX_LOCAL_STACK_FRAME(_hx_pos_9de5459f7a503b62_50_renderDrawable,"openfl.display._internal.CanvasDisplayObject","renderDrawable",0xa5c26b35,"openfl.display._internal.CanvasDisplayObject.renderDrawable","openfl/display/_internal/CanvasDisplayObject.hx",50,0x8a7cf974)
HX_LOCAL_STACK_FRAME(_hx_pos_9de5459f7a503b62_70_renderDrawableMask,"openfl.display._internal.CanvasDisplayObject","renderDrawableMask",0x464016c1,"openfl.display._internal.CanvasDisplayObject.renderDrawableMask","openfl/display/_internal/CanvasDisplayObject.hx",70,0x8a7cf974)
HX_LOCAL_STACK_FRAME(_hx_pos_9de5459f7a503b62_12_boot,"openfl.display._internal.CanvasDisplayObject","boot",0xf6e3d313,"openfl.display._internal.CanvasDisplayObject.boot","openfl/display/_internal/CanvasDisplayObject.hx",12,0x8a7cf974)
namespace openfl{
namespace display{
namespace _internal{

void CanvasDisplayObject_obj::__construct() { }

Dynamic CanvasDisplayObject_obj::__CreateEmpty() { return new CanvasDisplayObject_obj; }

void *CanvasDisplayObject_obj::_hx_vtable = 0;

Dynamic CanvasDisplayObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasDisplayObject_obj > _hx_result = new CanvasDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5717e8bb;
}

void CanvasDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_9de5459f7a503b62_15_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasDisplayObject_obj,render,(void))

void CanvasDisplayObject_obj::renderDrawable( ::openfl::display::DisplayObject displayObject, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_9de5459f7a503b62_50_renderDrawable)
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if (::hx::IsNotNull( displayObject->get_mask() )) {
HXLINE(  51)			if ((displayObject->get_mask()->get_width() > 0)) {
HXLINE(  51)				_hx_tmp = (displayObject->get_mask()->get_height() > 0);
            			}
            			else {
HXLINE(  51)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  53)			renderer->_hx___updateCacheBitmap(displayObject,false);
HXLINE(  55)			bool _hx_tmp;
HXDLIN(  55)			if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE(  55)				_hx_tmp = !(displayObject->_hx___isCacheBitmapRender);
            			}
            			else {
HXLINE(  55)				_hx_tmp = false;
            			}
            		}
HXLINE(  65)		renderer->_hx___renderEvent(displayObject);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasDisplayObject_obj,renderDrawable,(void))

void CanvasDisplayObject_obj::renderDrawableMask( ::openfl::display::DisplayObject displayObject, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_9de5459f7a503b62_70_renderDrawableMask)
HXDLIN(  70)		if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  72)			::openfl::display::_internal::CanvasGraphics_obj::renderMask(displayObject->_hx___graphics,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasDisplayObject_obj,renderDrawableMask,(void))


CanvasDisplayObject_obj::CanvasDisplayObject_obj()
{
}

bool CanvasDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasDisplayObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasDisplayObject_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasDisplayObject_obj::__mClass;

static ::String CanvasDisplayObject_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CanvasDisplayObject_obj::__register()
{
	CanvasDisplayObject_obj _hx_dummy;
	CanvasDisplayObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasDisplayObject",2d,7d,d0,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasDisplayObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasDisplayObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasDisplayObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasDisplayObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9de5459f7a503b62_12_boot)
HXDLIN(  12)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
