// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CarrotOnAStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARROTONASTICKITEM
public:
    class CarrotOnAStickItem& operator=(class CarrotOnAStickItem const &) = delete;
    CarrotOnAStickItem(class CarrotOnAStickItem const &) = delete;
    CarrotOnAStickItem() = delete;
#endif

public:
    /*0*/ virtual ~CarrotOnAStickItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*45*/ virtual bool isHandEquipped() const;
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*55*/ virtual bool requiresInteract() const;
    /*58*/ virtual int getEnchantSlot() const;
    /*59*/ virtual int getEnchantValue() const;
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*85*/ virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /*89*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CARROTONASTICKITEM
public:
#endif
    MCAPI CarrotOnAStickItem(std::string const &, int);



};