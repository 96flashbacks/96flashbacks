/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/

//extern ulong DrawBackGround(int code, MapNode *node, void *data);
//extern ulong WeatherProc(int code, MapNode *node, void *data);
//extern ulong GameCamera(int code, MapNode *node, void *data);
			 
Hierarchy RCP_Stage32Scene1[] = {
	hmsScene(160, 120, 160, 120, 10)
	hmsBegin()
		hmsLayer(0)
		hmsBegin()
			hmsOrtho(100)
			hmsBegin()
				hmsClear(RGBA16(0,0,0,1), NULL)
			hmsEnd()
		hmsEnd()

		hmsLayer(1)			/* Zbuffer ON	 */
		hmsBegin()
			hmsPerspective(45, SCREEN_NEAR, 32000, ZoomControl)
			hmsBegin()
				hmsCamera(CAM_FIELD,  0,2000,6000,  0,0,-4000, GameCamera)
				hmsBegin()
					hmsGfx(RM_SURF,  RCP_testmap1)
					hmsObject()
					hmsCProg(0, WeatherProc)
				hmsEnd()
			hmsEnd()
		hmsEnd()

	hmsEnd()
	hmsExit()
};

//#endif

/*==============================================================================
  		END END END
===============================================================================*/

