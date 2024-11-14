Lights1 joe_f3d_material_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

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

Gfx joe_sm64_mesh_001_mesh_layer_1_tri_0[] = {
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


Gfx mat_joe_f3d_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(joe_f3d_material_001_lights),
	gsSPEndDisplayList(),
};

Gfx joe_sm64_mesh_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_joe_f3d_material_001),
	gsSPDisplayList(joe_sm64_mesh_001_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx joe_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

