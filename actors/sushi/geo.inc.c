// 0x0C000068
const GeoLayout sushi_geo[] = {
 hmsHeader(800)
 hmsBegin()
 hmsScale(1.0)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,21,-8)  /* chn1(6) */
      hmsBegin()
         hmsJoint(RM_SURF,RCP_s_bodyA,0,0,0)  /* s_bodyA1(5) */
         hmsBegin()
            hmsJoint(RM_SURF, RCP_s_bodyB, 50,0,0)  /* s_bodyB1(4) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_s_bodyC,103,0,0)  /* s_bodyC1(1) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_s_bodyD,121,0,0)  /* s_bodyD1(0) */
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-55,-1,-1)  /* chn2(3) */
            hmsBegin()
               hmsJoint(RM_SURF  ,RCP_s_head_surf  ,0,0,0)  /* s_head1(2) */
			   hmsBegin()
//				 hmsCProg(0, KopaProc1)				   /* = shark hitcheck program */
                 hmsGfx(RM_SPRITE,RCP_s_head_sprite)  /* s_head1(2) */
			   hmsEnd()
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
