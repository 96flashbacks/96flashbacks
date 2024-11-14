/*-------------------------------------------------------------*/
/*	Hms data 			                                       */
/*-------------------------------------------------------------*/

extern const Gfx RCP_wallman_body[];
extern const Gfx RCP_wallman_Rfoot[];
extern const Gfx RCP_wallman_Lfoot[];
extern const Gfx RCP_wallman_Rarm[];
extern const Gfx RCP_wallman_Rhand[];
extern const Gfx RCP_wallman_Larm[];
extern const Gfx RCP_wallman_Lhand[];

const GeoLayout whomp_geo[] = {
 GEO_CULLING_RADIUS(1000),
 GEO_OPEN_NODE(),
 GEO_SCALE(0x00, 16384),
    GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE,0,5,-181,NULL),  /* chn18(11), */
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_wallman_body),  /* wallman_body(10), */
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,-12,490,-5,NULL),  /* chn21(9), */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_wallman_Rfoot),  /* wallman_Rfoot(0), */
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,-18,-479,-5,NULL),  /* chn19(8), */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_wallman_Lfoot),  /* wallman_Lfoot(1), */
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,1075,570,0,NULL),  /* chn28(7), */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_wallman_Rarm),  /* wallman_Rarm(3), */

               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_ALPHA,400,0,0,NULL),  /* wallman_Rhand(2), */
				  GEO_OPEN_NODE(),
					GEO_BILLBOARD(),
					GEO_OPEN_NODE(),
	                  GEO_DISPLAY_LIST(LAYER_ALPHA,RCP_wallman_Rhand),
				  	GEO_CLOSE_NODE(),
				  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,1068,-574,0,NULL),  /* chn26(6), */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_wallman_Larm),  /* wallman_Larm(5), */
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_ALPHA,400,0,0,NULL),  /* wallman_Lhand(4), */
				  GEO_OPEN_NODE(),
				  	GEO_BILLBOARD(),
					GEO_OPEN_NODE(),
		              GEO_DISPLAY_LIST(LAYER_ALPHA,RCP_wallman_Lhand),  /* wallman_Lhand(4), */
					GEO_CLOSE_NODE(),
				  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
 GEO_CLOSE_NODE(),
 GEO_END(),
};
