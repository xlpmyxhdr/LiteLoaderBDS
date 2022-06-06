// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NearestAttackableTargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NearestPrioritizedAttackableTargetGoal : public NearestAttackableTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTPRIORITIZEDATTACKABLETARGETGOAL
public:
    class NearestPrioritizedAttackableTargetGoal& operator=(class NearestPrioritizedAttackableTargetGoal const &) = delete;
    NearestPrioritizedAttackableTargetGoal(class NearestPrioritizedAttackableTargetGoal const &) = delete;
    NearestPrioritizedAttackableTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~NearestPrioritizedAttackableTargetGoal();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEARESTPRIORITIZEDATTACKABLETARGETGOAL
public:
#endif
    MCAPI NearestPrioritizedAttackableTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int, bool, int, bool, bool, int, float, bool, int, bool);



};