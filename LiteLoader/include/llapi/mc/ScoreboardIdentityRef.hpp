/**
 * @file  ScoreboardIdentityRef.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IdentityDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScoreboardIdentityRef.
 *
 */
class ScoreboardIdentityRef {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDIDENTITYREF
public:
    class ScoreboardIdentityRef& operator=(class ScoreboardIdentityRef const &) = delete;
    ScoreboardIdentityRef(class ScoreboardIdentityRef const &) = delete;
#endif

public:
    /**
     * @symbol ??0ScoreboardIdentityRef@@QEAA@XZ
     * @hash   280550173
     */
    MCAPI ScoreboardIdentityRef();
    /**
     * @symbol ??0ScoreboardIdentityRef@@QEAA@AEBUScoreboardId@@@Z
     * @hash   1930115554
     */
    MCAPI ScoreboardIdentityRef(struct ScoreboardId const &);
    /**
     * @symbol ?getEntityId@ScoreboardIdentityRef@@QEBAAEBUActorUniqueID@@XZ
     * @hash   -1132506918
     */
    MCAPI struct ActorUniqueID const & getEntityId() const;
    /**
     * @symbol ?getFakePlayerName@ScoreboardIdentityRef@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1352512276
     */
    MCAPI std::string const & getFakePlayerName() const;
    /**
     * @symbol ?getIdentityType@ScoreboardIdentityRef@@QEBA?AW4Type@IdentityDefinition@@XZ
     * @hash   -981034058
     */
    MCAPI enum IdentityDefinition::Type getIdentityType() const;
    /**
     * @symbol ?getName@ScoreboardIdentityRef@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@3@@Z
     * @hash   -2019088626
     */
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    /**
     * @symbol ?getPlayerId@ScoreboardIdentityRef@@QEBAAEBUPlayerScoreboardId@@XZ
     * @hash   684289878
     */
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    /**
     * @symbol ?getScoreboardId@ScoreboardIdentityRef@@QEBAAEBUScoreboardId@@XZ
     * @hash   1008231880
     */
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    /**
     * @symbol ?isPlayerType@ScoreboardIdentityRef@@QEBA_NXZ
     * @hash   257352318
     */
    MCAPI bool isPlayerType() const;
    /**
     * @symbol ?modifyScoreInObjective@ScoreboardIdentityRef@@QEAA_NAEAHAEAVObjective@@HW4PlayerScoreSetFunction@@@Z
     * @hash   -1115659777
     */
    MCAPI bool modifyScoreInObjective(int &, class Objective &, int, enum PlayerScoreSetFunction);
    /**
     * @symbol ?removeFromObjective@ScoreboardIdentityRef@@QEAA_NAEAVScoreboard@@AEAVObjective@@@Z
     * @hash   -413584740
     */
    MCAPI bool removeFromObjective(class Scoreboard &, class Objective &);
    /**
     * @symbol ?Undefined@ScoreboardIdentityRef@@2V1@B
     * @hash   1247117033
     */
    MCAPI static class ScoreboardIdentityRef const Undefined;
    /**
     * @symbol ?serialize@ScoreboardIdentityRef@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV1@@Z
     * @hash   1255560535
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ScoreboardIdentityRef const &);

};