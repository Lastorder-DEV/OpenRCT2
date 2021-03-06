#pragma region Copyright (c) 2014-2017 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#pragma once

#include <vector>

#include <openrct2/common.h>

extern "C"
{
    #include <openrct2/drawing/drawing.h>
    #include <openrct2/interface/colour.h>
    #include <openrct2/paint/paint.h>
    #include <openrct2/paint/tile_element/tile_element.h>
}

#include "addresses.h"

#define gRideEntries                RCT2_ADDRESS(0x009ACFA4, rct_ride_entry*)
#define gSupportSegments            RCT2_ADDRESS(0x0141E9B4, support_height)
#define gWoodenSupportsPrependTo    RCT2_GLOBAL(0x009DEA58, paint_struct *)
#define gPaintStructs               RCT2_ADDRESS(0x00EE788C, paint_entry)
#define g_currently_drawn_item      RCT2_GLOBAL(0x009DE578, void*)
#define gEndOfPaintStructArray      RCT2_GLOBAL(0x00EE7880, paint_entry *)
#define gPaintSpritePosition        RCT2_GLOBAL(0x009DE568, LocationXY16)
#define gPaintInteractionType       RCT2_GLOBAL(0x009DE570, uint8)
#define gSupportSegments            RCT2_ADDRESS(0x0141E9B4, support_height)
#define gSupport                    RCT2_GLOBAL(0x0141E9D8, support_height)
#define gWoodenSupportsPrependTo    RCT2_GLOBAL(0x009DEA58, paint_struct *)
#define gPaintMapPosition           RCT2_GLOBAL(0x009DE574, LocationXY16)
#define gLeftTunnels                RCT2_ADDRESS(0x009E3138, tunnel_entry)
#define gLeftTunnelCount            RCT2_GLOBAL(0x0141F56A, uint8)
#define gRightTunnels               RCT2_ADDRESS(0x009E30B6, tunnel_entry)
#define gRightTunnelCount           RCT2_GLOBAL(0x0141F56B, uint8)
#define gVerticalTunnelHeight       RCT2_GLOBAL(0x009E323C, uint8)
#define gSurfaceElement             RCT2_GLOBAL(0x009E3250, rct_tile_element *)
#define gDidPassSurface             RCT2_GLOBAL(0x009DE57C, bool)
#define g141E9DB                    RCT2_GLOBAL(0x0141E9DB, uint8)
#define gUnk141E9DC                 RCT2_GLOBAL(0x0141E9DC, uint16)
#define gTrackColours               RCT2_ADDRESS(0x00F44198, uint32)
#define RCT2_CurrentViewportFlags   RCT2_GLOBAL(0x0141E9E4, uint32)
#define RCT2_CurrentRotation        RCT2_GLOBAL(0x0141E9E0, uint8)
#define RCT2_ScenarioTicks          RCT2_GLOBAL(0x00F663AC, uint32)
#define RCT2_Rides                  RCT2_ADDRESS(0x013628F8, rct2_ride)
#define RCT2_Unk140E9A8             RCT2_GLOBAL(0x0140E9A8, rct_drawpixelinfo *)
#define RCT2_PaintBoundBoxOffsetX   RCT2_GLOBAL(0x009DEA52, sint16)
#define RCT2_PaintBoundBoxOffsetY   RCT2_GLOBAL(0x009DEA54, sint16)
#define RCT2_PaintBoundBoxOffsetZ   RCT2_GLOBAL(0x009DEA56, sint16)

enum {
    TEST_SUCCESS,
    TEST_FAILED,
    TEST_SKIPPED,
};

namespace TestPaint
{
    static const uint32 DEFAULT_SCHEME_TRACK = SPRITE_ID_PALETTE_COLOUR_2(COLOUR_GREY, COLOUR_WHITE);
    static const uint32 DEFAULT_SCHEME_SUPPORTS = SPRITE_ID_PALETTE_COLOUR_2(COLOUR_LIGHT_BLUE, COLOUR_ICY_BLUE);
    static const uint32 DEFAULT_SCHEME_MISC = SPRITE_ID_PALETTE_COLOUR_2(COLOUR_DARK_PURPLE, COLOUR_LIGHT_PURPLE);
    static const uint32 DEFAULT_SCHEME_3 = SPRITE_ID_PALETTE_COLOUR_2(COLOUR_BRIGHT_PURPLE, COLOUR_DARK_BLUE);

    void ResetEnvironment();
    void ResetTunnels();
    void ResetSupportHeights();
}

enum Verbosity {
    QUIET,
    NORMAL,
};

extern "C"
{
int generatePaintCode(uint8 rideType);
}
