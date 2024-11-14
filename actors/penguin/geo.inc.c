/**************************************************************/
/*	shape data ping_base (skeleton & animation) */
/**************************************************************/

extern Gfx RCP_ping_base0[];
extern Gfx RCP_ping_base1[];
extern Gfx RCP_ping_base2[];
extern Gfx RCP_ping_base3[];
extern Gfx RCP_ping_base4[];
extern Gfx RCP_ping_base5[];

extern Gfx RCP_ping_head_eye1[];
extern Gfx RCP_ping_head_eye2[];
extern Gfx RCP_ping_head_eye3[];
extern Gfx RCP_ping_head_eye4[];
extern Gfx RCP_ping_head_eye5[];


/*-------------------------------------------------------------*/
/*	Hms data 			                                       */
/*-------------------------------------------------------------*/
const GeoLayout penguin_geo[] = {
 GEO_SHADOW(1, 155, 50),
 GEO_OPEN_NODE(),
 GEO_SCALE(0x00, 16384),
    GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,40,RCP_ping_base5),  /* ping_body1_2(10) */
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,-51,84,-13,NULL),  /* chn21_2(9) */
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_base0),  /* ping_Rhand1_2(0) */
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,51,84,-13,NULL),  /* chn19_2(8) */
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_base1),  /* ping_Lhand1_2(1) */
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,-38,-54,-13,NULL),  /* chn24_2(7) */
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_base2),  /* ping_Rfoot1_2(2) */
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,38,-54,-13,NULL),  /* chn22_2(6) */
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_base3),  /* ping_Lfoot1_2(3) */
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,0,111,-19,NULL),  /* chn18_2(5) */
         GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(5, geo_switch_tuxie_mother_eyes),
			GEO_OPEN_NODE(),
	            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_head_eye1),  /* ping_head1_2(4) */
	            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_head_eye2),  /* ping_head1_2(4) */
	            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_head_eye3),  /* ping_head1_2(4) */
	            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_head_eye4),  /* ping_head1_2(4) */
	            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_ping_head_eye5),  /* ping_head1_2(4) */
			GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
 GEO_CLOSE_NODE(),
 GEO_END(),
};
