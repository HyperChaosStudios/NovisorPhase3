#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#define INCLUDED_flixel_graphics_tile_FlxDrawItemType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawItemType)
namespace flixel{
namespace graphics{
namespace tile{


class FlxDrawItemType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxDrawItemType_obj OBJ_;

	public:
		FlxDrawItemType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.graphics.tile.FlxDrawItemType",b4,aa,75,d0); }
		::String __ToString() const { return HX_("FlxDrawItemType.",cb,f1,5f,54) + _hx_tag; }

		static ::flixel::graphics::tile::FlxDrawItemType TILES;
		static inline ::flixel::graphics::tile::FlxDrawItemType TILES_dyn() { return TILES; }
		static ::flixel::graphics::tile::FlxDrawItemType TRIANGLES;
		static inline ::flixel::graphics::tile::FlxDrawItemType TRIANGLES_dyn() { return TRIANGLES; }
};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxDrawItemType */ 
