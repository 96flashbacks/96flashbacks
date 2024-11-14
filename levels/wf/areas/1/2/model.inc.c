// 0x070051C8 - 0x070051E0
static const Lights1 wf_seg7_lights_070051C8 = gdSPDefLights1(
    0x66, 0x66, 0x66,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

Vtx piranha_sm64_mesh_mesh_vtx_0[8] = {
	{{{1280, 2560, -1023},0, {-16, 974},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1126, 2560, -1177},0, {974, 974},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{973, 2560, -1023},0, {974, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1126, 2560, -869},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1925, 2560, -204},0, {974, 974},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1720, 2560, 0},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1925, 2560, 0},0, {-16, 974},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1720, 2560, -204},0, {974, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

// 0x07005260 - 0x070052B8
static const Gfx wf_seg7_dl_07005260[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wf_seg7_texture_07000800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&wf_seg7_lights_070051C8.l, 1),
    gsSPLight(&wf_seg7_lights_070051C8.a, 2),
	gsSPVertex(piranha_sm64_mesh_mesh_vtx_0 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSPEndDisplayList(),
};

// 0x070052B8 - 0x07005328
const Gfx wf_seg7_dl_070052B8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(wf_seg7_dl_07005260),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
