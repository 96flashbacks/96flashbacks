extern const Gfx gfx_burn_smoke_v1[];
extern const Gfx gfx_burn_smoke_v2[];
extern const Gfx gfx_burn_smoke_v3[];
extern const Gfx gfx_burn_smoke_v4[];
extern const Gfx gfx_burn_smoke_v5[];
extern const Gfx gfx_burn_smoke_v6[];
extern const Gfx gfx_burn_smoke_v7[];
extern const Gfx gfx_burn_smoke_v8[];

Hierarchy burn_smoke_geo[] = {
   hmsGroup()
   hmsBegin()
		hmsSelect(8, geo_switch_anim_state /* ControlShapeAnime */)
		hmsBegin()
			hmsGfx(RM_XSURF, gfx_burn_smoke_v1)
			hmsGfx(RM_XSURF, gfx_burn_smoke_v2)
			hmsGfx(RM_XSURF, gfx_burn_smoke_v3)
			hmsGfx(RM_XSURF, gfx_burn_smoke_v4)
			hmsGfx(RM_XSURF, gfx_burn_smoke_v5)
			hmsGfx(RM_XSURF, gfx_burn_smoke_v6)
			hmsGfx(RM_XSURF, gfx_burn_smoke_v7)
			hmsGfx(RM_XSURF, gfx_burn_smoke_v8)
		hmsEnd()
	hmsEnd()
	hmsExit()
};
