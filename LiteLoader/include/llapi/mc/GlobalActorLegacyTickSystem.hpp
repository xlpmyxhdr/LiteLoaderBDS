/**
 * @file  GlobalActorLegacyTickSystem.hpp
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
 * @brief MC class GlobalActorLegacyTickSystem.
 *
 */
class GlobalActorLegacyTickSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALACTORLEGACYTICKSYSTEM
public:
    class GlobalActorLegacyTickSystem& operator=(class GlobalActorLegacyTickSystem const &) = delete;
    GlobalActorLegacyTickSystem(class GlobalActorLegacyTickSystem const &) = delete;
    GlobalActorLegacyTickSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -365357867
     */
    virtual ~GlobalActorLegacyTickSystem();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@GlobalActorLegacyTickSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1914545689
     */
    virtual void tick(class EntityRegistry &);

};