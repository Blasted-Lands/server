#include "precompiled.h"

// ----------------------------### START OF exchanger ###----------------------------

bool GossipHello_exchanger(Player *player, Creature *creature)
{
    // Main Menu
    if (!player->IsInCombat())
    {
        player->ADD_GOSSIP_ITEM( 10, "Profession Tokens"            ,GOSSIP_SENDER_MAIN, 500);
        player->ADD_GOSSIP_ITEM( 10, "Consumeable Tokens"                ,GOSSIP_SENDER_MAIN, 501);
		player->ADD_GOSSIP_ITEM( 10, "Weapon Tokens"                ,GOSSIP_SENDER_MAIN, 502);
		player->ADD_GOSSIP_ITEM( 10, "Armor Tokens"                ,GOSSIP_SENDER_MAIN, 503);
		player->ADD_GOSSIP_ITEM( 10, "FLUSH HONOR"					,GOSSIP_SENDER_MAIN, 990);

        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
        return true;
    }
    player->GetSession()->SendNotification("You are in combat.");
    return false;
}

void SendDefaultMenu_exchanger(Player *player, Creature *creature, uint32 action )
{
switch(action)
{
// ---### Main Menu Return ###---

case 0: // Main Menu
     player->ADD_GOSSIP_ITEM( 10, "Profession Tokens"            ,GOSSIP_SENDER_MAIN, 500);
     player->ADD_GOSSIP_ITEM( 10, "Consumeable Tokens"                ,GOSSIP_SENDER_MAIN, 501);
	 player->ADD_GOSSIP_ITEM( 10, "Weapon Tokens"                ,GOSSIP_SENDER_MAIN, 502);
	 player->ADD_GOSSIP_ITEM( 10, "Armor Tokens"                ,GOSSIP_SENDER_MAIN, 503);
	 player->ADD_GOSSIP_ITEM( 10, "FLUSH HONOR"					,GOSSIP_SENDER_MAIN, 990);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

case 990:
	player->ADD_GOSSIP_ITEM( 10, "Init"                    ,GOSSIP_SENDER_MAIN, 991);
    /*player->ADD_GOSSIP_ITEM( 10, "Do"                ,GOSSIP_SENDER_MAIN, 992);*/

    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

case 991:

	player->CLOSE_GOSSIP_MENU();
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
	break;
/*case 992:
	player->CLOSE_GOSSIP_MENU();

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
	break;*/

case 500: // Profession Token Rewards
    player->ADD_GOSSIP_ITEM( 10, "Engineering"                    ,GOSSIP_SENDER_MAIN, 5);
    player->ADD_GOSSIP_ITEM( 10, "Enchanting"                ,GOSSIP_SENDER_MAIN, 6);
    player->ADD_GOSSIP_ITEM( 10, "Leatherworking"                ,GOSSIP_SENDER_MAIN, 7);
	player->ADD_GOSSIP_ITEM( 10, "Smithing"					,GOSSIP_SENDER_MAIN, 8); 

    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

// ---- *** ENGINEER REWARDS *** ---- \\

case 5: // Engineering Rewards
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Souldarite]"                        ,GOSSIP_SENDER_MAIN, 100);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [2] [Powerful Mojo] "                        ,GOSSIP_SENDER_MAIN, 101);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Fiery Core]"                    ,GOSSIP_SENDER_MAIN, 102);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Lava Core]"            ,GOSSIP_SENDER_MAIN, 103);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Fire]"            ,GOSSIP_SENDER_MAIN, 516);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Earth]"            ,GOSSIP_SENDER_MAIN, 517);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Water]"            ,GOSSIP_SENDER_MAIN, 518);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Elemental Fire]"            ,GOSSIP_SENDER_MAIN, 504);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Elemental Earth]"            ,GOSSIP_SENDER_MAIN, 505);
    
	player->ADD_GOSSIP_ITEM( 7, "[Next Page (2)]"				,GOSSIP_SENDER_MAIN, 519);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);
    
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

case 519: // Engineering Rewards
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Elemental Air]"            ,GOSSIP_SENDER_MAIN, 506);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Living Essence]"            ,GOSSIP_SENDER_MAIN, 507);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Undeath]"            ,GOSSIP_SENDER_MAIN, 508);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Heart of Fire]"            ,GOSSIP_SENDER_MAIN, 509);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Globe of Water]"            ,GOSSIP_SENDER_MAIN, 510);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Core of Earth]"            ,GOSSIP_SENDER_MAIN, 511);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Ichor of Undeath]"            ,GOSSIP_SENDER_MAIN, 512);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Flask of Mojo]"            ,GOSSIP_SENDER_MAIN, 513);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Blue Pearl]"            ,GOSSIP_SENDER_MAIN, 514);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Blue Sapphire]"            ,GOSSIP_SENDER_MAIN, 515);
    
	player->ADD_GOSSIP_ITEM( 7, "[Return to Page (1)]"				,GOSSIP_SENDER_MAIN, 5);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);
    
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

case 515: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12361, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Blue Sapphire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 514: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(4611, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Blue Pearl] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 513: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(8151, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Flask of Mojo] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 512: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7972, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Ichor of Undeath] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 511: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7075, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Core of Earth] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 510: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7079, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Globe of Water] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 509: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7077, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Heart of Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 508: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12808, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Undeath] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 507: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12803, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Living Essence] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;

case 506: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7069, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Elemental Air] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 505: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7067, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Elemental Earth] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 504: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7068, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Elemental Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 518: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7080, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Water] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 517: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7076, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Earth] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 516: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7078, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 100: // Reward 1 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(19774, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Souldarite] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 101: // Reward 2 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12804, 2);
	player->GetSession()->SendAreaTriggerMessage("[2] [Powerful Mojo] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 102: // Reward 3 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(17010, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Fiery Core] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 103: // Reward 4 engineer
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(17011, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Lava Core] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;

// ---- *** ENCHANTING REWARDS *** ---- \\

case 6: // Enchanting rewards
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Water] "                ,GOSSIP_SENDER_MAIN, 104);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Fire] "                        ,GOSSIP_SENDER_MAIN, 105);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Air] "                        ,GOSSIP_SENDER_MAIN, 106);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Earth] "        ,GOSSIP_SENDER_MAIN, 107);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Ichor of Undeath] "        ,GOSSIP_SENDER_MAIN, 600);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Essence of Undeath] "        ,GOSSIP_SENDER_MAIN, 601);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Large Fang] "        ,GOSSIP_SENDER_MAIN, 602);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Righteous Orb] "        ,GOSSIP_SENDER_MAIN, 603);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Guardian Stone] "        ,GOSSIP_SENDER_MAIN, 604);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Black Diamond] "        ,GOSSIP_SENDER_MAIN, 605);

    player->ADD_GOSSIP_ITEM( 7, "[Next Page (2)]"				,GOSSIP_SENDER_MAIN, 615);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);
    
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

case 615: // Enchanting rewards
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Larval Acid] "        ,GOSSIP_SENDER_MAIN, 606);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Golden Pearl] "        ,GOSSIP_SENDER_MAIN, 607);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Heart of Fire] "        ,GOSSIP_SENDER_MAIN, 608);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Core of Earth] "        ,GOSSIP_SENDER_MAIN, 609);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Globe of Water] "        ,GOSSIP_SENDER_MAIN, 610);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Breath of Wind] "        ,GOSSIP_SENDER_MAIN, 612);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Iridescent Pearl] "        ,GOSSIP_SENDER_MAIN, 613);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Black Pearl] "        ,GOSSIP_SENDER_MAIN, 614);

    player->ADD_GOSSIP_ITEM( 7, "[Return to Page (1)]"				,GOSSIP_SENDER_MAIN, 6);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);
    
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 614: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7971, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Black pearl] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 613: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(5500, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Iridescent pearl] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 612: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(5500, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Iridescent Pearl] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 611: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7081, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Breath of Wind] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 610: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7079, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Globe of Water] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 609: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7075, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Core of Earth] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 608: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7077, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Heart of Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 607: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(13926, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Golden Pearl] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 606: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(18512, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Larval Acid] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 605: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(18335, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Black Diamond] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 604: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12809, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Guardian Stone] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 603: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12811, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Righteous Orb] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 602: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(5637, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Large Fang] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 601: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12808, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Undeath] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 600: // Reward enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7972, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Ichor of Undeath] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 104: // Reward 1 enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7080, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Water] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 105: // Reward 2 enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7078, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 106: // Reward 3 enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7082, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Air] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 107: // Reward 4 enchanting
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7076, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Earth] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;

// ---- *** LEATHERWORKING REWARDS *** ---- \\

case 7: // Leatherworking rewards
    player->ADD_GOSSIP_ITEM( 1, "*[2] Token(s) for [1][Brilliant Chromatic Scale] "                    ,GOSSIP_SENDER_MAIN, 109);
    player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Black Dragonscale] "                ,GOSSIP_SENDER_MAIN, 110);
    player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Red Dragonscale]"                    ,GOSSIP_SENDER_MAIN, 111);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Larval Acid] "                    ,GOSSIP_SENDER_MAIN, 112);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Ogre Tannin] "                    ,GOSSIP_SENDER_MAIN, 913);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Living Essence] "                    ,GOSSIP_SENDER_MAIN, 914);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Essence of Water] "                    ,GOSSIP_SENDER_MAIN, 915);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Skin of Shadow] "                    ,GOSSIP_SENDER_MAIN, 916);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Essence of Air] "                    ,GOSSIP_SENDER_MAIN, 917);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Guardian Stone] "                    ,GOSSIP_SENDER_MAIN, 918);

    player->ADD_GOSSIP_ITEM( 7, "[Next Page (2)]"                        ,GOSSIP_SENDER_MAIN, 935);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 935: // Leatherworking rewards
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Fiery Core] "                    ,GOSSIP_SENDER_MAIN, 919);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Ironweb Spider Silk] "                    ,GOSSIP_SENDER_MAIN, 920);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Core Leather] "                    ,GOSSIP_SENDER_MAIN, 921);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Essence of Earth] "                    ,GOSSIP_SENDER_MAIN, 922);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Lava Core] "                    ,GOSSIP_SENDER_MAIN, 923);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Primal Tiger Leather] "                    ,GOSSIP_SENDER_MAIN, 924);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Primal Bat Leather] "                    ,GOSSIP_SENDER_MAIN, 925);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Powerful Mojo] "                    ,GOSSIP_SENDER_MAIN, 926);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Black Diamond] "                    ,GOSSIP_SENDER_MAIN, 927);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Essence of Fire] "                    ,GOSSIP_SENDER_MAIN, 928);

	player->ADD_GOSSIP_ITEM( 7, "[Return to Page (1)]"                        ,GOSSIP_SENDER_MAIN, 7);
    player->ADD_GOSSIP_ITEM( 7, "[Next Page (3)]"                        ,GOSSIP_SENDER_MAIN, 936);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 0);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 936: // Leatherworking rewards
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Devilsaur Leather] "                    ,GOSSIP_SENDER_MAIN, 929);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Iron Feather] "                    ,GOSSIP_SENDER_MAIN, 930);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Heart of Fire] "                    ,GOSSIP_SENDER_MAIN, 931);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Core of Earth] "                    ,GOSSIP_SENDER_MAIN, 932);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Globe of Water] "                    ,GOSSIP_SENDER_MAIN, 933);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Dreamscale] "                    ,GOSSIP_SENDER_MAIN, 934);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Silithid Chitin] "                    ,GOSSIP_SENDER_MAIN, 995);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Light Silithid Carapace] "                    ,GOSSIP_SENDER_MAIN, 996);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Blue Dragonscale] "                    ,GOSSIP_SENDER_MAIN, 937);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Green DragonScale] "                    ,GOSSIP_SENDER_MAIN, 938);
	player->ADD_GOSSIP_ITEM( 1, "*[1] Token(s) for [1][Worn Dragonscale] "                    ,GOSSIP_SENDER_MAIN, 939);

	player->ADD_GOSSIP_ITEM( 7, "[Return to Page (2)]"                        ,GOSSIP_SENDER_MAIN, 935);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 939: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(8165, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Worn Dragonscale] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 938: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(15412, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Green Dragonscale] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 937: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(15415, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Blue Dragonscale] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 996: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(20500, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Light Silithid Carapace] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 995: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(20498, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Silithid Chitin] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 934: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(20381, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Dreamscale] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 933: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7079, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Globe of Water] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 932: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7075, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Core of Earth] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 931: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7077, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Heart of Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 930: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(15420, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Ironfeather] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 929: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(15417, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Devilsaur Leather] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 928: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7078, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 927: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(11754, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Black Diamond] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 926: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12804, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Powerful Mojo] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 925: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(19767, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Primal Bat Leather] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 924: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(19768, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Primal Tiger Leather] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 923: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(17011, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Lava Core] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 922: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7076, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Earth] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 921: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(17012, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Core Leather] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 920: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(14227, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Ironweb Spider Silk] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 919: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(17010, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Fiery Core] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 918: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12809, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Guardian Stone] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 917: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7082, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Air] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 916: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12753, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Skin of Shadow] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 915: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7080, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Water] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 914: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12803, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Living Essence] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 913: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(18240, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Ogre Tannin] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 109: // Reward 1 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 2, false))
	{
	player->DestroyItemCount(901001, 2, false);
	player->StoreNewItemInInventorySlot(12607, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Brilliant Chromatic Scale] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 110: // Reward 2 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(15416, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Black Dragonscale] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 111: // Reward 3 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(15414, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Red Dragonscale] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 112: // Reward 4 Leatherworking
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(18512, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Larval Acid] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;

// ---- *** SMITHING REWARDS *** ---- \\

case 8: // Smithing rewards
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Fiery Core]"                ,GOSSIP_SENDER_MAIN, 113);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Blood of the Mountain] "                ,GOSSIP_SENDER_MAIN, 114);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Lava Core] "                    ,GOSSIP_SENDER_MAIN, 115);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Elemental Earth] "                    ,GOSSIP_SENDER_MAIN, 116);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Elemental Fire] "                    ,GOSSIP_SENDER_MAIN, 817);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Essence of Undeath] "                    ,GOSSIP_SENDER_MAIN, 818);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Blue Sapphire] "                    ,GOSSIP_SENDER_MAIN, 819);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Star Ruby] "                    ,GOSSIP_SENDER_MAIN, 820);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Dark Rune] "                    ,GOSSIP_SENDER_MAIN, 821);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Devilsaur Leather] "                    ,GOSSIP_SENDER_MAIN, 822);

	player->ADD_GOSSIP_ITEM( 7, "Next Page (2)"					,GOSSIP_SENDER_MAIN, 838);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 838: // Smithing rewards
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Skin of Shadow] "                    ,GOSSIP_SENDER_MAIN, 823);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Heart of Fire] "                    ,GOSSIP_SENDER_MAIN, 824);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Powerful Mojo] "                    ,GOSSIP_SENDER_MAIN, 825);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Guardian Stone] "                    ,GOSSIP_SENDER_MAIN, 826);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Essence of Fire] "                    ,GOSSIP_SENDER_MAIN, 827);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1][Sulfuron Ingot] "                    ,GOSSIP_SENDER_MAIN, 828);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Righteous Orb] "                    ,GOSSIP_SENDER_MAIN, 829);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Demonic Rune] "                    ,GOSSIP_SENDER_MAIN, 830);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Large Obsidian Shard] "                    ,GOSSIP_SENDER_MAIN, 831);
    player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Small Obsidian Shard] "                    ,GOSSIP_SENDER_MAIN, 832);

	player->ADD_GOSSIP_ITEM( 7, "Next Page (3)"					,GOSSIP_SENDER_MAIN, 839);
	player->ADD_GOSSIP_ITEM( 7, "Return to Page (1)"			,GOSSIP_SENDER_MAIN, 8);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 839: // Smithing rewards
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Souldarite] "                    ,GOSSIP_SENDER_MAIN, 833);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Jet Black Feather] "                    ,GOSSIP_SENDER_MAIN, 834);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Core Leather] "                    ,GOSSIP_SENDER_MAIN, 835);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Wicked Claw] "                    ,GOSSIP_SENDER_MAIN, 836);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1][Red Power Crystal] "                    ,GOSSIP_SENDER_MAIN, 837);

	player->ADD_GOSSIP_ITEM( 7, "Return to Page (2)"					,GOSSIP_SENDER_MAIN, 838);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 500);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 837: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(11186, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Red Power Crystal] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 836: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(8146, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Wicked Claw] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 835: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(17012, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Core Leather] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 834: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(8168, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Jet Black Feather] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 833: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(19774, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Souldarite] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 832: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(22202, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Small Obsidian Shard] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 831: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(22203, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Large Obsidian Shard] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 830: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(13257, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Demonic Rune] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 829: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12811, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Righteous Orb] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 828: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 10, false))
	{
	player->DestroyItemCount(901001, 10, false);
	player->StoreNewItemInInventorySlot(17203, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Sulfuron Ignot] added to your inventory.");
	player->PlayDirectSound(8045,0);
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 827: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7078, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 826: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12809, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Guardian Stone] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 825: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12804, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Powerful Mojo] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 824: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7077, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Heart of Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 823: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12753, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Skin of Shadow] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 822: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(15417, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Devilsaur Leather] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 821: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(20520, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Dark Rune] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 820: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7910, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Star Ruby] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 819: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12361, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Blue Sapphire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 818: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(12808, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Essence of Undeath] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 817: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(7068, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Elemental Fire] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 113: // Reward 1 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(17010, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Fiery Core] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 114: // Reward 2 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(11382, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Blood of the Mountain] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 115: // Reward 3 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInInventorySlot(17010, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Lava Core] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 116: // Reward 4 Smithing
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901001, 1, false))
	{
	player->DestroyItemCount(901001, 1, false);
	player->StoreNewItemInBestSlots(7067, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Elemental Earth] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;


case 501: // Consumeable Tokens
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [5] [Noggenfogger Elixer]"                ,GOSSIP_SENDER_MAIN, 117);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Clutch of Foresight]"                ,GOSSIP_SENDER_MAIN, 118);
	player->ADD_GOSSIP_ITEM( 1, "[3] Token(s) for [1] [Ice Deflector]"                ,GOSSIP_SENDER_MAIN, 119);
	player->ADD_GOSSIP_ITEM( 1, "[3] Token(s) for [1] [Flame Deflector]"                ,GOSSIP_SENDER_MAIN, 120);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Eye of Arachnida]"                ,GOSSIP_SENDER_MAIN, 421);
	player->ADD_GOSSIP_ITEM( 1, "[1] Token(s) for [1] [Wail of the Banshee]"                ,GOSSIP_SENDER_MAIN, 422);
	player->ADD_GOSSIP_ITEM( 1, "[2] Token(s) for [1] [Dog Whistle]"                ,GOSSIP_SENDER_MAIN, 423);
	player->ADD_GOSSIP_ITEM( 1, "[3] Token(s) for [1] [Fel orb]"                ,GOSSIP_SENDER_MAIN, 424);
	    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 0);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
	break;
case 424: // Reward 1 Consumeables
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901004, 3, false))
	{
	player->DestroyItemCount(901004, 3, false);
	player->StoreNewItemInInventorySlot(10831, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Fel Orb] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 423: // Reward 1 Consumeables
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901004, 2, false))
	{
	player->DestroyItemCount(901004, 2, false);
	player->StoreNewItemInInventorySlot(3456, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Dog Whistle] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 422: // Reward 1 Consumeables
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901004, 1, false))
	{
	player->DestroyItemCount(901004, 1, false);
	player->StoreNewItemInInventorySlot(13514, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Wail of the Banshee] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 421: // Reward 1 Consumeables
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901004, 1, false))
	{
	player->DestroyItemCount(901004, 1, false);
	player->StoreNewItemInInventorySlot(13508, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Eye of Arachnida] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 117: // Reward 1 Consumeables
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901004, 1, false))
	{
	player->DestroyItemCount(901004, 1, false);
	player->StoreNewItemInInventorySlot(8529, 5);
	player->GetSession()->SendAreaTriggerMessage("[5] [Noggenfogger Elixer] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 118: // Reward 2 Consumeables
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901004, 1, false))
	{
	player->DestroyItemCount(901004, 1, false);
	player->StoreNewItemInInventorySlot(13509, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Clutch of Foresight] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 119: // Reward 3 Consumeables
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901004, 3, false))
	{
	player->DestroyItemCount(901004, 3, false);
	player->StoreNewItemInInventorySlot(4386, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Ice Deflector] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 120: // Reward 4 Consumeables
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901004, 3, false))
	{
	player->DestroyItemCount(901004, 3, false);
	player->StoreNewItemInInventorySlot(4376, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Fire Deflector] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;

case 502: // Weapon Tokens
	player->ADD_GOSSIP_ITEM( 1, "[20] Token(s) for [1] [Doomulus Prime]"                ,GOSSIP_SENDER_MAIN, 121);
	player->ADD_GOSSIP_ITEM( 1, "[20] Token(s) for [1] [Zulian Ceremonial Staff]"                ,GOSSIP_SENDER_MAIN, 122);
	player->ADD_GOSSIP_ITEM( 1, "[20] Token(s) for [1] [Blackhand Doomsaw]"                ,GOSSIP_SENDER_MAIN, 123);
	player->ADD_GOSSIP_ITEM( 1, "[20] Token(s) for [1] [Lord Valthalak's Staff of Command]"                ,GOSSIP_SENDER_MAIN, 124);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1] [Sceptre of Smiting]"                ,GOSSIP_SENDER_MAIN, 325);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1] [Dark Iron Destroyer]"                ,GOSSIP_SENDER_MAIN, 326);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1] [Darrowspike]"                ,GOSSIP_SENDER_MAIN, 327);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1] [Ravenholdt Slicer]"                ,GOSSIP_SENDER_MAIN, 328);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1] [The Thunderwood Poker]"                ,GOSSIP_SENDER_MAIN, 329);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1] [Dark Iron Reaver]"                ,GOSSIP_SENDER_MAIN, 330);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1] [Tome of the Lost]"                ,GOSSIP_SENDER_MAIN, 331);
	    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 0);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
	break;
case 331: // Reward 1 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 10, false))
	{
	player->DestroyItemCount(901002, 10, false);
	player->StoreNewItemInInventorySlot(980008, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Tome of the Lost] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 330: // Reward 1 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 10, false))
	{
	player->DestroyItemCount(901002, 10, false);
	player->StoreNewItemInInventorySlot(980009, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Dark Iron Reaver] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 329: // Reward 1 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 10, false))
	{
	player->DestroyItemCount(901002, 10, false);
	player->StoreNewItemInInventorySlot(980010, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [The Thunderwood Poker] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 328: // Reward 1 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 10, false))
	{
	player->DestroyItemCount(901002, 10, false);
	player->StoreNewItemInInventorySlot(980011, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Ravenholdt Slicer] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 327: // Reward 1 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 10, false))
	{
	player->DestroyItemCount(901002, 10, false);
	player->StoreNewItemInInventorySlot(980012, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Darrowspike] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 326: // Reward 1 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 10, false))
	{
	player->DestroyItemCount(901002, 10, false);
	player->StoreNewItemInInventorySlot(980013, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Dark Iron Destroyer] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 325: // Reward 1 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 10, false))
	{
	player->DestroyItemCount(901002, 10, false);
	player->StoreNewItemInInventorySlot(980014, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Sceptre of Smiting] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 121: // Reward 1 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 20, false))
	{
	player->DestroyItemCount(901002, 20, false);
	player->StoreNewItemInInventorySlot(980015, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Doomulus Prime] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 122: // Reward 2 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 20, false))
	{
	player->DestroyItemCount(901002, 20, false);
	player->StoreNewItemInInventorySlot(980016, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Zulian Ceremonial Staff] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 123: // Reward 3 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 20, false))
	{
	player->DestroyItemCount(901002, 20, false);
	player->StoreNewItemInInventorySlot(980017, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Blackhand Doomsaw] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 124: // Reward 4 Weapons
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901002, 20, false))
	{
	player->DestroyItemCount(901002, 20, false);
	player->StoreNewItemInInventorySlot(980018, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Lord Valthalak's Staff of Command] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;

case 503: // Armor Tokens
	player->ADD_GOSSIP_ITEM( 1, "[20] Token(s) for [1] [Linken's Boomerang]"                ,GOSSIP_SENDER_MAIN, 125);
	player->ADD_GOSSIP_ITEM( 1, "[25] Token(s) for [1] [Tidal's Charm]"                ,GOSSIP_SENDER_MAIN, 126);
	player->ADD_GOSSIP_ITEM( 1, "[10] Token(s) for [1] [Luffa]"                ,GOSSIP_SENDER_MAIN, 127);
	player->ADD_GOSSIP_ITEM( 1, "[15] Token(s) for [1] [Nifty Stopwatch]"                ,GOSSIP_SENDER_MAIN, 128);
	    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 0);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
	break;

case 125: // Reward 1 Armor
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901003, 20, false))
	{
	player->DestroyItemCount(901003, 20, false);
	player->StoreNewItemInInventorySlot(11905, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Linken's Boomerang] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 126: // Reward 2 Armor
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901003, 25, false))
	{
	player->DestroyItemCount(901003, 25, false);
	player->StoreNewItemInInventorySlot(1404, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Tidal's Charm] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 127: // Reward 3 Armor
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901003, 10, false))
	{
	player->DestroyItemCount(901003, 10, false);
	player->StoreNewItemInInventorySlot(19141, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Luffa] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;
case 128: // Reward 4 Armor
	player->CLOSE_GOSSIP_MENU();
	if (player->HasItemCount(901003, 15, false))
	{
	player->DestroyItemCount(901003, 5, false);
	player->StoreNewItemInInventorySlot(2820, 1);
	player->GetSession()->SendAreaTriggerMessage("[1] [Nifty Stopwatch] added to your inventory.");
	}
	else
	{
	player->GetSession()->SendNotification("You don't have enough tokens.");
	}
	break;








































case 2: // Player Tools
    if (player->getClass() == CLASS_PALADIN)
    player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    if (player->getClass() == CLASS_WARRIOR)
    player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    if (player->getClass() == CLASS_SHAMAN)
    player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    if (player->getClass() == CLASS_WARLOCK)
    player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    if (player->getClass() == CLASS_ROGUE)
    player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    if (player->getClass() == CLASS_DRUID)
    player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    if (player->getClass() == CLASS_HUNTER)
    player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    player->ADD_GOSSIP_ITEM( 5, "[Learn Professions]"            ,GOSSIP_SENDER_MAIN, 16);
    player->ADD_GOSSIP_ITEM( 5, "[Max Out Weapon Skills]"        ,GOSSIP_SENDER_MAIN, 302);
    player->ADD_GOSSIP_ITEM( 5, "[Teach Me Riding]"                ,GOSSIP_SENDER_MAIN, 317);
    if (player->getClass() == CLASS_HUNTER)
    player->ADD_GOSSIP_ITEM( 5, "[Level My Pet]"                ,GOSSIP_SENDER_MAIN, 303);

    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

case 9: // Zones
    player->ADD_GOSSIP_ITEM( 5, "[Kalimdor]"                    ,GOSSIP_SENDER_MAIN, 13);
    player->ADD_GOSSIP_ITEM( 5, "[Eastern Kingdoms]"            ,GOSSIP_SENDER_MAIN, 14);
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 0);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 10: // Instances [PAGE 1]
    player->ADD_GOSSIP_ITEM( 5, "The Wailing Caverns"            ,GOSSIP_SENDER_MAIN, 230);
    player->ADD_GOSSIP_ITEM( 5, "Deadmines"                        ,GOSSIP_SENDER_MAIN, 231);
    player->ADD_GOSSIP_ITEM( 5, "Shadowfang Keep"                ,GOSSIP_SENDER_MAIN, 232);
    player->ADD_GOSSIP_ITEM( 5, "Blackfathom Deeps"                ,GOSSIP_SENDER_MAIN, 233);
    player->ADD_GOSSIP_ITEM( 5, "Razorfen Kraul"                ,GOSSIP_SENDER_MAIN, 234);
    player->ADD_GOSSIP_ITEM( 5, "Razorfen Downs"                ,GOSSIP_SENDER_MAIN, 235);
    player->ADD_GOSSIP_ITEM( 5, "Scarlet Monastery"                ,GOSSIP_SENDER_MAIN, 236);

    player->ADD_GOSSIP_ITEM( 7, "[More]"                        ,GOSSIP_SENDER_MAIN, 11);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 0);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 11: // Instances [PAGE 2]
    player->ADD_GOSSIP_ITEM( 5, "Uldaman"                        ,GOSSIP_SENDER_MAIN, 237);
    player->ADD_GOSSIP_ITEM( 5, "Zul'Farrak"                    ,GOSSIP_SENDER_MAIN, 238);
    player->ADD_GOSSIP_ITEM( 5, "Maraudon"                        ,GOSSIP_SENDER_MAIN, 239);
    player->ADD_GOSSIP_ITEM( 5, "The Sunken Temple"                ,GOSSIP_SENDER_MAIN, 240);
    player->ADD_GOSSIP_ITEM( 5, "Dire Maul"                        ,GOSSIP_SENDER_MAIN, 241);
    player->ADD_GOSSIP_ITEM( 5, "Blackrock Spire"                ,GOSSIP_SENDER_MAIN, 242);
    player->ADD_GOSSIP_ITEM( 5, "Blackrock Depths"                ,GOSSIP_SENDER_MAIN, 243);
    player->ADD_GOSSIP_ITEM( 5, "Scholomance"                    ,GOSSIP_SENDER_MAIN, 244);

    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 10);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 12: // Raids
    player->ADD_GOSSIP_ITEM( 5, "Stratholme Back Door"            ,GOSSIP_SENDER_MAIN, 245);
    player->ADD_GOSSIP_ITEM( 5, "Stratholme Main Door"            ,GOSSIP_SENDER_MAIN, 246);
    player->ADD_GOSSIP_ITEM( 5, "Onyxia's Lair"                    ,GOSSIP_SENDER_MAIN, 247);
    player->ADD_GOSSIP_ITEM( 5, "Molten Core"                    ,GOSSIP_SENDER_MAIN, 248);
    player->ADD_GOSSIP_ITEM( 5, "Blackwing Lair"                ,GOSSIP_SENDER_MAIN, 249);
    player->ADD_GOSSIP_ITEM( 5, "Naxxramas"                        ,GOSSIP_SENDER_MAIN, 250);
    player->ADD_GOSSIP_ITEM( 5, "Ruins of Ahn'Qiraj"            ,GOSSIP_SENDER_MAIN, 251);
    player->ADD_GOSSIP_ITEM( 5, "Temple of Ahn'Qiraj"            ,GOSSIP_SENDER_MAIN, 252);
    player->ADD_GOSSIP_ITEM( 5, "Zul'Gurub"                        ,GOSSIP_SENDER_MAIN, 253);
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 0);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 13: // Kalimdor
    player->ADD_GOSSIP_ITEM( 5, "Ashenvale"                        ,GOSSIP_SENDER_MAIN, 203);
    player->ADD_GOSSIP_ITEM( 5, "Darkshore"                        ,GOSSIP_SENDER_MAIN, 204);
    player->ADD_GOSSIP_ITEM( 5, "Desolace"                        ,GOSSIP_SENDER_MAIN, 205);
    player->ADD_GOSSIP_ITEM( 5, "Durotar"                        ,GOSSIP_SENDER_MAIN, 206);
    player->ADD_GOSSIP_ITEM( 5, "Dustwallow Marsh"                ,GOSSIP_SENDER_MAIN, 207);
    player->ADD_GOSSIP_ITEM( 5, "Feralas"                        ,GOSSIP_SENDER_MAIN, 208);
    player->ADD_GOSSIP_ITEM( 5, "Silithus"                        ,GOSSIP_SENDER_MAIN, 209);
    player->ADD_GOSSIP_ITEM( 5, "Stonetalon Mountains"            ,GOSSIP_SENDER_MAIN, 210);
    player->ADD_GOSSIP_ITEM( 5, "Tanaris"                        ,GOSSIP_SENDER_MAIN, 211);
    player->ADD_GOSSIP_ITEM( 5, "The Barrens"                    ,GOSSIP_SENDER_MAIN, 212);
    player->ADD_GOSSIP_ITEM( 5, "Thousand Needles"                ,GOSSIP_SENDER_MAIN, 213);
    player->ADD_GOSSIP_ITEM( 5, "Winterspring"                    ,GOSSIP_SENDER_MAIN, 214);
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 9);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 14: // Eastern Kingdoms [Page 1]
    player->ADD_GOSSIP_ITEM( 5, "Arathi Highlands"                ,GOSSIP_SENDER_MAIN, 215);
    player->ADD_GOSSIP_ITEM( 5, "Badlands"                        ,GOSSIP_SENDER_MAIN, 216);
    player->ADD_GOSSIP_ITEM( 5, "Dun Morogh"                    ,GOSSIP_SENDER_MAIN, 217);
    player->ADD_GOSSIP_ITEM( 5, "Duskwood"                        ,GOSSIP_SENDER_MAIN, 218);
    player->ADD_GOSSIP_ITEM( 5, "Eastern Plaguelands"            ,GOSSIP_SENDER_MAIN, 219);
    player->ADD_GOSSIP_ITEM( 5, "Elwynn Forest"                    ,GOSSIP_SENDER_MAIN, 220);
    player->ADD_GOSSIP_ITEM( 5, "Hillsbrad Foothills"            ,GOSSIP_SENDER_MAIN, 221);
    player->ADD_GOSSIP_ITEM( 5, "Redridge Mountains"            ,GOSSIP_SENDER_MAIN, 222);
    player->ADD_GOSSIP_ITEM( 5, "Silverpine Forest"                ,GOSSIP_SENDER_MAIN, 223);

    player->ADD_GOSSIP_ITEM( 7, "[More]"                        ,GOSSIP_SENDER_MAIN, 15);
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 9);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 15: // Eastern Kingdoms [Page 2]
    player->ADD_GOSSIP_ITEM( 5, "Stranglethorn Vale"            ,GOSSIP_SENDER_MAIN, 224);
    player->ADD_GOSSIP_ITEM( 5, "Swamp of Sorrows"                ,GOSSIP_SENDER_MAIN, 225);
    player->ADD_GOSSIP_ITEM( 5, "The Hinterlands"                ,GOSSIP_SENDER_MAIN, 226);
    player->ADD_GOSSIP_ITEM( 5, "Tirisfal Glades"                ,GOSSIP_SENDER_MAIN, 227);
    player->ADD_GOSSIP_ITEM( 5, "Westfall"                        ,GOSSIP_SENDER_MAIN, 228);
    player->ADD_GOSSIP_ITEM( 5, "Wetlands"                        ,GOSSIP_SENDER_MAIN, 229);

    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 14);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 16: // Learn Professions
    player->ADD_GOSSIP_ITEM( 5, "Alchemy"                        ,GOSSIP_SENDER_MAIN, 305);
    player->ADD_GOSSIP_ITEM( 5, "Blacksmithing"                    ,GOSSIP_SENDER_MAIN, 306);
    player->ADD_GOSSIP_ITEM( 5, "Enchanting"                    ,GOSSIP_SENDER_MAIN, 307);
    player->ADD_GOSSIP_ITEM( 5, "Engineering"                    ,GOSSIP_SENDER_MAIN, 308);
    player->ADD_GOSSIP_ITEM( 5, "Herbalism"                        ,GOSSIP_SENDER_MAIN, 309);
    player->ADD_GOSSIP_ITEM( 5, "Leatherworking"                ,GOSSIP_SENDER_MAIN, 310);
    player->ADD_GOSSIP_ITEM( 5, "Mining"                        ,GOSSIP_SENDER_MAIN, 311);
    player->ADD_GOSSIP_ITEM( 5, "Skinning"                        ,GOSSIP_SENDER_MAIN, 312);
    player->ADD_GOSSIP_ITEM( 5, "Tailoring"                        ,GOSSIP_SENDER_MAIN, 313);
    player->ADD_GOSSIP_ITEM( 5, "Cooking"                        ,GOSSIP_SENDER_MAIN, 314);
    player->ADD_GOSSIP_ITEM( 5, "First Aid"                        ,GOSSIP_SENDER_MAIN, 315);
    player->ADD_GOSSIP_ITEM( 5, "Fishing"                        ,GOSSIP_SENDER_MAIN, 316);

    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 2);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 17: // Neutral Cities
    player->ADD_GOSSIP_ITEM( 5, "Booty Bay"                        ,GOSSIP_SENDER_MAIN, 113);
    player->ADD_GOSSIP_ITEM( 5, "Ratchet"                        ,GOSSIP_SENDER_MAIN, 114);

    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 0);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;



// ### Player Tools ###
case 302: // Set Weapon Skill MAX
    player->CLOSE_GOSSIP_MENU();
    player->UpdateSkillsToMaxSkillsForLevel();
    player->GetSession()->SendNotification("Your Weapon Skills Have Been Maxed Out.");
    break;
case 303: // Level Pet
    player->CLOSE_GOSSIP_MENU();
    if (Creature* pet = player->GetPet())
    {
        ((Pet*)pet)->GivePetLevel(player->getLevel());
        ((Pet*)pet)->SetLoyaltyLevel(BEST_FRIEND);
        player->GetSession()->SendNotification("Your Pet has Reached Your Level.");
    }else{
    player->GetSession()->SendNotification("You do Not Have a Pet.");
    }
    break;
case 304: // Learn Spells
    player->CLOSE_GOSSIP_MENU();
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
    }
    player->GetSession()->SendNotification("Your Missing Spells Have Been Added.");
    break;

// ### Learn Professions ###
case 305: // Alchemy
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(2259, false);
    player->learnSpell(3101, false);
    player->learnSpell(3464, false);
    player->learnSpell(11611, false);

    player->UpdateSkill(171, 300);
    player->GetSession()->SendNotification("You Have Been Taught Alchemy.");
    break;
case 306: // Blacksmithing
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(2018, false);
    player->learnSpell(3100, false);
    player->learnSpell(3538, false);
    player->learnSpell(9785, false);
    
    player->UpdateSkill(164, 300);
    player->GetSession()->SendNotification("You Have Been Taught Blacksmithing.");
    break;
case 307: // Enchanting
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(7411, false);
    player->learnSpell(7412, false);
    player->learnSpell(7413, false);
    player->learnSpell(13920, false);
    
    player->UpdateSkill(333, 300);
    player->GetSession()->SendNotification("You Have Been Taught Enchanting.");
    break;
case 308: // Engineering
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(4036, false);
    player->learnSpell(4037, false);
    player->learnSpell(4038, false);
    player->learnSpell(12656, false);
    
    player->UpdateSkill(202, 300);
    player->GetSession()->SendNotification("You Have Been Taught Engineering.");
    break;
case 309: // Herbalism
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(2366, false);
    player->learnSpell(2368, false);
    player->learnSpell(3570, false);
    player->learnSpell(11993, false);
    
    player->UpdateSkill(182, 300);
    player->GetSession()->SendNotification("You Have Been Taught Herbalism.");
    break;
case 310: // Leatherworking
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(2108, false);
    player->learnSpell(3104, false);
    player->learnSpell(3811, false);
    player->learnSpell(10662, false);
    
    player->UpdateSkill(165, 300);
    player->GetSession()->SendNotification("You Have Been Taught Leatherworking.");
    break;
case 311: // Mining
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(2575, false);
    player->learnSpell(2576, false);
    player->learnSpell(3564, false);
    player->learnSpell(10248, false);
    
    player->UpdateSkill(186, 300);
    player->GetSession()->SendNotification("You Have Been Taught Mining.");
    break;
case 312: // Skinning
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(8613, false);
    player->learnSpell(8617, false);
    player->learnSpell(8618, false);
    player->learnSpell(10768, false);
    
    player->UpdateSkill(393, 300);
    player->GetSession()->SendNotification("You Have Been Taught Skinning.");
    break;
case 313: // Tailoring
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(3908, false);
    player->learnSpell(3909, false);
    player->learnSpell(3910, false);
    player->learnSpell(12180, false);
    
    player->UpdateSkill(197, 300);
    player->GetSession()->SendNotification("You Have Been Taught Tailoring.");
    break;
case 314: // Cooking
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(2550, false);
    player->learnSpell(3102, false);
    player->learnSpell(3413, false);
    player->learnSpell(18260, false);
    
    player->UpdateSkill(185, 300);
    player->GetSession()->SendNotification("You Have Been Taught Cooking.");
    break;
case 315: // First Aid
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(3273, false);
    player->learnSpell(3274, false);
    player->learnSpell(7924, false);
    player->learnSpell(10846, false);
    
    player->UpdateSkill(129, 300);
    player->GetSession()->SendNotification("You Have Been Taught First Aid.");
    break;
case 316: // Fishing
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(7620, false);
    player->learnSpell(7731, false);
    player->learnSpell(7732, false);
    player->learnSpell(18248, false);
    
    player->UpdateSkill(356, 300);
    player->GetSession()->SendNotification("You Have Been Taught Fishing.");
    break;
case 317: // Learn Riding
    player->CLOSE_GOSSIP_MENU();
    player->learnSpell(33388, false);
    player->learnSpell(33391, false);

    player->UpdateSkill(762, 150);
    player->GetSession()->SendNotification("You Have Been Taught Riding.");
    break;
// -----------------------------### END OF EXCHANGER ###-----------------------------
}
}
bool GossipSelect_exchanger(Player *player, Creature *creature, uint32 sender, uint32 action)
{
    // Main Menu
    if (sender == GOSSIP_SENDER_MAIN)
    SendDefaultMenu_exchanger( player, creature, action );

return true;
}

void AddSC_exchanger()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name = "exchanger";
    newscript->pGossipHello = &GossipHello_exchanger;
    newscript->pGossipSelect = &GossipSelect_exchanger;
    newscript->RegisterSelf();
}