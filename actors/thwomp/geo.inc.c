/********************************************************************************
		RCP_HmsDosun
														[ Oct 23, 1995 ]
*********************************************************************************/

extern Gfx gfx_dosun[];


/********************************************************************************/
/*	Hierarchy map data of Dosun.												*/
/********************************************************************************/
const GeoLayout thwomp_geo[] = {
	GEO_SHADOW(SHADOW_SQUARE_SCALABLE, 0xB4, 300),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_dosun),
	GEO_CLOSE_NODE(),
  	GEO_END(),
};
