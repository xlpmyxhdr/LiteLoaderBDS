// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseContainerMenu {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECONTAINERMENU
public:
    class BaseContainerMenu& operator=(class BaseContainerMenu const &) = delete;
    BaseContainerMenu(class BaseContainerMenu const &) = delete;
    BaseContainerMenu() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECONTAINERMENU
public:
    MCVAPI void broadcastChanges();
    MCVAPI void containerContentChanged(int);
    MCVAPI enum ContainerID getContainerId() const;
    MCVAPI enum ContainerType getContainerType() const;
    MCVAPI bool isResultSlot(int);
    MCVAPI bool isSlotDirty(int);
    MCVAPI void setContainerId(enum ContainerID);
    MCVAPI void setContainerType(enum ContainerType);
    MCVAPI void setData(int, int);
    MCVAPI ~BaseContainerMenu();
#endif
    MCAPI BaseContainerMenu(class Player &, enum ContainerType);

//protected:
    MCAPI void _saveLastSlots(class Container *);


};