// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ControlledByPlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYPLAYERGOAL
public:
    class ControlledByPlayerGoal& operator=(class ControlledByPlayerGoal const &) = delete;
    ControlledByPlayerGoal(class ControlledByPlayerGoal const &) = delete;
    ControlledByPlayerGoal() = delete;
#endif

public:
    /*0*/ virtual ~ControlledByPlayerGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTROLLEDBYPLAYERGOAL
public:
#endif
    MCAPI ControlledByPlayerGoal(class Mob &);



};