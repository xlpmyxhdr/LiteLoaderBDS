/**
 * @file  BlockDestructibleByMiningDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDestructibleByMiningDescription.
 *
 */
struct BlockDestructibleByMiningDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYMININGDESCRIPTION
public:
    struct BlockDestructibleByMiningDescription& operator=(struct BlockDestructibleByMiningDescription const &) = delete;
    BlockDestructibleByMiningDescription(struct BlockDestructibleByMiningDescription const &) = delete;
    BlockDestructibleByMiningDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   758948330
     */
    virtual ~BlockDestructibleByMiningDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockDestructibleByMiningDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   101063177
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockDestructibleByMiningDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   77042619
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockDestructibleByMiningDescription@@UEBA_NXZ
     * @hash   -2046776975
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockDestructibleByMiningDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   215180563
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockDestructibleByMiningDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1294015007
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?NameID@BlockDestructibleByMiningDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1266780361
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockDestructibleByMiningDescription@@SAXXZ
     * @hash   -343261917
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockDestructibleByMiningDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   1644890142
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};