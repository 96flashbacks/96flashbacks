#include "src/game/envfx_snow.h"

const GeoLayout ttm_betah_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ttm_betah_sm64_mesh_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ttm_betah_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
