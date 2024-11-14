/********************************************************************************
						Ultra 64 MARIO Brothers

					  stage37 hierarchy data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							  1996.1.8
 ********************************************************************************/

//#include "../../headers.h"

/********************************************************************************/
/*	test map data																*/
/********************************************************************************/


#include "../collision.inc.c"

/********************************************************************************/
/*	test shape data																*/
/********************************************************************************/


/*#if 0

#include "sanbo.sou"
#include "bat.sou"
#include "heyho.sou"
#include "nokonoko/nokonoko.sou"
#include "kuribo/kuribo.sou"
#include "wanwan.sou"
#include "hanachan.sou"
#include "jugem/jugem.shp"
#include "cloud.sou"
#include "indy.sou"
#include "togezo.sou"
#include "pipo.sou"

#endif*/


/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/
Hierarchy RCP_Stage37Scene1[] = {
	hmsScene(160, 120, 160, 120, 10)
	hmsBegin()
		hmsLayer(0)
		hmsBegin()
			hmsOrtho(100)
			hmsBegin()
				hmsClear(RGBA16(0, 12, 31, 1), NULL)
			hmsEnd()
		hmsEnd()

		hmsLayer(1)
		hmsBegin()
			hmsPerspective(45, SCREEN_NEAR, SCREEN_FAR, ZoomControl)
			hmsBegin()
				hmsCamera(CAM_FIELD,  0,2000,6000,  0,0,-6000, GameCamera)
				hmsBegin()
					hmsObject()
					hmsCProg(0, WeatherProc)
				hmsEnd()
			hmsEnd()
		hmsEnd()
	hmsEnd()
	hmsExit()
};


