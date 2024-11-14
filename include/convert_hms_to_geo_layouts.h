
#if !defined(HMS_H) /* guard this to be safe */
#define HMS_H

/* render modes */
#define RM_BACK         LAYER_FORCE
#define RM_SURF         LAYER_OPAQUE
#define RM_DECAL        LAYER_OPAQUE_DECAL
#define RM_INTER        LAYER_OPAQUE_INTER
#define RM_SPRITE       LAYER_ALPHA
#define RM_XSURF        LAYER_TRANSPARENT
#define RM_XDECAL       LAYER_TRANSPARENT_DECAL
#define RM_XINTER       LAYER_TRANSPARENT_INTER
#define RM_SOFT_SPRITE  RM_SPRITE

/* map macros */
#define hmsBegin()                          GEO_OPEN_NODE(),
#define hmsEnd()                            GEO_CLOSE_NODE(),
#define hmsSelect(code, proc)               GEO_SWITCH_CASE(code, proc),
#define hmsGfx(x, y)                        GEO_DISPLAY_LIST(x, y),
#define hmsReturn()                         GEO_RETURN(),
#define hmsJoint(mode, gfx, px, py, pz)     GEO_ANIMATED_PART(mode, px, py, pz, gfx),
#define hmsShadow(size, level, flag)        GEO_SHADOW(flag, level, size),
#define hmsScale(f)                         GEO_SCALE(0, ((unsigned long)(f*65536.0f))),
#define hmsCall(r)                          GEO_BRANCH(1, r),
#define hmsExit()                           GEO_END(),
#define hmsLOD(near, far)                   GEO_RENDER_RANGE(near, far),
#define hmsCProg(code, proc)                GEO_ASM(code, proc),
#define hmsRotate(ax, ay, az)               GEO_ROTATION_NODE(0, ax, ay, az),
#define hmsGroup()                          GEO_NODE_START(),
#define hmsSucker(x, y, z, w, dl)           GEO_HELD_OBJECT(x, y, z, w, dl),
#define hmsHeader(x)                        GEO_CULLING_RADIUS(x),
#define hmsBboard(px, py, pz)               GEO_BILLBOARD_WITH_PARAMS(0, px, py, pz),
#define hmsCamera(a, b, c, d, e, f, g, h)   GEO_CAMERA(a, b, c, d, e, f, g, h),
#define hmsPerspective(a, b, c, d)          GEO_CAMERA_FRUSTUM_WITH_FUNC(a, b, c, d),
#define hmsScene(a, b, c, d, e)             GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
#define hmsLayer(a)                         GEO_ZBUFFER(a),
#define hmsOrtho(a)                         GEO_NODE_ORTHO(a),
#define hmsClear(a,b)                       GEO_BACKGROUND_COLOR(a),
#define	RGBA16(r,g,b,a)                     (((r) << 11) | ((g) << 6) | ((b) << 1) | (a))
#define hmsObject()                         GEO_RENDER_OBJ(),

/* hierarchy map type */
#define Hierarchy   const GeoLayout

/* miscellaneous level junk */
#define CtrlMirrorMario geo_render_mirror_mario
#define ZoomControl     geo_camera_fov
#define GameCamera      geo_camera_main
#define WeatherProc     geo_envfx_main
#define SCREEN_NEAR     100
#define SCREEN_FAR      12800
#define CAM_FIELD       1
#define CAM_DUNGEON     4
#define CAM_DUNGEON_O   16

#endif /* HMS_H */
