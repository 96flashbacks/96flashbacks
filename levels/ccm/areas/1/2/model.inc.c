Lights1 ccm_lights_5 = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Vtx ccm_2_dl_mesh_vtx_0[6] = {
	{{ {768, -1535, 5118}, 0, {820, 450}, {44, 119, 248, 255} }},
	{{ {805, -1535, 5320}, 0, {0, 990}, {44, 119, 248, 255} }},
	{{ {2566, -2303, 3621}, 0, {0, -11806}, {44, 119, 248, 255} }},
	{{ {768, -1535, 5118}, 0, {820, 450}, {29, 121, 229, 255} }},
	{{ {2566, -2303, 3621}, 0, {0, -11806}, {29, 121, 229, 255} }},
	{{ {2391, -2303, 3433}, 0, {1246, -11830}, {29, 121, 229, 255} }},
};

Gfx ccm_2_dl_mesh_tri_0[] = {
	gsSPVertex(ccm_2_dl_mesh_vtx_0 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSPEndDisplayList(),
};

Gfx mat_ccm_WoodMaterial[] = {
	gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPSetLights1(ccm_lights_5),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, snow_09008000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_ccm_WoodMaterial[] = {
	gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx ccm_2_dl_mesh[] = {
	gsSPDisplayList(mat_ccm_WoodMaterial),
	gsSPDisplayList(ccm_2_dl_mesh_tri_0),
	gsSPDisplayList(mat_revert_ccm_WoodMaterial),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
