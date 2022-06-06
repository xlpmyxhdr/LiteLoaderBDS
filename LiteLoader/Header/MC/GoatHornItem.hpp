// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GoatHornItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOATHORNITEM
public:
    class GoatHornItem& operator=(class GoatHornItem const &) = delete;
    GoatHornItem(class GoatHornItem const &) = delete;
    GoatHornItem() = delete;
#endif

public:
    /*0*/ virtual ~GoatHornItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*56*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*82*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*99*/ virtual class HashedString const & getCooldownType() const;
    /*100*/ virtual int getCooldownTime() const;
    /*119*/ virtual bool canBeCharged() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOATHORNITEM
public:
#endif
    MCAPI GoatHornItem(std::string const &, int);
    MCAPI static void addGoatHornVarationSaveData(class Goat &, class ItemStack &);



};