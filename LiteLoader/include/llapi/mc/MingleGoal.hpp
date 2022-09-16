/**
 * @file  MingleGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MingleGoal.
 *
 */
class MingleGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINGLEGOAL
public:
    class MingleGoal& operator=(class MingleGoal const &) = delete;
    MingleGoal(class MingleGoal const &) = delete;
    MingleGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -958615029
     */
    virtual ~MingleGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MingleGoal@@UEAA_NXZ
     * @hash   729459839
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MingleGoal@@UEAA_NXZ
     * @hash   1201929933
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MingleGoal@@UEAAXXZ
     * @hash   -1283751784
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@MingleGoal@@UEAAXXZ
     * @hash   -969632616
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MingleGoal@@UEAAXXZ
     * @hash   -1488916285
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MingleGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -983580255
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol ??0MingleGoal@@QEAA@AEAVMob@@MMMUActorDefinitionIdentifier@@M@Z
     * @hash   -389330893
     */
    MCAPI MingleGoal(class Mob &, float, float, float, struct ActorDefinitionIdentifier, float);

//private:
    /**
     * @symbol ?_findNewPartner@MingleGoal@@AEAAXUActorUniqueID@@@Z
     * @hash   2100744346
     */
    MCAPI void _findNewPartner(struct ActorUniqueID);
    /**
     * @symbol ?_isWithinInteractRange@MingleGoal@@AEBA_NAEAVActor@@@Z
     * @hash   356442830
     */
    MCAPI bool _isWithinInteractRange(class Actor &) const;
    /**
     * @symbol ?_lookAt@MingleGoal@@AEAAXPEAVActor@@@Z
     * @hash   538367303
     */
    MCAPI void _lookAt(class Actor *);

private:
    /**
     * @symbol ?FIND_PARTNER_INTERVAL_TICKS@MingleGoal@@0HB
     * @hash   2058621220
     */
    MCAPI static int const FIND_PARTNER_INTERVAL_TICKS;
    /**
     * @symbol ?SPEAK_INTERVAL_TICKS_MAX@MingleGoal@@0HB
     * @hash   99605889
     */
    MCAPI static int const SPEAK_INTERVAL_TICKS_MAX;
    /**
     * @symbol ?SPEAK_INTERVAL_TICKS_MIN@MingleGoal@@0HB
     * @hash   -795458005
     */
    MCAPI static int const SPEAK_INTERVAL_TICKS_MIN;

};