// 0x0700BFE0 - 0x0700BFF8
static const Lights1 wf_seg7_lights_0700BFE0 = gdSPDefLights1(
	0x66, 0x66, 0x66,
	0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

Vtx ball_sm64_mesh_003_mesh_vtx_0[11] = {
	{{{452, 0, -562},0, {-3594, -2604},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-443, 0, 581},0, {974, 974},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{452, 0, 581},0, {974, -2604},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-443, 0, -570},0, {-3622, 974},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-443, 0, 581},0, {974, 974},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{452, 0, -562},0, {-3594, -2604},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{452, 0, -570},0, {-3624, -2604},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{452, 768, 774},0, {974, 6082},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{452, 768, -761},0, {974, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-571, 768, 774},0, {-3112, 6082},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-571, 768, -761},0, {-3112, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

// 0x0700CD00 - 0x0700CDB0
static const Gfx wf_seg7_dl_0700CD00[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, grass_09001000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&wf_seg7_lights_0700BFE0.l, 1),
    gsSPLight(&wf_seg7_lights_0700BFE0.a, 2),
	gsSPVertex(ball_sm64_mesh_003_mesh_vtx_0 + 0, 11, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
    gsSPEndDisplayList(),
};

Vtx ball_sm64_mesh_002_mesh_vtx_0[102] = {
	{{{-571, 768, 774},0, {6084, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-571, 640, -761},0, {-16, 462},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-571, 640, 774},0, {6084, 462},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-571, 768, 774},0, {6084, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-571, 768, -761},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-571, 640, -761},0, {-16, 462},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-571, 640, -761},0, {-5156, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{452, 640, -761},0, {-5156, 3058},{0x0, 0x81, 0x0, 0xFF}}},
	{{{452, 640, 774},0, {974, 3058},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-571, 640, 774},0, {974, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{68, 0, -474},0, {-2090, 3016},{0x81, 0x0, 0x0, 0xFF}}},
	{{{68, 640, -570},0, {-2600, 464},{0x81, 0x0, 0x0, 0xFF}}},
	{{{68, 0, -570},0, {-2600, 3016},{0x81, 0x0, 0x0, 0xFF}}},
	{{{68, 640, -474},0, {-2090, 464},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-443, -127, 581},0, {-3112, 3528},{0x0, 0x81, 0x0, 0xFF}}},
	{{{452, -127, -570},0, {3018, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{452, -127, 581},0, {-3112, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-443, -127, 575},0, {-3080, 3528},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-443, -127, -570},0, {3018, 3528},{0x0, 0x81, 0x0, 0xFF}}},
	{{{196, 0, -474},0, {-16, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{196, 640, -474},0, {-16, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{68, 640, -474},0, {-556, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{68, 0, -474},0, {-558, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-187, 0, -474},0, {-1580, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-315, 640, -474},0, {-2090, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-315, 0, -474},0, {-2090, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-187, 640, -474},0, {-1578, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{68, 0, -570},0, {-558, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{196, 640, -570},0, {-16, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{196, 0, -570},0, {-16, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{68, 0, -570},0, {-558, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{68, 640, -570},0, {-556, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{196, 640, -570},0, {-16, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{196, 0, -570},0, {-2600, 3016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{196, 640, -570},0, {-2600, 464},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{196, 640, -474},0, {-2090, 464},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{196, 0, -474},0, {-2090, 3016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-187, 0, 581},0, {-558, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-187, 640, 581},0, {-558, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-315, 640, 581},0, {-1068, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-315, 0, 581},0, {-1068, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-315, 0, -474},0, {-2090, 3016},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-315, 640, -474},0, {-2090, 464},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-315, 640, -570},0, {-2602, 464},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-315, 0, -570},0, {-2600, 3016},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-315, 0, -570},0, {-2090, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-187, 640, -570},0, {-1578, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-187, 0, -570},0, {-1580, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-315, 640, -570},0, {-2090, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-187, 0, -570},0, {-2602, 3016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-187, 640, -474},0, {-2090, 464},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-187, 0, -474},0, {-2090, 3016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-187, 640, -570},0, {-2602, 464},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-187, 0, 485},0, {3018, 3016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-187, 640, 485},0, {3018, 464},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-187, 640, 581},0, {3530, 462},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-187, 0, 581},0, {3530, 3016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-315, 0, 581},0, {3530, 3016},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-315, 640, 581},0, {3528, 462},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-315, 640, 485},0, {3018, 464},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-315, 0, 485},0, {3018, 3016},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-315, 0, 485},0, {-2090, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-187, 640, 485},0, {-1580, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-187, 0, 485},0, {-1580, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-315, 640, 485},0, {-2090, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{196, 0, 485},0, {3018, 3016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{196, 640, 485},0, {3018, 464},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{196, 640, 581},0, {3530, 462},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{196, 0, 581},0, {3530, 3016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{196, 0, 581},0, {974, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{196, 640, 581},0, {974, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{68, 640, 581},0, {462, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{68, 0, 581},0, {462, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{68, 0, 581},0, {3530, 3016},{0x81, 0x0, 0x0, 0xFF}}},
	{{{68, 640, 581},0, {3530, 462},{0x81, 0x0, 0x0, 0xFF}}},
	{{{68, 640, 485},0, {3018, 464},{0x81, 0x0, 0x0, 0xFF}}},
	{{{68, 0, 485},0, {3018, 3016},{0x81, 0x0, 0x0, 0xFF}}},
	{{{68, 0, 485},0, {-558, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{68, 640, 485},0, {-558, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{196, 640, 485},0, {-16, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{196, 0, 485},0, {-16, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-571, 640, -761},0, {-3112, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-571, 768, -761},0, {-3112, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{452, 768, -761},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{452, 640, -761},0, {974, 464},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-571, 768, 774},0, {-3112, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-571, 640, 774},0, {-3112, 462},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{452, 640, 774},0, {974, 464},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{452, 768, 774},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{452, -127, 581},0, {974, 3528},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{452, 0, 581},0, {974, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-443, 0, 581},0, {-2602, 3016},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-443, -127, 581},0, {-2602, 3528},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-443, -127, -570},0, {-2602, 3528},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-443, 0, -570},0, {-2602, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{452, 0, -570},0, {974, 3016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{452, -127, -570},0, {974, 3528},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-443, -127, -570},0, {-16, 464},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-443, -127, 575},0, {6052, 462},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-443, -127, 581},0, {6084, 462},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-443, 0, 581},0, {6084, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-443, 0, -570},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
};

// 0x0700CDB0 - 0x0700D028
static const Gfx wf_seg7_dl_0700CDB0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, grass_09000800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&wf_seg7_lights_0700BFE0.l, 1),
    gsSPLight(&wf_seg7_lights_0700BFE0.a, 2),
	gsSPVertex(ball_sm64_mesh_002_mesh_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 13, 11, 0),
	gsSPVertex(ball_sm64_mesh_002_mesh_vtx_0 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 12, 10, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(ball_sm64_mesh_002_mesh_vtx_0 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(ball_sm64_mesh_002_mesh_vtx_0 + 45, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ball_sm64_mesh_002_mesh_vtx_0 + 61, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ball_sm64_mesh_002_mesh_vtx_0 + 77, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 4, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ball_sm64_mesh_002_mesh_vtx_0 + 93, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 4, 7, 0),
    gsSPEndDisplayList(),
};

// 0x0700D028 - 0x0700D0A8
const Gfx wf_seg7_dl_0700D028[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(wf_seg7_dl_0700CD00),
    gsSPDisplayList(wf_seg7_dl_0700CDB0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
