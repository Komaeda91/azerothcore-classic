#pragma once

#include "../actions/GenericActions.h"

namespace ai
{
    class CastFireballAction : public CastSpellAction
    {
    public:
        CastFireballAction(PlayerbotAI* ai) : CastSpellAction(ai, "fireball") {}
    };

    class CastScorchAction : public CastSpellAction
    {
    public:
        CastScorchAction(PlayerbotAI* ai) : CastSpellAction(ai, "scorch") {}
    };

    class CastFireBlastAction : public CastSpellAction
    {
    public:
        CastFireBlastAction(PlayerbotAI* ai) : CastSpellAction(ai, "fire blast") {}
    };

    class CastArcaneMissilesAction : public CastSpellAction
    {
    public:
        CastArcaneMissilesAction(PlayerbotAI* ai) : CastSpellAction(ai, "arcane missiles") {}
    };

    class CastPyroblastAction : public CastSpellAction
    {
    public:
        CastPyroblastAction(PlayerbotAI* ai) : CastSpellAction(ai, "pyroblast") {}
    };

    class CastFlamestrikeAction : public CastSpellAction
    {
    public:
        CastFlamestrikeAction(PlayerbotAI* ai) : CastSpellAction(ai, "flamestrike") {}
    };

    class CastFrostNovaAction : public CastSpellAction
    {
    public:
        CastFrostNovaAction(PlayerbotAI* ai) : CastSpellAction(ai, "frost nova") {}
        virtual bool isUseful() { return AI_VALUE2(float, "distance", GetTargetName()) <= sPlayerbotAIConfig.tooCloseDistance; }
    };

	class CastFrostboltAction : public CastSpellAction
	{
	public:
		CastFrostboltAction(PlayerbotAI* ai) : CastSpellAction(ai, "frostbolt") {}
	};

	class CastBlizzardAction : public CastSpellAction
	{
	public:
		CastBlizzardAction(PlayerbotAI* ai) : CastSpellAction(ai, "blizzard") {}
	};

	class CastArcaneIntellectAction : public CastBuffSpellAction
    {
	public:
		CastArcaneIntellectAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "arcane intellect") {}
	};

	class CastArcaneIntellectOnPartyAction : public BuffOnPartyAction
    {
	public:
		CastArcaneIntellectOnPartyAction(PlayerbotAI* ai) : BuffOnPartyAction(ai, "arcane intellect") {}
	};

	class CastRemoveCurseAction : public CastCureSpellAction
    {
	public:
		CastRemoveCurseAction(PlayerbotAI* ai) : CastCureSpellAction(ai, "remove curse") {}
	};

	class CastCombustionAction : public CastBuffSpellAction
    {
	public:
		CastCombustionAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "combustion") {}
	};

    BEGIN_SPELL_ACTION(CastCounterspellAction, "counterspell")
    END_SPELL_ACTION()

    class CastRemoveCurseOnPartyAction : public CurePartyMemberAction
    {
    public:
        CastRemoveCurseOnPartyAction(PlayerbotAI* ai) : CurePartyMemberAction(ai, "remove curse", DISPEL_CURSE) {}
    };

    // Temp disable conjuration
	/*class CastConjureFoodAction : public CastBuffSpellAction
    {
	public:
		CastConjureFoodAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "conjure food") {}
	};

	class CastConjureWaterAction : public CastBuffSpellAction
    {
	public:
		CastConjureWaterAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "conjure water") {}
	};*/

	class CastIceBlockAction : public CastBuffSpellAction
    {
	public:
		CastIceBlockAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "ice block") {}
	};

    class CastMageArmorAction : public CastBuffSpellAction
    {
    public:
        CastMageArmorAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "mage armor") {}
    };

    class CastIceArmorAction : public CastBuffSpellAction
    {
    public:
        CastIceArmorAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "ice armor") {}
    };

    class CastFrostArmorAction : public CastBuffSpellAction
    {
    public:
        CastFrostArmorAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "frost armor") {}
    };

    class CastPolymorphAction : public CastBuffSpellAction
    {
    public:
        CastPolymorphAction(PlayerbotAI* ai) : CastBuffSpellAction(ai, "polymorph") {}
        virtual Value<Unit*>* GetTargetValue();
    };

	class CastBlastWaveAction : public CastSpellAction
	{
	public:
	    CastBlastWaveAction(PlayerbotAI* ai) : CastSpellAction(ai, "blast wave") {}
	};

	class CastEvocationAction : public CastSpellAction
	{
	public:
	    CastEvocationAction(PlayerbotAI* ai) : CastSpellAction(ai, "evocation") {}
	    virtual string GetTargetName() { return "self target"; }
	};

    class CastCounterspellOnEnemyHealerAction : public CastSpellOnEnemyHealerAction
    {
    public:
	    CastCounterspellOnEnemyHealerAction(PlayerbotAI* ai) : CastSpellOnEnemyHealerAction(ai, "counterspell") {}
    };
}
