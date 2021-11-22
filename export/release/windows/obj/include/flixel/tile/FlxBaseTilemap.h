#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#define INCLUDED_flixel_tile_FlxBaseTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapAutoTiling)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxBaseTilemap_obj : public  ::flixel::FlxObject_obj
{
	public:
		typedef  ::flixel::FlxObject_obj super;
		typedef FlxBaseTilemap_obj OBJ_;
		FlxBaseTilemap_obj();

	public:
		enum { _hx_ClassId = 0x3d6253b5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxBaseTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxBaseTilemap"); }
		static ::hx::ObjectPtr< FlxBaseTilemap_obj > __new();
		static ::hx::ObjectPtr< FlxBaseTilemap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBaseTilemap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBaseTilemap",eb,7c,1d,f6); }

		static void __boot();
		static ::Array< int > offsetAutoTile;
		 ::flixel::tile::FlxTilemapAutoTiling _hx_auto;
		int widthInTiles;
		int heightInTiles;
		int totalTiles;
		::Array< int > customTileRemap;
		::Array< int > _randomIndices;
		::Array< ::Dynamic> _randomChoices;
		 ::Dynamic _randomLambda;
		Dynamic _randomLambda_dyn() { return _randomLambda;}
		::cpp::VirtualArray _tileObjects;
		int _startingIndex;
		::Array< int > _data;
		int _drawIndex;
		int _collideIndex;
		void updateTile(int Index);
		::Dynamic updateTile_dyn();

		void cacheGraphics(int TileWidth,int TileHeight, ::Dynamic TileGraphic);
		::Dynamic cacheGraphics_dyn();

		void initTileObjects();
		::Dynamic initTileObjects_dyn();

		void updateMap();
		::Dynamic updateMap_dyn();

		void computeDimensions();
		::Dynamic computeDimensions_dyn();

		int getTileIndexByCoords( ::flixel::math::FlxPoint Coord);
		::Dynamic getTileIndexByCoords_dyn();

		 ::flixel::math::FlxPoint getTileCoordsByIndex(int Index,::hx::Null< bool >  Midpoint);
		::Dynamic getTileCoordsByIndex_dyn();

		bool ray( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End, ::flixel::math::FlxPoint Result,::hx::Null< Float >  Resolution);
		::Dynamic ray_dyn();

		bool overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  FlipCallbackParams, ::flixel::math::FlxPoint Position);
		::Dynamic overlapsWithCallback_dyn();

		void setDirty(::hx::Null< bool >  Dirty);
		::Dynamic setDirty_dyn();

		void destroy();

		 ::flixel::tile::FlxBaseTilemap loadMapFromCSV(::String MapData, ::Dynamic TileGraphic,::hx::Null< int >  TileWidth,::hx::Null< int >  TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  StartingIndex,::hx::Null< int >  DrawIndex,::hx::Null< int >  CollideIndex);
		::Dynamic loadMapFromCSV_dyn();

		 ::flixel::tile::FlxBaseTilemap loadMapFromArray(::Array< int > MapData,int WidthInTiles,int HeightInTiles, ::Dynamic TileGraphic,::hx::Null< int >  TileWidth,::hx::Null< int >  TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  StartingIndex,::hx::Null< int >  DrawIndex,::hx::Null< int >  CollideIndex);
		::Dynamic loadMapFromArray_dyn();

		 ::flixel::tile::FlxBaseTilemap loadMapFrom2DArray(::Array< ::Dynamic> MapData, ::Dynamic TileGraphic,::hx::Null< int >  TileWidth,::hx::Null< int >  TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  StartingIndex,::hx::Null< int >  DrawIndex,::hx::Null< int >  CollideIndex);
		::Dynamic loadMapFrom2DArray_dyn();

		 ::flixel::tile::FlxBaseTilemap loadMapFromGraphic( ::Dynamic MapGraphic,::hx::Null< bool >  Invert,::hx::Null< int >  Scale,::Array< int > ColorMap, ::Dynamic TileGraphic,::hx::Null< int >  TileWidth,::hx::Null< int >  TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  StartingIndex,::hx::Null< int >  DrawIndex,::hx::Null< int >  CollideIndex);
		::Dynamic loadMapFromGraphic_dyn();

		void loadMapHelper( ::Dynamic TileGraphic,::hx::Null< int >  TileWidth,::hx::Null< int >  TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  StartingIndex,::hx::Null< int >  DrawIndex,::hx::Null< int >  CollideIndex);
		::Dynamic loadMapHelper_dyn();

		void postGraphicLoad();
		::Dynamic postGraphicLoad_dyn();

		void applyAutoTile();
		::Dynamic applyAutoTile_dyn();

		void applyCustomRemap();
		::Dynamic applyCustomRemap_dyn();

		void randomizeIndices();
		::Dynamic randomizeIndices_dyn();

		void autoTile(int Index);
		::Dynamic autoTile_dyn();

		void autoTileFull(int Index);
		::Dynamic autoTileFull_dyn();

		void setCustomTileMappings(::Array< int > mappings,::Array< int > randomIndices,::Array< ::Dynamic> randomChoices, ::Dynamic randomLambda);
		::Dynamic setCustomTileMappings_dyn();

		int getTile(int X,int Y);
		::Dynamic getTile_dyn();

		int getTileByIndex(int Index);
		::Dynamic getTileByIndex_dyn();

		int getTileCollisions(int Index);
		::Dynamic getTileCollisions_dyn();

		::Array< int > getTileInstances(int Index);
		::Dynamic getTileInstances_dyn();

		bool setTile(int X,int Y,int Tile,::hx::Null< bool >  UpdateGraphics);
		::Dynamic setTile_dyn();

		bool setTileByIndex(int Index,int Tile,::hx::Null< bool >  UpdateGraphics);
		::Dynamic setTileByIndex_dyn();

		void setTileProperties(int Tile,::hx::Null< int >  AllowCollisions, ::Dynamic Callback,::hx::Class CallbackFilter,::hx::Null< int >  Range);
		::Dynamic setTileProperties_dyn();

		::Array< int > getData(::hx::Null< bool >  Simple);
		::Dynamic getData_dyn();

		::Array< ::Dynamic> findPath( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End,::hx::Null< bool >  Simplify,::hx::Null< bool >  RaySimplify,::hx::Null< int >  DiagonalPolicy);
		::Dynamic findPath_dyn();

		::Array< int > computePathDistance(int StartIndex,int EndIndex,int DiagonalPolicy,::hx::Null< bool >  StopOnEnd);
		::Dynamic computePathDistance_dyn();

		void walkPath(::Array< int > Data,int Start,::Array< ::Dynamic> Points);
		::Dynamic walkPath_dyn();

		void simplifyPath(::Array< ::Dynamic> Points);
		::Dynamic simplifyPath_dyn();

		void raySimplifyPath(::Array< ::Dynamic> Points);
		::Dynamic raySimplifyPath_dyn();

		bool overlaps( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  InScreenSpace, ::flixel::FlxCamera Camera);

		bool tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< bool >  InScreenSpace, ::flixel::FlxCamera Camera);
		::Dynamic tilemapOverlapsCallback_dyn();

		bool overlapsAt(Float X,Float Y, ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  InScreenSpace, ::flixel::FlxCamera Camera);

		bool tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera);
		::Dynamic tilemapOverlapsAtCallback_dyn();

		bool overlapsPoint( ::flixel::math::FlxPoint WorldPoint,::hx::Null< bool >  InScreenSpace, ::flixel::FlxCamera Camera);

		bool tileAtPointAllowsCollisions( ::flixel::math::FlxPoint point);
		::Dynamic tileAtPointAllowsCollisions_dyn();

		 ::flixel::math::FlxRect getBounds( ::flixel::math::FlxRect Bounds);
		::Dynamic getBounds_dyn();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxBaseTilemap */ 
