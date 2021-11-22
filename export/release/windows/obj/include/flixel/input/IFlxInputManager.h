#ifndef INCLUDED_flixel_input_IFlxInputManager
#define INCLUDED_flixel_input_IFlxInputManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES IFlxInputManager_obj {
	public:
		typedef  ::flixel::util::IFlxDestroyable_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInputManager_obj *>(_hx_.mPtr->_hx_getInterface(0x65dd217a)))->_hx_destroy)();
		}
		void (::hx::Object :: *_hx_reset)(); 
		static inline void reset( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInputManager_obj *>(_hx_.mPtr->_hx_getInterface(0x65dd217a)))->_hx_reset)();
		}
		void (::hx::Object :: *_hx_update)(); 
		static inline void update( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInputManager_obj *>(_hx_.mPtr->_hx_getInterface(0x65dd217a)))->_hx_update)();
		}
		void (::hx::Object :: *_hx_onFocus)(); 
		static inline void onFocus( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInputManager_obj *>(_hx_.mPtr->_hx_getInterface(0x65dd217a)))->_hx_onFocus)();
		}
		void (::hx::Object :: *_hx_onFocusLost)(); 
		static inline void onFocusLost( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInputManager_obj *>(_hx_.mPtr->_hx_getInterface(0x65dd217a)))->_hx_onFocusLost)();
		}
};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_IFlxInputManager */ 
