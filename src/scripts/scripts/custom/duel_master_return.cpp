#include "precompiled.h"

// ----------------------------### START OF DUEL MASTER ###----------------------------
bool GossipHello_duel_master_return(Player *player, Creature *creature)
{
    // Main Menu
    if (!player->IsInCombat())      // Check Combat State
    {
        player->ADD_GOSSIP_ITEM( 5, "Return me to the Main City."            ,GOSSIP_SENDER_MAIN, 4);
        player->ADD_GOSSIP_ITEM( 5, "[Player Tools]"                ,GOSSIP_SENDER_MAIN, 2);

        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
        return true;
    }
    player->GetSession()->SendNotification("You are in combat.");
    return false;
}
void SendDefaultMenu_duel_master_return(Player *player, Creature *creature, uint32 action )
{
switch(action)
{
// ---### Main Menu Return ###---

case 0: // Main Menu
    player->ADD_GOSSIP_ITEM( 5, "Return me to the Main City."            ,GOSSIP_SENDER_MAIN, 4);
    player->ADD_GOSSIP_ITEM( 5, "[Player Tools]"                ,GOSSIP_SENDER_MAIN, 2);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

case 1: // Teleport arena
	player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -3797.367432f, 1094.845947f, 153.767548f, 6.168524f);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 3: // Teleport alliance
	player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -10960.900391f, -3468.340088f, 65.467857f, 2.920500f);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

	case 304: // Learn Spells
	player->CLOSE_GOSSIP_MENU();
	player->resetTalents();
   /* player->CLOSE_GOSSIP_MENU();
    if (player->getClass() == CLASS_PALADIN)
    {
        player->learnSpell(7328, false);
        player->learnSpell(13819, false);
        player->learnSpell(23214, false);
        player->learnSpell(5502, false);
    }
    if (player->getClass() == CLASS_WARRIOR)
    {
        player->learnSpell(2458, false);
        player->learnSpell(71, false);
        player->learnSpell(20252, false);
        player->learnSpell(7386, false);
        player->learnSpell(674, false);
    }
    if (player->getClass() == CLASS_SHAMAN)
    {
        player->learnSpell(2075, false);
        player->learnSpell(8073, false);
        player->learnSpell(5396, false);
        player->learnSpell(674, false);
    }
    if (player->getClass() == CLASS_WARLOCK)
    {
        player->learnSpell(688, false);
        player->learnSpell(697, false);
        player->learnSpell(712, false);
        player->learnSpell(691, false);
        player->learnSpell(1122, false);
        player->learnSpell(5784, false);
        player->learnSpell(23161, false);
    }
    if (player->getClass() == CLASS_ROGUE)
    {
        player->learnSpell(2842, false);
        player->learnSpell(674, false);
    }
    if (player->getClass() == CLASS_DRUID)
    {
        player->learnSpell(1066, false);
        player->learnSpell(5487, false);
        player->learnSpell(9634, false);
        player->learnSpell(6807, false);
    }
    if (player->getClass() == CLASS_HUNTER)
    {
        player->learnSpell(883, false);
        player->learnSpell(2641, false);
        player->learnSpell(6991, false);
        player->learnSpell(982, false);
        player->learnSpell(1515, false);
        player->learnSpell(674, false);
    } */
    player->GetSession()->SendNotification("Your Talents have been reset..");
    break;

case 4: // Teleport alliance
	if ( player->GetTeam() == HORDE)
	{
	player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -10929.799805f, -2717.459961f, 7.776220f, 4.463010f);
	}
	else
	{
	player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -10960.900391f, -3468.340088f, 65.467857f, 2.920500f);
	}
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 2: // Player Tools
    player->ADD_GOSSIP_ITEM( 5, "[Max Out Weapon Skills]"        ,GOSSIP_SENDER_MAIN, 302);
	player->ADD_GOSSIP_ITEM( 5, "[Reset Talents]"				,GOSSIP_SENDER_MAIN, 304);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
	}
};
bool GossipSelect_duel_master_return(Player *player, Creature *creature, uint32 sender, uint32 action)
{
    // Main Menu
    if (sender == GOSSIP_SENDER_MAIN)
    SendDefaultMenu_duel_master_return( player, creature, action );

return true;
}

void AddSC_duel_master_return()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name = "duel_master_return";
    newscript->pGossipHello = &GossipHello_duel_master_return;
    newscript->pGossipSelect = &GossipSelect_duel_master_return;
    newscript->RegisterSelf();
}
