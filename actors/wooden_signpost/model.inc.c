Lights1 wooden_signpost_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

ALIGNED8 static const u8 wooden_signpost_seg3_texture_0302C9C8[] = {
#include "actors/wooden_signpost/wooden_signpost_back.rgba16.inc.c"
};

ALIGNED8 static const u8 wooden_signpost_seg3_texture_0302D1C8[] = {
#include "actors/wooden_signpost/wooden_signpost_front.rgba16.inc.c"
};

Gfx mat_wooden_back[] = {
	gsSPSetLights1(wooden_signpost_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, wooden_signpost_seg3_texture_0302C9C8),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_wooden_front[] = {
	gsSPSetLights1(wooden_signpost_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, wooden_signpost_seg3_texture_0302D1C8),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Vtx wooden_signpost_mesh_vtx_0[15] = {
	{{ {-23, 490, 34}, 0, {922, 162}, {158, 56, 58, 255} }},
	{{ {-23, -39, -6}, 0, {20, 162}, {147, 252, 191, 255} }},
	{{ {0, -39, 34}, 0, {20, 462}, {255, 247, 127, 255} }},
	{{ {0, 490, -6}, 0, {922, 462}, {255, 56, 142, 255} }},
	{{ {0, 504, 19}, 0, {946, 462}, {255, 127, 250, 255} }},
	{{ {24, 490, 34}, 0, {922, 764}, {98, 56, 57, 255} }},
	{{ {24, -39, -6}, 0, {20, 764}, {110, 252, 192, 255} }},
	{{ {180, 260, 20}, 0, {974, 974}, {73, 183, 183, 255} }},
	{{ {-179, 260, 60}, 0, {-16, 974}, {183, 183, 73, 255} }},
	{{ {-179, 260, 20}, 0, {-16, 974}, {183, 183, 183, 255} }},
	{{ {180, 260, 60}, 0, {974, 974}, {73, 183, 73, 255} }},
	{{ {180, 460, 20}, 0, {974, -16}, {73, 73, 183, 255} }},
	{{ {-179, 460, 20}, 0, {-16, -16}, {183, 73, 183, 255} }},
	{{ {-179, 460, 60}, 0, {-16, -16}, {183, 73, 73, 255} }},
	{{ {180, 460, 60}, 0, {974, -16}, {73, 73, 73, 255} }},
};

Gfx wooden_signpost_mesh_tri_0[] = {
	gsSPVertex(wooden_signpost_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(2, 5, 0, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(3, 6, 1, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 10, 8, 0),
	gsSP1Triangle(10, 7, 11, 0),
	gsSP1Triangle(7, 12, 11, 0),
	gsSP1Triangle(7, 9, 12, 0),
	gsSP1Triangle(9, 13, 12, 0),
	gsSP1Triangle(9, 8, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 11, 0),
	gsSP1Triangle(10, 11, 14, 0),
	gsSPEndDisplayList(),
};

Vtx wooden_signpost_mesh_vtx_1[4] = {
	{{ {-179, 260, 60}, 0, {-16, 974}, {183, 183, 73, 255} }},
	{{ {180, 460, 60}, 0, {974, -16}, {73, 73, 73, 255} }},
	{{ {-179, 460, 60}, 0, {-16, -16}, {183, 73, 73, 255} }},
	{{ {180, 260, 60}, 0, {974, 974}, {73, 183, 73, 255} }},
};

Gfx wooden_signpost_mesh_tri_1[] = {
	gsSPVertex(wooden_signpost_mesh_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Gfx wooden_signpost_mesh[] = {
	gsSPDisplayList(mat_wooden_back),
	gsSPDisplayList(wooden_signpost_mesh_tri_0),
	gsSPDisplayList(mat_wooden_front),
	gsSPDisplayList(wooden_signpost_mesh_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
