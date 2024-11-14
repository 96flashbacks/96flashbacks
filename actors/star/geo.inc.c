/********************************************************************************
	RCP_HmsItemStar [ New New Version ]
														[ Nob 19, 1995 ]
 ********************************************************************************/

extern Gfx  RCP_star_dust1[];
extern Gfx  RCP_star_dust2[];
extern Gfx  RCP_star_dust3[];
extern Gfx  RCP_star_dust4[];
extern Gfx  RCP_star_dust5[];
extern Gfx  RCP_star_dust6[];
extern Gfx  RCP_star_dust7[];
extern Gfx  RCP_star_dust8[];

/********************************************************************************/
/*	Hierarchy data of star coin.												*/
/********************************************************************************/
const GeoLayout star_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x9B, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, star_seg3_dl_0302B870),
         GEO_DISPLAY_LIST(LAYER_ALPHA, star_seg3_dl_0302BA18),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
/********************************************************************************/
/*	Hierarchy data of star dust.												*/
/********************************************************************************/
const GeoLayout stardust_geo[] = {
	hmsGroup()
	hmsBegin()
		hmsSelect(8, geo_switch_anim_state)
		hmsBegin()
			hmsGfx(RM_SPRITE, RCP_star_dust1)
			hmsGfx(RM_SPRITE, RCP_star_dust2)
			hmsGfx(RM_SPRITE, RCP_star_dust3)
			hmsGfx(RM_SPRITE, RCP_star_dust4)
			hmsGfx(RM_SPRITE, RCP_star_dust5)
			hmsGfx(RM_SPRITE, RCP_star_dust6)
			hmsGfx(RM_SPRITE, RCP_star_dust7)
			hmsGfx(RM_SPRITE, RCP_star_dust8)
		hmsEnd()
	hmsEnd()
	hmsExit()
};
