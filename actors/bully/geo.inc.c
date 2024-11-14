/*-------------------------------------------------------------*/
/*	Hms data 			                                       */
/*-------------------------------------------------------------*/

#define	softspriteON	1

extern const Gfx RCP_otos_basedata0[];
extern const Gfx RCP_otos_basedata1[];
extern const Gfx RCP_otos_basedata4[];
extern const Gfx RCP_otos_basedata3[];
extern const Gfx gfx_otosu_body[];
extern const Gfx gfx_otosu_eye[];
extern const Gfx gfx_big_otosu_body[];

const GeoLayout bully_geo[] = {
 GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 70),
 GEO_OPEN_NODE(),

 GEO_SCALE(0x00, 24576),
    GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* chn1(12), */
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* jnt1_1(11), */
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,75,NULL),  /* chn2(10), */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* jnt2_1(6), */
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE,146,0,0,NULL),  /* jnt2_2(3), */
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_otos_basedata0),  /* sphere4(0), */
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,-75,NULL),  /* chn4(9), */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* jnt4_1(7), */
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE,146,0,0,NULL),  /* jnt4_2(4), */
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_otos_basedata1),  /* sphere3(1), */
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),

#if softspriteON
	      GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* body_sprite(35), */
		  GEO_OPEN_NODE(),
			GEO_BILLBOARD(),
	   		GEO_OPEN_NODE(),
			  	GEO_DISPLAY_LIST(LAYER_ALPHA,gfx_otosu_body),
	  		GEO_CLOSE_NODE(),
	  	  GEO_CLOSE_NODE(),
#else
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_otos_basedata4),  /* sphere1(8), */
#endif
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_otos_basedata3),  /* cone1(5), */
            GEO_ANIMATED_PART(LAYER_ALPHA,0,0,0,gfx_otosu_eye),  /* grid1(2), */
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
 GEO_CLOSE_NODE(),
 GEO_END(),
};

/*-------------------------------------------------------------*/
/*	Big Otos Hms data 			                                       */
/*-------------------------------------------------------------*/

const GeoLayout bully_boss_geo[] = {
 GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 210),
 GEO_OPEN_NODE(),

 GEO_SCALE(0x00, 49152),
    GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* chn1(12), */
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* jnt1_1(11), */
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,75,NULL),  /* chn2(10), */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* jnt2_1(6), */
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE,146,0,0,NULL),  /* jnt2_2(3), */
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_otos_basedata0),  /* sphere4(0), */
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,-75,NULL),  /* chn4(9), */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* jnt4_1(7), */
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE,146,0,0,NULL),  /* jnt4_2(4), */
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_otos_basedata1),  /* sphere3(1), */
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),

#if softspriteON
	      GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  /* body_sprite(35), */
		  GEO_OPEN_NODE(),
			GEO_BILLBOARD(),
	   		GEO_OPEN_NODE(),
			  	GEO_DISPLAY_LIST(LAYER_ALPHA,gfx_big_otosu_body),
	  		GEO_CLOSE_NODE(),
	  	  GEO_CLOSE_NODE(),
#else
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_otos_basedata4),  /* sphere1(8), */
#endif
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_otos_basedata3),  /* cone1(5), */
            GEO_ANIMATED_PART(LAYER_ALPHA,0,0,0,gfx_otosu_eye),  /* grid1(2), */
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
 GEO_CLOSE_NODE(),
 GEO_END(),
};
