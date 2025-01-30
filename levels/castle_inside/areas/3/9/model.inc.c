// 0x07066D88 - 0x07066E48
static const Vtx inside_castle_seg7_vertex_07066D88[] = {
	{{ {2970, -2506, -664}, 0, {1264, 496}, {0xff, 0xff, 0x00, 0x80}}},
	{{ {2304, -2506, -716}, 0, {-2064, 240}, {0xff, 0xff, 0x00, 0x80}}},
	{{ {2304, -2506, -511}, 0, {-2064, 1264}, {0xff, 0xff, 0x00, 0x80}}},
	{{ {2970, -2506, -562}, 0, {1264, 1008}, {0xff, 0xff, 0x00, 0x80}}},
	{{ {3226, -2506, -613}, 0, {2544, 752}, {0xff, 0xff, 0x00, 0x80}}},
	{{ {2970, -2506, -408}, 0, {1264, 1776}, {0xff, 0xff, 0x00, 0x80}}},
	{{ {2970, -2506, -818}, 0, {1264, -272}, {0xff, 0xff, 0x00, 0x80}}},
};

// 0x07066E48 - 0x07066E90
static const Gfx inside_castle_seg7_dl_07066E48[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, inside_0900B000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(inside_castle_seg7_vertex_07066D88, 7, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 0, 4, 0),
	gsSPEndDisplayList(),
};


// 0x07066E90 - 0x07066F00
const Gfx inside_castle_seg7_dl_07066E90[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(inside_castle_seg7_dl_07066E48),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};
