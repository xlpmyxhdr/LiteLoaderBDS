// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SimpleContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLECONTAINER
public:
    class SimpleContainer& operator=(class SimpleContainer const &) = delete;
    SimpleContainer(class SimpleContainer const &) = delete;
    SimpleContainer() = delete;
#endif

public:
    /*0*/ virtual ~SimpleContainer();
    /*2*/ virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /*5*/ virtual class ItemStack const & getItem(int) const;
    /*9*/ virtual void setItem(int, class ItemStack const &);
    /*14*/ virtual int getContainerSize() const;
    /*15*/ virtual int getMaxStackSize() const;
    /*16*/ virtual void startOpen(class Player &);
    /*17*/ virtual void stopOpen(class Player &);
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLECONTAINER
public:
#endif
    MCAPI SimpleContainer(std::string const &, bool, int, enum ContainerType);



};