#include "BuffIds.h"

std::list<BoonDef> tracked_buffs = std::list<BoonDef>({
	BoonDef(BUFF_MIGHT,"Might",false,true),
	BoonDef(BUFF_FURY,"Fury",true,true),
	BoonDef(BUFF_REGEN,"Regen",true,false),
	BoonDef(BUFF_PROT,"Prot",true,true),
	BoonDef(BUFF_QUICK,"Quick",true,true),
	BoonDef(BUFF_ALAC,"Alac",true,true),
	BoonDef(BUFF_EA,"EA",true,false),
	BoonDef(BUFF_PINPOINT,"PP",true,false),
	BoonDef(BUFF_ASSASSINS_PRESENCE,"AP",true,false),
	BoonDef(BUFF_SPOTTER,"SPOT",true,false),
	BoonDef(BUFF_BANNER_STR,"STR",true,false),
	BoonDef(BUFF_BANNER_DIS,"DIS",true,false),
	BoonDef(BUFF_BANNER_TAC,"TAC",true,false),
	BoonDef(BUFF_BANNER_DEF,"DEF",true,false),
	BoonDef(BUFF_GLYPH_EMPOW,"EMP",true,false),
	BoonDef(BUFF_SPIRIT_FROST,"FROST",true,false),
	BoonDef(BUFF_SPIRIT_SUN,"SUN",true,false),
	BoonDef(BUFF_SPIRIT_STONE,"STON",true,false),
	BoonDef(BUFF_SPIRIT_STORM,"STOR",true,false)
	});

bool isTrackedBoon(uint16_t new_id)
{
	for (auto current_buff : tracked_buffs)
	{
		if (current_buff.id == new_id && current_buff.is_relevant) return true;
	}
	return false;
}

BoonDef::BoonDef(uint16_t new_id, std::string new_name, bool new_is_duration_stacking, bool new_is_relevant)
{
	id = new_id;
	name = new_name;
	is_duration_stacking = new_is_duration_stacking;
	is_relevant = new_is_relevant;
}