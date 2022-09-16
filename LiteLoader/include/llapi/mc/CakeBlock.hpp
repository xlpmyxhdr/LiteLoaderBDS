/**
 * @file  CakeBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CakeBlock.
 *
 */
class CakeBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAKEBLOCK
public:
    class CakeBlock& operator=(class CakeBlock const &) = delete;
    CakeBlock(class CakeBlock const &) = delete;
    CakeBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1677081731
     */
    virtual ~CakeBlock();
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -272248408
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  59
     * @hash   -213143064
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol ?checkIsPathable@CakeBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   1189866185
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  89
     * @symbol ?mayPlace@CakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -1902374656
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  98
     * @symbol ?neighborChanged@CakeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   311111735
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?getResourceCount@CakeBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -2044513061
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@CakeBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1052333272
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1383467237
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  128
     * @symbol ?getComparatorSignal@CakeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     * @hash   961174993
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  144
     * @symbol ?getVisualShape@CakeBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -623823841
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  147
     * @symbol ?getVariant@CakeBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1060120379
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @hash   1477012899
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  174
     * @symbol ?tick@CakeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -2065434149
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  179
     * @symbol ?use@CakeBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -948226438
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  180
     * @symbol ?canSurvive@CakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1239307269
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAKEBLOCK
    /**
     * @symbol ?canBeSilkTouched@CakeBlock@@EEBA_NXZ
     * @hash   -830157717
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?hasComparatorSignal@CakeBlock@@UEBA_NXZ
     * @hash   774881947
     */
    MCVAPI bool hasComparatorSignal() const;
#endif
    /**
     * @symbol ??0CakeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   889249667
     */
    MCAPI CakeBlock(std::string const &, int);
    /**
     * @symbol ?getComparatorSignalFromBites@CakeBlock@@SAHH@Z
     * @hash   981162975
     */
    MCAPI static int getComparatorSignalFromBites(int);
    /**
     * @symbol ?removeCakeSlice@CakeBlock@@SAXAEAVPlayer@@AEAVBlockSource@@AEBVBlockPos@@PEBVBlock@@@Z
     * @hash   1613779846
     */
    MCAPI static void removeCakeSlice(class Player &, class BlockSource &, class BlockPos const &, class Block const *);

};