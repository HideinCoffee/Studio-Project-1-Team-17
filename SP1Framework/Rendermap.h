#pragma once
#include "misc.h"
#include "map.h" 
#include "Entity.h"

struct SGameChar
{
	COORD m_cLocation;
	COORD m_cLocation1;
	COORD offset;

	bool  m_bActive;
	bool abletomove;
};

MAPTILES getmaptile(Map& map, int x, int y, SGameChar &g_sChar);
void rendermap(Console &g_Console,Map &map,SGameChar &g_sChar, Entity* entityarray[]);
