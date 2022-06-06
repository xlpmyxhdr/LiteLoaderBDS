// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DragonHoldingPatternGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONHOLDINGPATTERNGOAL
public:
    class DragonHoldingPatternGoal& operator=(class DragonHoldingPatternGoal const &) = delete;
    DragonHoldingPatternGoal(class DragonHoldingPatternGoal const &) = delete;
    DragonHoldingPatternGoal() = delete;
#endif

public:
    /*0*/ virtual ~DragonHoldingPatternGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONHOLDINGPATTERNGOAL
public:
#endif
    MCAPI DragonHoldingPatternGoal(class EnderDragon &);


//private:
    MCAPI void findNewTarget();

};