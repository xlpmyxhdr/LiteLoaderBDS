// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HotbarContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOTBARCONTAINERVALIDATION
public:
    class HotbarContainerValidation& operator=(class HotbarContainerValidation const &) = delete;
    HotbarContainerValidation(class HotbarContainerValidation const &) = delete;
    HotbarContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~HotbarContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual bool canDestroy(class ContainerScreenContext const &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOTBARCONTAINERVALIDATION
public:
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
#endif



};