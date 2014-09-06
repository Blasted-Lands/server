#include "precompiled.h"

// ----------------------------### START OF DUEL MASTER ###----------------------------
bool GossipHello_duel_master(Player *player, Creature *creature)
{
    // Main Menu
    if (!player->IsInCombat())      // Check Combat State
    {
        player->ADD_GOSSIP_ITEM( 5, "Send me to the Duel Arena."            ,GOSSIP_SENDER_MAIN, 1);
        player->ADD_GOSSIP_ITEM( 5, "[Player Tools]"                ,GOSSIP_SENDER_MAIN, 2);
		
        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
        return true;
    }
    player->GetSession()->SendNotification("You are in combat.");
    return false;
}
void SendDefaultMenu_duel_master(Player *player, Creature *creature, uint32 action )
{
switch(action)
{
// ---### Main Menu Return ###---

case 0: // Main Menu
    player->ADD_GOSSIP_ITEM( 5, "Send me to the Duel Arena."            ,GOSSIP_SENDER_MAIN, 1);
    player->ADD_GOSSIP_ITEM( 5, "[Player Tools]"                ,GOSSIP_SENDER_MAIN, 2);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

case 1: // Teleport Locations
	player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -3797.367432f, 1094.845947f, 153.767548f, 6.168524f);
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 2: // Player Tools
    //if (player->getClass() == CLASS_PALADIN)
    //player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    //if (player->getClass() == CLASS_WARRIOR)
    //player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    //if (player->getClass() == CLASS_SHAMAN)
    //player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    //if (player->getClass() == CLASS_WARLOCK)
    //player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    //if (player->getClass() == CLASS_ROGUE)
    //player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    //if (player->getClass() == CLASS_DRUID)
    //player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    //if (player->getClass() == CLASS_HUNTER)
    //player->ADD_GOSSIP_ITEM( 5, "[Learn Missing Spells]"        ,GOSSIP_SENDER_MAIN, 304);
    //player->ADD_GOSSIP_ITEM( 5, "[Learn Professions]"            ,GOSSIP_SENDER_MAIN, 16);
    player->ADD_GOSSIP_ITEM( 5, "[Max Out Weapon Skills]"        ,GOSSIP_SENDER_MAIN, 302);
	player->ADD_GOSSIP_ITEM( 5, "[Reset Talents]"				,GOSSIP_SENDER_MAIN, 304);
    /*player->ADD_GOSSIP_ITEM( 5, "[Teach Me Riding]"                ,GOSSIP_SENDER_MAIN, 317);*/
    if (player->getClass() == CLASS_HUNTER)
    player->ADD_GOSSIP_ITEM( 5, "[Level My Pet]"                ,GOSSIP_SENDER_MAIN, 303);

    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 5: // Cities [HORDE]
    player->ADD_GOSSIP_ITEM( 5, "Orgrimmar"                        ,GOSSIP_SENDER_MAIN, 100);
    player->ADD_GOSSIP_ITEM( 5, "Undercity"                        ,GOSSIP_SENDER_MAIN, 101);
    player->ADD_GOSSIP_ITEM( 5, "Thunderbluff"                    ,GOSSIP_SENDER_MAIN, 102);
    player->ADD_GOSSIP_ITEM( 5, "Goldshire (Stormwind)"            ,GOSSIP_SENDER_MAIN, 202);
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 1);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);
    
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 6: // Cities [ALLIANCE]
    player->ADD_GOSSIP_ITEM( 5, "Stormwind City"                ,GOSSIP_SENDER_MAIN, 103);
    player->ADD_GOSSIP_ITEM( 5, "Ironforge"                        ,GOSSIP_SENDER_MAIN, 104);
    player->ADD_GOSSIP_ITEM( 5, "Darnassus"                        ,GOSSIP_SENDER_MAIN, 105);
    player->ADD_GOSSIP_ITEM( 5, "Razor Hill (Orgrimmar)"        ,GOSSIP_SENDER_MAIN, 201);
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 1);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);
    
    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 7: // Starting Places [HORDE]
    player->ADD_GOSSIP_ITEM( 5, "Shadow Grave"                    ,GOSSIP_SENDER_MAIN, 106);
    player->ADD_GOSSIP_ITEM( 5, "Valley of Trials"                ,GOSSIP_SENDER_MAIN, 107);
    player->ADD_GOSSIP_ITEM( 5, "Camp Narache"                    ,GOSSIP_SENDER_MAIN, 108);
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 1);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 8: // Starting Places [ALLIANCE]
    player->ADD_GOSSIP_ITEM( 5, "Northshire Valley"                ,GOSSIP_SENDER_MAIN, 109);
    player->ADD_GOSSIP_ITEM( 5, "Coldridge Valley"                ,GOSSIP_SENDER_MAIN, 110);
    player->ADD_GOSSIP_ITEM( 5, "Shadowglen"                    ,GOSSIP_SENDER_MAIN, 111);
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 1);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;
case 9: // Zones
    player->ADD_GOSSIP_ITEM( 5, "[Kalimdor]"                    ,GOSSIP_SENDER_MAIN, 13);
    player->ADD_GOSSIP_ITEM( 5, "[Eastern Kingdoms]"            ,GOSSIP_SENDER_MAIN, 14);
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 1);
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
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 1);
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
    
    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 1);
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

    player->ADD_GOSSIP_ITEM( 7, "[Back]"                        ,GOSSIP_SENDER_MAIN, 1);
    player->ADD_GOSSIP_ITEM( 7, "[Main Menu]"                    ,GOSSIP_SENDER_MAIN, 0);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    break;

// ----### CITIES ###---- 

// ### HORDE ###

case 100: // Orgrimmar
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 1676.6774f, -4448.3955f, 19.0713f, 0.0f);
    break;
case 101: // Undercity 
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 1822.0999f, 238.638855f, 60.694809f, 0.0f);
    break;
case 102: // Thunderbluff
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -1272.703735f, 116.886490f, 131.016861f, 0.0f);
    break;

// ### ALLIANCE ###

case 103: // Stormwind
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -8828.231445f, 627.927490f, 94.055664f, 0.0f);
    break;
case 104: // Ironforge 
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -5019.015625f, -836.758911f, 496.661591f, 0.0f);
    break;
case 105: // Darnassus
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 9962.712891f, 2280.142822f, 1341.394409f, 0.0f);
    break;

// ----### STARTING PLACES ####----

// ### HORDE ###
case 106: // Shadow Grave
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 1663.517f, 1678.187744f, 120.5303f, 0.0f);
    break;
case 107: // Valley of Trials
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -602.1253f, -4262.4208f, 38.956341f, 0.0f);
    break;
case 108: // Camp Narache
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -2914.16992f, -266.061798f, 53.658211f, 0.0f);
    break;

// ### ALLIANCE ###

case 109: // Nortshire Valley
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -8943.133789f, -132.934921f, 83.704269f, 0.0f);
    break;
case 110: // Coldridge Valley
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -6231.106445f, 332.270477f, 383.153931f, 0.0f);
    break;
case 111: // Shadowglen
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 10329.918945f, 833.500305f, 1326.260620f, 0.0f);
    break;

// ---### ZONES ###---

case 200: // Gurubashi
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -13261.3f, 168.294f, 35.0792f, 1.00688f);
    break;
case 201: // Kalimdor -> Razor Hill [Alliance Port to Horde]
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 315.721f, -4743.4f, 10.4867f, 0.0f);
    break;
case 202: // Eastern Kingdoms -> Goldshire [Horde Port to Alliance]
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -9464.0f, 62.0f, 56.0f, 0.0f);
    break;
case 203: // Kalimdor -> Ashenvale
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 3469.43f,847.62f,6.36476f,0.0f);
    break;
case 204: // Kalimdor -> Darkshore
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 6207.5f,-152.833f,80.8185f,0.0f);
    break;
case 205: // Kalimdor -> Desolace
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -93.1614f,1691.15f,90.0649f,0.0f);
    break;
case 206: // Kalimdor -> Durotar
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 341.42f,-4684.7f,31.9493f,0.0f);
    break;
case 207: // Kalimdor -> Duswallow Marsh
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -3463.26f,-4123.13f,18.1043f,0.0f);
    break;
case 208: // Kalimdor -> Ferelas
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -4458.93f,243.415f,65.6136f,0.0f);
    break;
case 209: // Kalimdor -> Silithus
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -6824.15f,821.273f,50.6675f,0.0f);
    break;
case 210: // Kalimdor -> Stonetalon Mountains
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 1145.00f,85.664f,-6.64f,0.0f);
    break;
case 211: // Kalimdor -> Tanaris
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -7373.69f,-2950.2f,11.7598f,0.0f);
    break;
case 212: // Kalimdor -> The Barrens
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -456.263f,-2652.7f,96.615f,0.0f);
    break;
case 213: // Kalimdor -> Thousand Needles
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -4941.66f,-1595.42f,-33.07f,0.0f);
    break;
case 214: // Kalimdor -> Winterspring
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 6107.62f,-4181.6f,853.322f,0.0f);
    break;
case 215: // Eastern Kingdoms -> Arathi Highlands
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -1544.93f,-2495.01f,54.11f,0.0f);
    break;
case 216: // Eastern Kingdoms -> Badlands
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -6084.95f,-3328.44f,253.76f,0.0f);
    break;
case 217: // Eastern Kingdoms -> Dun Morogh
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -5660.33f,755.299f,390.605f,0.0f);
    break;
case 218: // Eastern Kingdoms -> Duskwood
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -10879.85f,-327.06f,37.78f,0.0f);
    break;
case 219: // Eastern Kingdoms -> Eastern Plaguelands
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 2280.12f,-5313.16f,87.74f,0.0f);
    break;
case 220: // Eastern Kingdoms -> Elwynn Forest
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -9545.78f,-51.81f,56.72f,0.0f);
    break;
case 221: // Eastern Kingdoms -> Hillsbrad Foothills
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -436.03f,-583.27f,53.58f,0.0f);
    break;
case 222: // Eastern Kingdoms -> Reridge Mountains
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -9633.80f,-1875.09f,68.39f,0.0f);
    break;
case 223: // Eastern Kingdoms -> Silverpine Forest
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 641.48f,1297.84f,85.45f,0.0f);
    break;
case 224: // Eastern Kingdoms -> Stranglethorn Vale
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -11393.77f,-288.94f,58.99f,0.0f);
    break;
case 225: // Eastern Kingdoms -> Swamp of Sorrows
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -10522.55f,-3028.30f,21.79f,0.0f);
    break;
case 226: // Eastern Kingdoms -> The Hinterlands
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 155.14f,-2014.95f,122.55f,0.0f);
    break;
case 227: // Eastern Kingdoms -> Tirisfal Glades
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 2255.5f,288.511f,35.1138f,0.0f);
    break;
case 228: // Eastern Kingdoms -> Westfall
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -10919.09f,998.47f,35.47f,0.0f);
    break;
case 229: // Eastern Kingdoms -> Wetlands
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -4086.36f,-2610.95f,47.0143f,0.0f);
    break;

// ----### INSTANCES ###----

case 230: // The Wailing Caverns
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -722.53f,-2226.30f,16.94f,2.71f);
    break;
case 231: // The Deadmines
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -11212.04f,1658.58f,25.67f,1.45f);
    break;
case 232: // Shadowfang Keep
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -254.47f,1524.68f,76.89f,1.56f);
    break;
case 233: // Blackfathom Deeps
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, 4254.58f,664.74f,-29.04f,1.97f);
    break;
case 234: // Razorfen Kraul
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -4484.04f,-1739.40f,86.47f,1.23f);
    break;
case 235: // Razorfen Downs
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -4645.08f,-2470.85f,85.53f,4.39f);
    break;
case 236: // The Scarlet Monastery
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 2843.89f,-693.74f,139.32f,5.11f);
    break;
case 237: // Uldaman
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -6119.70f,-2957.30f,204.11f,0.03f);
    break;
case 238: // Zul'Farrak
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -6839.39f,-2911.03f,8.87f,0.41f);
    break;
case 239: // Maraudon
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -1433.33f,2955.34f,96.21f,4.82f);
    break;
case 240: // The Sunken Temple
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -10346.92f,-3851.90f,-43.41f,6.09f);
    break;
case 241: // Dire Maul
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -3982.47f,1127.79f,161.02f,0.05f);
    break;
case 242: // Blackrock Spire
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -7535.43f,-1212.04f,285.45f,5.29f);
    break;
case 243: // Blackrock Depths
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -7301.03f,-913.19f,165.37f,0.08f);
    break;
case 244: // Scholomance
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 1252.319824f, -2587.151123f, 92.886772f, 0.0f);
    break;

// ---### Raids ###---

case 245: // Stratholme Backdoor Entrance
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 3160.416992f, -4038.750244f, 104.177376f, 0.0f);
    break;
case 246: // Stratholme Main Entrance
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 3357.214355f, -3379.713135f, 144.780853f, 0.0f);
    break;
case 247: // Onyxia's Lair
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -4682.391602f, -3709.857422f, 46.792862f, 0.0f);
    break;
case 248: // Molten Core
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(230, 1121.451172f, -454.316772f, -101.329536f, 3.5f);
    break;
case 249: // Blackwing Lair
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(469, -7665.55f, -1102.49f, 400.679f, 0.0f);
    break;
case 250: // Naxxramas
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, 3121.061768f, -3689.973389f, 133.458786f, 0.0f);
    break;
case 251: // Ruins of Ahn'Qiraj
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -8409.032227f, 1498.830933f, 27.361542f, 2.497567f);
    break;
case 252: // Temple of Ahn'Qiraj
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -8245.837891f, 1983.736206f, 129.071686f, 0.936195f);
    break;
case 253: // Zul'Gurub
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -11916.179688f, -1190.977051f, 85.137901f, 0.0f);
    break;

// ---### OTHER ###---

// ### Mall ###
case 300: // Horde Mall
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(1, -10708.900391f, 2410.229980f, 7.607820f, 2.542850f);
    break;
case 301: // Alliance Mall
    player->CLOSE_GOSSIP_MENU();
    player->TeleportTo(0, -9307.393555f, 714.058594f, 130.719421f, 5.809136f);
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
case 304: // Reset talents
	player->resetTalents();
	player->CLOSE_GOSSIP_MENU();
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
// -----------------------------### END OF duel_master ###-----------------------------
}
}
bool GossipSelect_duel_master(Player *player, Creature *creature, uint32 sender, uint32 action)
{
    // Main Menu
    if (sender == GOSSIP_SENDER_MAIN)
    SendDefaultMenu_duel_master( player, creature, action );

return true;
}

void AddSC_duel_master()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name = "duel_master";
    newscript->pGossipHello = &GossipHello_duel_master;
    newscript->pGossipSelect = &GossipSelect_duel_master;
    newscript->RegisterSelf();
}