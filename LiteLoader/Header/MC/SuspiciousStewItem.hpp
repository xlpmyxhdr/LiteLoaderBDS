// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SuspiciousStewItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPICIOUSSTEWITEM
public:
    class SuspiciousStewItem& operator=(class SuspiciousStewItem const &) = delete;
    SuspiciousStewItem(class SuspiciousStewItem const &) = delete;
    SuspiciousStewItem() = delete;
#endif

public:
    /*0*/ virtual ~SuspiciousStewItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*82*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUSPICIOUSSTEWITEM
public:
    MCVAPI bool uniqueAuxValues() const;
#endif
    MCAPI SuspiciousStewItem(std::string const &, short);
    MCAPI static void applyStewEffect(class ItemStack const &, class Actor &);



};