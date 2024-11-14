// 0x0705E138 - 0x0705E238
Vtx joe_sm64_mesh_001_mesh_layer_1_vtx_0[18] = {
	{{{-1586, -972, 1587},0, {-2090, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1893, -972, 1587},0, {-5156, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1893, -1074, 1587},0, {-5156, 974},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1586, -972, 1587},0, {-2090, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1893, -1074, 1587},0, {-5156, 974},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1586, -1074, 1587},0, {-2090, 974},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-460, -1074, 2816},0, {10172, 974},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-460, -972, 1792},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-460, -1074, 1792},0, {-16, 974},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-460, -972, 2816},0, {10172, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-665, -1074, 1587},0, {-16, 974},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-460, -972, 1792},0, {2842, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-665, -972, 1587},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-460, -1074, 1792},0, {2842, 974},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-665, -972, 1587},0, {7106, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1177, -972, 1587},0, {1996, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1177, -1074, 1587},0, {1996, 974},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-665, -1074, 1587},0, {7106, 974},{0x0, 0x0, 0x7F, 0xFF}}},
};

// 0x0705E238 - 0x0705E2A0
static const Gfx inside_castle_seg7_dl_0705E238[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, inside_09008800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPVertex(joe_sm64_mesh_001_mesh_layer_1_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 13, 11, 0),
	gsSPVertex(joe_sm64_mesh_001_mesh_layer_1_vtx_0 + 14, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
};

// 0x0705E2A0 - 0x0705E310
const Gfx inside_castle_seg7_dl_0705E2A0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(inside_castle_seg7_dl_0705E238),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
