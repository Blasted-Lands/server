#include "precompiled.h"
typedef UNORDERED_MAP<ObjectGuid, uint32> AttackerMap;

struct MANGOS_DLL_DECL npc_training_dummyAI : public Scripted_NoMovementAI
{
	npc_training_dummyAI(Creature* pCreature) : Scripted_NoMovementAI(pCreature) {}

	AttackerMap m_AttackerMap;
	void Reset() {}

	void DamageTaken(Unit* pDealer, uint32& uiDamage) {
		if (pDealer->GetTypeId() == TYPEID_PLAYER)
			m_AttackerMap[pDealer->GetObjectGuid()] = 6000;

		if (m_creature->GetHealthPercent() <10.0f || m_creature->GetHealthPercent() > 20.0f)
			m_creature->SetHealth(m_creature->GetMaxHealth()/5);
			m_creature->SetTargetGuid(ObjectGuid());
	}

	void UpdateAI(const uint32 diff){
		for (AttackerMap::iterator itr = m_AttackerMap.begin(); itr != m_AttackerMap.end();) {
			if (itr->second < diff) {
				if (Player* pAttacker = m_creature->GetMap()->GetPlayer(itr->first)) {
					pAttacker->CombatStop(true);
					pAttacker->AttackStop(false);
					pAttacker->CombatStopWithPets(true);
					pAttacker->ClearInCombat();
				}
				itr = m_AttackerMap.erase(itr);

				if (m_AttackerMap.empty()) {
					EnterEvadeMode();
					m_creature->SetHealth(m_creature->GetMaxHealth());
				}
			}
			else{
				itr->second -=diff;
				++itr;
			}
		}
	}
}; 

//#define OUT_OF_COMBAT_TIME 5000
//
//struct MANGOS_DLL_DECL npc_training_dummyAI : public Scripted_NoMovementAI
//	{
//    uint32 combat_timer;
//    npc_training_dummyAI(Creature* pCreature) : Scripted_NoMovementAI(pCreature)
//    {
//        Reset();
//    }
//    void Reset()
//    {
//        m_creature->addUnitState(UNIT_STAT_STUNNED);
//        combat_timer = 0;
//    }
//    void DamageTaken(Unit* pDoneBy, uint32 &uiDamage)
//    {
//        combat_timer = 0;
//    }
//    void UpdateAI(const uint32 diff)
//    {
//        if (!m_creature->SelectHostileTarget() || !m_creature->getVictim())
//            return;
//        m_creature->ModifyHealth(m_creature->GetMaxHealth());
//        m_creature->SetTargetGuid(ObjectGuid());
//
//        combat_timer += diff;
//
//        if (combat_timer > OUT_OF_COMBAT_TIME)
//            EnterEvadeMode();
//    } 
//};
CreatureAI* GetAI_npc_training_dummy(Creature* pCreature) 
{ 
    return new npc_training_dummyAI(pCreature); 
}

void AddSC_npc_training_dummy() 
{ 
    Script *newscript = new Script; 
    newscript->Name = "npc_training_dummy"; 
    newscript->GetAI = &GetAI_npc_training_dummy; 
    newscript->RegisterSelf(); 
}