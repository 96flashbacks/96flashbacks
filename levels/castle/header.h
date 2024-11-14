#ifndef CASTLE_HEADER_H
#define CASTLE_HEADER_H

#include "types.h"
#include "game/moving_texture.h"

// geo
extern const GeoLayout RCP_Stage1Scene1[];

// leveldata
extern Gfx gfx_castle[];
extern Gfx gfx_castle_0[];
extern Gfx gfx_castle_1[];
extern Gfx gfx_castle_2[];
extern Gfx gfx_castle_3[];
extern Gfx gfx_castle_4[];
extern Gfx gfx_castle_5[];
extern Gfx gfx_castle_6[];
extern Gfx gfx_castle_7[];
extern Gfx gfx_castle_8[];
extern Gfx gfx_castle_9[];
extern const Collision castle_info[];
//extern static Movtex castle_movtex_water_data[];
extern const struct MovtexQuadCollection castle_movtex_water[];

// script
extern const LevelScript level_castle_entry[];

#endif
