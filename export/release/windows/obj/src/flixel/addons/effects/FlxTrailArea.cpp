#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_FlxTrailArea
#include <flixel/addons/effects/FlxTrailArea.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_21_new,"flixel.addons.effects.FlxTrailArea","new",0x21f8d728,"flixel.addons.effects.FlxTrailArea.new","flixel/addons/effects/FlxTrailArea.hx",21,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_145_setSize,"flixel.addons.effects.FlxTrailArea","setSize",0xf99bec4b,"flixel.addons.effects.FlxTrailArea.setSize","flixel/addons/effects/FlxTrailArea.hx",145,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_158_destroy,"flixel.addons.effects.FlxTrailArea","destroy",0x0c4a37c2,"flixel.addons.effects.FlxTrailArea.destroy","flixel/addons/effects/FlxTrailArea.hx",158,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_172_draw,"flixel.addons.effects.FlxTrailArea","draw",0x9131143c,"flixel.addons.effects.FlxTrailArea.draw","flixel/addons/effects/FlxTrailArea.hx",172,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_233_resetTrail,"flixel.addons.effects.FlxTrailArea","resetTrail",0x69ccadaf,"flixel.addons.effects.FlxTrailArea.resetTrail","flixel/addons/effects/FlxTrailArea.hx",233,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_245_add,"flixel.addons.effects.FlxTrailArea","add",0x21eef8e9,"flixel.addons.effects.FlxTrailArea.add","flixel/addons/effects/FlxTrailArea.hx",245,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_253_get_width,"flixel.addons.effects.FlxTrailArea","get_width",0x76fe5f25,"flixel.addons.effects.FlxTrailArea.get_width","flixel/addons/effects/FlxTrailArea.hx",253,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_260_set_width,"flixel.addons.effects.FlxTrailArea","set_width",0x5a4f4b31,"flixel.addons.effects.FlxTrailArea.set_width","flixel/addons/effects/FlxTrailArea.hx",260,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_276_get_height,"flixel.addons.effects.FlxTrailArea","get_height",0x5de459e8,"flixel.addons.effects.FlxTrailArea.get_height","flixel/addons/effects/FlxTrailArea.hx",276,0x94f04047)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab4ec402b6e92a6_283_set_height,"flixel.addons.effects.FlxTrailArea","set_height",0x6161f85c,"flixel.addons.effects.FlxTrailArea.set_height","flixel/addons/effects/FlxTrailArea.hx",283,0x94f04047)
namespace flixel{
namespace addons{
namespace effects{

void FlxTrailArea_obj::__construct(::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_AlphaMultiplier,::hx::Null< int >  __o_Delay,::hx::Null< bool >  __o_SimpleRender,::hx::Null< bool >  __o_Antialiasing, ::Dynamic TrailBlendMode){
            		int X = __o_X.Default(0);
            		int Y = __o_Y.Default(0);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		Float AlphaMultiplier = __o_AlphaMultiplier.Default(((Float)0.8));
            		int Delay = __o_Delay.Default(2);
            		bool SimpleRender = __o_SimpleRender.Default(false);
            		bool Antialiasing = __o_Antialiasing.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_21_new)
HXLINE( 100)		this->_height = ((Float)1);
HXLINE(  94)		this->_width = ((Float)1);
HXLINE(  88)		this->_counter = 0;
HXLINE(  83)		this->alphaOffset = ((Float)0);
HXLINE(  78)		this->blueOffset = ((Float)0);
HXLINE(  73)		this->greenOffset = ((Float)0);
HXLINE(  68)		this->redOffset = ((Float)0);
HXLINE(  58)		this->blueMultiplier = ((Float)1);
HXLINE(  53)		this->greenMultiplier = ((Float)1);
HXLINE(  48)		this->redMultiplier = ((Float)1);
HXLINE(  38)		this->blendMode = null();
HXLINE(  32)		this->simpleRender = false;
HXLINE(  26)		this->delay = 2;
HXLINE( 123)		super::__construct(X,Y,null());
HXLINE( 125)		this->group =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 128)		this->delay = Delay;
HXLINE( 129)		this->simpleRender = SimpleRender;
HXLINE( 130)		this->blendMode = TrailBlendMode;
HXLINE( 131)		this->set_antialiasing(Antialiasing);
HXLINE( 132)		this->alphaMultiplier = AlphaMultiplier;
HXLINE( 134)		this->setSize(( (Float)(Width) ),( (Float)(Height) ));
HXLINE( 135)		this->set_pixels(this->_areaPixels);
            	}

Dynamic FlxTrailArea_obj::__CreateEmpty() { return new FlxTrailArea_obj; }

void *FlxTrailArea_obj::_hx_vtable = 0;

Dynamic FlxTrailArea_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTrailArea_obj > _hx_result = new FlxTrailArea_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool FlxTrailArea_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2edadb68) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x2edadb68;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTrailArea_obj::setSize(Float Width,Float Height){
            	HX_GC_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_145_setSize)
HXLINE( 146)		if ((Width <= 0)) {
HXLINE( 146)			Width = ( (Float)(::flixel::FlxG_obj::width) );
            		}
HXLINE( 147)		if ((Height <= 0)) {
HXLINE( 147)			Height = ( (Float)(::flixel::FlxG_obj::height) );
            		}
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		if ((Width == this->_width)) {
HXLINE( 149)			_hx_tmp = (Height != this->_height);
            		}
            		else {
HXLINE( 149)			_hx_tmp = true;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 151)			this->_width = Width;
HXLINE( 152)			this->_height = Height;
HXLINE( 153)			int _hx_tmp = ::Std_obj::_hx_int(this->_width);
HXDLIN( 153)			this->_areaPixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int(this->_height),true,0);
            		}
            	}


void FlxTrailArea_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_158_destroy)
HXLINE( 159)		this->group = ( ( ::flixel::group::FlxTypedGroup)(::flixel::util::FlxDestroyUtil_obj::destroy(this->group)) );
HXLINE( 160)		this->blendMode = null();
HXLINE( 162)		 ::openfl::display::BitmapData _hx_tmp = this->get_pixels();
HXDLIN( 162)		if (::hx::IsInstanceNotEq( _hx_tmp,this->_areaPixels )) {
HXLINE( 164)			this->_areaPixels->dispose();
            		}
HXLINE( 166)		this->_areaPixels = null();
HXLINE( 168)		this->super::destroy();
            	}


void FlxTrailArea_obj::draw(){
            	HX_GC_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_172_draw)
HXLINE( 174)		this->_counter++;
HXLINE( 176)		if ((this->_counter >= this->delay)) {
HXLINE( 178)			this->_counter = 0;
HXLINE( 179)			this->_areaPixels->lock();
HXLINE( 181)			 ::openfl::geom::ColorTransform cTrans =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,this->redMultiplier,this->greenMultiplier,this->blueMultiplier,this->alphaMultiplier,this->redOffset,this->greenOffset,this->blueOffset,this->alphaOffset);
HXLINE( 182)			 ::openfl::display::BitmapData _hx_tmp = this->_areaPixels;
HXDLIN( 182)			_hx_tmp->colorTransform( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,this->_areaPixels->width,this->_areaPixels->height),cTrans);
HXLINE( 185)			{
HXLINE( 185)				int _g = 0;
HXDLIN( 185)				::Array< ::Dynamic> _g1 = this->group->members;
HXDLIN( 185)				while((_g < _g1->length)){
HXLINE( 185)					 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 185)					_g = (_g + 1);
HXLINE( 187)					if (member->exists) {
HXLINE( 189)						Float finalX = ((member->x - this->x) - member->offset->x);
HXLINE( 190)						Float finalY = ((member->y - this->y) - member->offset->y);
HXLINE( 192)						if (this->simpleRender) {
HXLINE( 194)							 ::openfl::display::BitmapData _hx_tmp = this->_areaPixels;
HXDLIN( 194)							 ::openfl::display::BitmapData _hx_tmp1 = member->updateFramePixels();
HXDLIN( 194)							 ::openfl::geom::Rectangle _hx_tmp2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,member->frameWidth,member->frameHeight);
HXDLIN( 194)							_hx_tmp->copyPixels(_hx_tmp1,_hx_tmp2, ::openfl::geom::Point_obj::__alloc( HX_CTX ,finalX,finalY),null(),null(),true);
            						}
            						else {
HXLINE( 199)							bool scaled;
HXDLIN( 199)							if ((member->scale->x == 1)) {
HXLINE( 199)								scaled = (member->scale->y != 1);
            							}
            							else {
HXLINE( 199)								scaled = true;
            							}
HXLINE( 200)							bool rotated;
HXDLIN( 200)							if ((member->angle != 0)) {
HXLINE( 200)								rotated = (member->bakedRotationAngle <= 0);
            							}
            							else {
HXLINE( 200)								rotated = false;
            							}
HXLINE( 201)							this->_matrix->identity();
HXLINE( 202)							bool _hx_tmp;
HXDLIN( 202)							if (!(rotated)) {
HXLINE( 202)								_hx_tmp = scaled;
            							}
            							else {
HXLINE( 202)								_hx_tmp = true;
            							}
HXDLIN( 202)							if (_hx_tmp) {
HXLINE( 204)								this->_matrix->translate(-(member->origin->x),-(member->origin->y));
HXLINE( 205)								if (scaled) {
HXLINE( 207)									this->_matrix->scale(member->scale->x,member->scale->y);
            								}
HXLINE( 209)								if (rotated) {
HXLINE( 211)									this->_matrix->rotate((member->angle * (::Math_obj::PI / ( (Float)(180) ))));
            								}
HXLINE( 213)								this->_matrix->translate(member->origin->x,member->origin->y);
            							}
HXLINE( 215)							this->_matrix->translate(finalX,finalY);
HXLINE( 216)							 ::openfl::display::BitmapData _hx_tmp1 = this->_areaPixels;
HXDLIN( 216)							 ::openfl::display::BitmapData _hx_tmp2 = member->updateFramePixels();
HXDLIN( 216)							_hx_tmp1->draw(_hx_tmp2,this->_matrix,member->colorTransform,this->blendMode,null(),this->antialiasing);
            						}
            					}
            				}
            			}
HXLINE( 221)			this->_areaPixels->unlock(null());
HXLINE( 222)			this->set_pixels(this->_areaPixels);
            		}
HXLINE( 225)		this->super::draw();
            	}


void FlxTrailArea_obj::resetTrail(){
            	HX_GC_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_233_resetTrail)
HXDLIN( 233)		 ::openfl::display::BitmapData _hx_tmp = this->_areaPixels;
HXDLIN( 233)		_hx_tmp->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,this->_areaPixels->width,this->_areaPixels->height),0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrailArea_obj,resetTrail,(void))

 ::flixel::FlxSprite FlxTrailArea_obj::add( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_245_add)
HXDLIN( 245)		return this->group->add(Sprite).StaticCast<  ::flixel::FlxSprite >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrailArea_obj,add,return )

Float FlxTrailArea_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_253_get_width)
HXDLIN( 253)		return this->_width;
            	}


Float FlxTrailArea_obj::set_width(Float Width){
            	HX_GC_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_260_set_width)
HXLINE( 261)		if ((Width <= 0)) {
HXLINE( 261)			Width = ( (Float)(::flixel::FlxG_obj::width) );
            		}
HXLINE( 263)		if ((Width != this->_width)) {
HXLINE( 265)			int _hx_tmp = ::Std_obj::_hx_int(Width);
HXDLIN( 265)			this->_areaPixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int(this->_height),true,0);
            		}
HXLINE( 268)		return (this->_width = Width);
            	}


Float FlxTrailArea_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_276_get_height)
HXDLIN( 276)		return this->_height;
            	}


Float FlxTrailArea_obj::set_height(Float Height){
            	HX_GC_STACKFRAME(&_hx_pos_0ab4ec402b6e92a6_283_set_height)
HXLINE( 284)		if ((Height <= 0)) {
HXLINE( 284)			Height = ( (Float)(::flixel::FlxG_obj::height) );
            		}
HXLINE( 286)		if ((Height != this->_height)) {
HXLINE( 288)			int _hx_tmp = ::Std_obj::_hx_int(this->_width);
HXDLIN( 288)			this->_areaPixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int(Height),true,0);
            		}
HXLINE( 291)		return (this->_height = Height);
            	}



::hx::ObjectPtr< FlxTrailArea_obj > FlxTrailArea_obj::__new(::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_AlphaMultiplier,::hx::Null< int >  __o_Delay,::hx::Null< bool >  __o_SimpleRender,::hx::Null< bool >  __o_Antialiasing, ::Dynamic TrailBlendMode) {
	::hx::ObjectPtr< FlxTrailArea_obj > __this = new FlxTrailArea_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_AlphaMultiplier,__o_Delay,__o_SimpleRender,__o_Antialiasing,TrailBlendMode);
	return __this;
}

::hx::ObjectPtr< FlxTrailArea_obj > FlxTrailArea_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_AlphaMultiplier,::hx::Null< int >  __o_Delay,::hx::Null< bool >  __o_SimpleRender,::hx::Null< bool >  __o_Antialiasing, ::Dynamic TrailBlendMode) {
	FlxTrailArea_obj *__this = (FlxTrailArea_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTrailArea_obj), true, "flixel.addons.effects.FlxTrailArea"));
	*(void **)__this = FlxTrailArea_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_AlphaMultiplier,__o_Delay,__o_SimpleRender,__o_Antialiasing,TrailBlendMode);
	return __this;
}

FlxTrailArea_obj::FlxTrailArea_obj()
{
}

void FlxTrailArea_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTrailArea);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(simpleRender,"simpleRender");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(redMultiplier,"redMultiplier");
	HX_MARK_MEMBER_NAME(greenMultiplier,"greenMultiplier");
	HX_MARK_MEMBER_NAME(blueMultiplier,"blueMultiplier");
	HX_MARK_MEMBER_NAME(alphaMultiplier,"alphaMultiplier");
	HX_MARK_MEMBER_NAME(redOffset,"redOffset");
	HX_MARK_MEMBER_NAME(greenOffset,"greenOffset");
	HX_MARK_MEMBER_NAME(blueOffset,"blueOffset");
	HX_MARK_MEMBER_NAME(alphaOffset,"alphaOffset");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_areaPixels,"_areaPixels");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTrailArea_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(simpleRender,"simpleRender");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(redMultiplier,"redMultiplier");
	HX_VISIT_MEMBER_NAME(greenMultiplier,"greenMultiplier");
	HX_VISIT_MEMBER_NAME(blueMultiplier,"blueMultiplier");
	HX_VISIT_MEMBER_NAME(alphaMultiplier,"alphaMultiplier");
	HX_VISIT_MEMBER_NAME(redOffset,"redOffset");
	HX_VISIT_MEMBER_NAME(greenOffset,"greenOffset");
	HX_VISIT_MEMBER_NAME(blueOffset,"blueOffset");
	HX_VISIT_MEMBER_NAME(alphaOffset,"alphaOffset");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_areaPixels,"_areaPixels");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTrailArea_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"group") ) { return ::hx::Val( group ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_counter") ) { return ::hx::Val( _counter ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return ::hx::Val( blendMode ); }
		if (HX_FIELD_EQ(inName,"redOffset") ) { return ::hx::Val( redOffset ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return ::hx::Val( blueOffset ); }
		if (HX_FIELD_EQ(inName,"resetTrail") ) { return ::hx::Val( resetTrail_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return ::hx::Val( greenOffset ); }
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return ::hx::Val( alphaOffset ); }
		if (HX_FIELD_EQ(inName,"_areaPixels") ) { return ::hx::Val( _areaPixels ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleRender") ) { return ::hx::Val( simpleRender ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return ::hx::Val( redMultiplier ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return ::hx::Val( blueMultiplier ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return ::hx::Val( greenMultiplier ); }
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return ::hx::Val( alphaMultiplier ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTrailArea_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_areaPixels") ) { _areaPixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleRender") ) { simpleRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTrailArea_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("simpleRender",28,15,89,50));
	outFields->push(HX_("blendMode",54,e4,37,0c));
	outFields->push(HX_("group",3f,b3,f4,99));
	outFields->push(HX_("redMultiplier",32,f4,e9,4e));
	outFields->push(HX_("greenMultiplier",24,2c,40,6f));
	outFields->push(HX_("blueMultiplier",bb,32,96,cf));
	outFields->push(HX_("alphaMultiplier",7f,b4,82,9a));
	outFields->push(HX_("redOffset",c4,37,9e,53));
	outFields->push(HX_("greenOffset",b6,0e,d9,b7));
	outFields->push(HX_("blueOffset",cd,3d,34,bb));
	outFields->push(HX_("alphaOffset",91,8d,43,d0));
	outFields->push(HX_("_counter",7d,08,12,57));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_areaPixels",b9,63,09,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTrailArea_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxTrailArea_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(FlxTrailArea_obj,simpleRender),HX_("simpleRender",28,15,89,50)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTrailArea_obj,blendMode),HX_("blendMode",54,e4,37,0c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(FlxTrailArea_obj,group),HX_("group",3f,b3,f4,99)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,redMultiplier),HX_("redMultiplier",32,f4,e9,4e)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,greenMultiplier),HX_("greenMultiplier",24,2c,40,6f)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,blueMultiplier),HX_("blueMultiplier",bb,32,96,cf)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,alphaMultiplier),HX_("alphaMultiplier",7f,b4,82,9a)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,redOffset),HX_("redOffset",c4,37,9e,53)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,greenOffset),HX_("greenOffset",b6,0e,d9,b7)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,blueOffset),HX_("blueOffset",cd,3d,34,bb)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,alphaOffset),HX_("alphaOffset",91,8d,43,d0)},
	{::hx::fsInt,(int)offsetof(FlxTrailArea_obj,_counter),HX_("_counter",7d,08,12,57)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsFloat,(int)offsetof(FlxTrailArea_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxTrailArea_obj,_areaPixels),HX_("_areaPixels",b9,63,09,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTrailArea_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTrailArea_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("simpleRender",28,15,89,50),
	HX_("blendMode",54,e4,37,0c),
	HX_("group",3f,b3,f4,99),
	HX_("redMultiplier",32,f4,e9,4e),
	HX_("greenMultiplier",24,2c,40,6f),
	HX_("blueMultiplier",bb,32,96,cf),
	HX_("alphaMultiplier",7f,b4,82,9a),
	HX_("redOffset",c4,37,9e,53),
	HX_("greenOffset",b6,0e,d9,b7),
	HX_("blueOffset",cd,3d,34,bb),
	HX_("alphaOffset",91,8d,43,d0),
	HX_("_counter",7d,08,12,57),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_areaPixels",b9,63,09,b2),
	HX_("setSize",83,e1,d7,11),
	HX_("destroy",fa,2c,86,24),
	HX_("draw",04,2c,70,42),
	HX_("resetTrail",77,cb,bb,fe),
	HX_("add",21,f2,49,00),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	::String(null()) };

::hx::Class FlxTrailArea_obj::__mClass;

void FlxTrailArea_obj::__register()
{
	FlxTrailArea_obj _hx_dummy;
	FlxTrailArea_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.FlxTrailArea",36,63,2c,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTrailArea_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTrailArea_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTrailArea_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTrailArea_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects