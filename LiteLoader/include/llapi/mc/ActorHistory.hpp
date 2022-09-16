/**
 * @file  ActorHistory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorHistory.
 *
 */
class ActorHistory {

#define AFTER_EXTRA
// Add Member There
public:
struct Snapshot {
    Snapshot() = delete;
    Snapshot(Snapshot const&) = delete;
    Snapshot(Snapshot const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHISTORY
public:
    class ActorHistory& operator=(class ActorHistory const &) = delete;
    ActorHistory(class ActorHistory const &) = delete;
    ActorHistory() = delete;
#endif

public:
    /**
     * @symbol ?addFrame@ActorHistory@@QEAA_NAEAUIActorMovementProxy@@_K@Z
     * @hash   -2020180105
     */
    MCAPI bool addFrame(struct IActorMovementProxy &, unsigned __int64);
    /**
     * @symbol ?createSnapshot@ActorHistory@@QEBA?AUSnapshot@1@AEAUIActorMovementProxy@@@Z
     * @hash   -751815917
     */
    MCAPI struct ActorHistory::Snapshot createSnapshot(struct IActorMovementProxy &) const;
    /**
     * @symbol ??1ActorHistory@@QEAA@XZ
     * @hash   1510774729
     */
    MCAPI ~ActorHistory();

};