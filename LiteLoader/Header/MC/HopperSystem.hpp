// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HopperSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERSYSTEM
public:
    class HopperSystem& operator=(class HopperSystem const &) = delete;
    HopperSystem(class HopperSystem const &) = delete;
    HopperSystem() = delete;
#endif

public:
    /*0*/ virtual ~HopperSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERSYSTEM
public:
#endif



};