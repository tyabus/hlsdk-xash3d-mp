#include "extdll.h"
#include "util.h"
#include "cbase.h"

class CStub: public CBaseEntity
{
	void Spawn( void );
};

LINK_ENTITY_TO_CLASS( monster_barney, CStub )
LINK_ENTITY_TO_CLASS( monster_barney_dead, CStub )
LINK_ENTITY_TO_CLASS( monster_generic, CStub )
LINK_ENTITY_TO_CLASS( monster_scientist, CStub )
LINK_ENTITY_TO_CLASS( monster_sitting_scientist, CStub )
LINK_ENTITY_TO_CLASS( monster_scientist_dead, CStub )
LINK_ENTITY_TO_CLASS( monster_human_assassin, CStub )
LINK_ENTITY_TO_CLASS( monster_zombie, CStub )
LINK_ENTITY_TO_CLASS( monster_barnacle, CStub )
LINK_ENTITY_TO_CLASS( monster_flyer, CStub )
LINK_ENTITY_TO_CLASS( monster_flyer_flock, CStub )
LINK_ENTITY_TO_CLASS( monster_bigmomma, CStub )
LINK_ENTITY_TO_CLASS( monster_babycrab, CStub )
LINK_ENTITY_TO_CLASS( monster_hgrunt_dead, CStub )
LINK_ENTITY_TO_CLASS( monster_grunt_repel, CStub )
LINK_ENTITY_TO_CLASS( monster_headcrab, CStub )
LINK_ENTITY_TO_CLASS( monster_nihilanth, CStub )
LINK_ENTITY_TO_CLASS( monster_gargantua, CStub )
LINK_ENTITY_TO_CLASS( monster_vortigaunt, CStub )
LINK_ENTITY_TO_CLASS( monster_leech, CStub )
LINK_ENTITY_TO_CLASS( monster_bloater, CStub )
LINK_ENTITY_TO_CLASS( monster_human_grunt, CStub )
LINK_ENTITY_TO_CLASS( monster_alien_grunt, CStub )
LINK_ENTITY_TO_CLASS( monster_alien_slave, CStub )
LINK_ENTITY_TO_CLASS( monster_player, CStub )
LINK_ENTITY_TO_CLASS( monster_bullchicken, CStub )
LINK_ENTITY_TO_CLASS( monster_alien_controller, CStub )
LINK_ENTITY_TO_CLASS( monster_gman, CStub )
LINK_ENTITY_TO_CLASS( monster_ichthyosaur, CStub )
LINK_ENTITY_TO_CLASS( monster_houndeye, CStub )
LINK_ENTITY_TO_CLASS( monster_tentacle, CStub )
LINK_ENTITY_TO_CLASS( monster_tentaclemaw, CStub )
LINK_ENTITY_TO_CLASS( monster_turret, CStub )
LINK_ENTITY_TO_CLASS( monster_sentry, CStub )
LINK_ENTITY_TO_CLASS( monster_miniturret, CStub )
LINK_ENTITY_TO_CLASS( monster_apache, CStub )
LINK_ENTITY_TO_CLASS( monster_osprey, CStub )
LINK_ENTITY_TO_CLASS( monster_rat, CStub )
LINK_ENTITY_TO_CLASS( monster_cockroach, CStub )
LINK_ENTITY_TO_CLASS( monster_cine_scientist, CStub )
LINK_ENTITY_TO_CLASS( monster_cine_panther, CStub )
LINK_ENTITY_TO_CLASS( monster_cine_barney, CStub )
LINK_ENTITY_TO_CLASS( monster_cine2_scientist, CStub )
LINK_ENTITY_TO_CLASS( monster_cine2_hvyweapons, CStub )
LINK_ENTITY_TO_CLASS( monster_cine2_slave, CStub )
LINK_ENTITY_TO_CLASS( monster_cine3_scientist, CStub )
LINK_ENTITY_TO_CLASS( monster_cine3_barney, CStub )
LINK_ENTITY_TO_CLASS( xen_tree, CStub )
LINK_ENTITY_TO_CLASS( info_bigmomma, CStub )
LINK_ENTITY_TO_CLASS( cine_blood, CStub )
LINK_ENTITY_TO_CLASS( weapon_egon, CStub )

void CStub::Spawn( void )
{
	REMOVE_ENTITY( ENT( pev ) );
	return;
}