/**
 * @file  ActorDamageSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Actor;

enum ActorDamageCause : int {
    ActorDamageCause_None = -0x01,
    ActorDamageCause_Override = 0x00,
    ActorDamageCause_Contact = 0x01,
    ActorDamageCause_EntityAttack = 0x02,
    ActorDamageCause_Projectile = 0x03,
    ActorDamageCause_Suffocation = 0x04,
    FActorDamageCause_all = 0x05,
    ActorDamageCause_Fire = 0x06,
    ActorDamageCause_FireTick = 0x07,
    ActorDamageCause_Lava = 0x08,
    ActorDamageCause_Drowning = 0x09,
    ActorDamageCause_BlockExplosion = 0x0A,
    ActorDamageCause_EntityExplosion = 0x0B,
    ActorDamageCause_Void = 0x0C,
    ActorDamageCause_Suicide = 0x0D,
    ActorDamageCause_Magic = 0x0E,
    ActorDamageCause_Wither = 0x0F,
    ActorDamageCause_Starve = 0x10,
    ActorDamageCause_Anvil = 0x11,
    ActorDamageCause_Thorns = 0x12,
    ActorDamageCause_FallingBlock = 0x13,
    ActorDamageCause_Piston = 0x14,
    ActorDamageCause_FlyIntoWall = 0x15,
    ActorDamageCause_Magma = 0x16,
    ActorDamageCause_Fireworks = 0x17,
    ActorDamageCause_Lightning = 0x18,
    ActorDamageCause_Charging = 0x19,
    ActorDamageCause_Temperature = 0x1A,
    ActorDamageCause_Freezing = 0x1B,
    ActorDamageCause_Stalactite = 0x1C,
    ActorDamageCause_Stalagmite = 0x1D,
    ActorDamageCause_All = 0x1F,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDamageSource.
 *
 */
class ActorDamageSource {

#define AFTER_EXTRA
// Add Member There
    ActorDamageCause mCause;
    char filler[4];

public:
    LIAPI Actor* getEntity();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGESOURCE
public:
    class ActorDamageSource& operator=(class ActorDamageSource const &) = delete;
    ActorDamageSource(class ActorDamageSource const &) = delete;
    ActorDamageSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2076512077
     */
    virtual ~ActorDamageSource();
    /**
     * @vftbl  1
     * @symbol ?isEntitySource@ActorDamageSource@@UEBA_NXZ
     * @hash   1436838849
     */
    virtual bool isEntitySource() const;
    /**
     * @vftbl  2
     * @symbol ?isChildEntitySource@ActorDamageSource@@UEBA_NXZ
     * @hash   1356749289
     */
    virtual bool isChildEntitySource() const;
    /**
     * @vftbl  3
     * @symbol ?isBlockSource@ActorDamageSource@@UEBA_NXZ
     * @hash   1478533911
     */
    virtual bool isBlockSource() const;
    /**
     * @vftbl  4
     * @symbol ?isFire@ActorDamageSource@@UEBA_NXZ
     * @hash   752178729
     */
    virtual bool isFire() const;
    /**
     * @vftbl  5
     * @symbol ?isReducedByResistanceEffect@ActorDamageSource@@UEBA_NXZ
     * @hash   1993800798
     */
    virtual bool isReducedByResistanceEffect() const;
    /**
     * @vftbl  6
     * @symbol ?isReducedByEnchantReduction@ActorDamageSource@@UEBA_NXZ
     * @hash   505499966
     */
    virtual bool isReducedByEnchantReduction() const;
    /**
     * @vftbl  7
     * @symbol ?isReducedByArmorReduction@ActorDamageSource@@UEBA_NXZ
     * @hash   956448744
     */
    virtual bool isReducedByArmorReduction() const;
    /**
     * @vftbl  8
     * @symbol ?isFallingBlockDamage@ActorDamageSource@@UEBA_NXZ
     * @hash   -1183235064
     */
    virtual bool isFallingBlockDamage() const;
    /**
     * @vftbl  9
     * @symbol ?isFallDamage@ActorDamageSource@@UEBA_NXZ
     * @hash   -567777411
     */
    virtual bool isFallDamage() const;
    /**
     * @vftbl  10
     * @symbol ?getDeathMessage@ActorDamageSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
     * @hash   -1889528313
     */
    virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /**
     * @vftbl  11
     * @symbol ?getIsCreative@ActorDamageSource@@UEBA_NXZ
     * @hash   -515082200
     */
    virtual bool getIsCreative() const;
    /**
     * @vftbl  12
     * @symbol ?getIsWorldBuilder@ActorDamageSource@@UEBA_NXZ
     * @hash   -1446146462
     */
    virtual bool getIsWorldBuilder() const;
    /**
     * @vftbl  13
     * @symbol ?getEntityUniqueID@ActorDamageSource@@UEBA?AUActorUniqueID@@XZ
     * @hash   1126272303
     */
    virtual struct ActorUniqueID getEntityUniqueID() const;
    /**
     * @vftbl  14
     * @symbol ?getEntityType@ActorDamageSource@@UEBA?AW4ActorType@@XZ
     * @hash   499740523
     */
    virtual enum ActorType getEntityType() const;
    /**
     * @vftbl  15
     * @symbol ?getEntityCategories@ActorDamageSource@@UEBA?AW4ActorCategory@@XZ
     * @hash   -692219207
     */
    virtual enum ActorCategory getEntityCategories() const;
    /**
     * @vftbl  16
     * @symbol ?getDamagingEntityIsCreative@ActorDamageSource@@UEBA_NXZ
     * @hash   1572931799
     */
    virtual bool getDamagingEntityIsCreative() const;
    /**
     * @vftbl  17
     * @symbol ?getDamagingEntityIsWorldBuilder@ActorDamageSource@@UEBA_NXZ
     * @hash   -1021562991
     */
    virtual bool getDamagingEntityIsWorldBuilder() const;
    /**
     * @vftbl  18
     * @symbol ?getDamagingEntityUniqueID@ActorDamageSource@@UEBA?AUActorUniqueID@@XZ
     * @hash   -669021637
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /**
     * @vftbl  19
     * @symbol ?getDamagingEntityType@ActorDamageSource@@UEBA?AW4ActorType@@XZ
     * @hash   1973690231
     */
    virtual enum ActorType getDamagingEntityType() const;
    /**
     * @vftbl  20
     * @symbol ?getDamagingEntityCategories@ActorDamageSource@@UEBA?AW4ActorCategory@@XZ
     * @hash   -1585722939
     */
    virtual enum ActorCategory getDamagingEntityCategories() const;
    /**
     * @vftbl  21
     * @symbol ?clone@ActorDamageSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
     * @hash   -1030103465
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /**
     * @symbol ??0ActorDamageSource@@QEAA@W4ActorDamageCause@@@Z
     * @hash   1250691028
     */
    MCAPI ActorDamageSource(enum ActorDamageCause);
    /**
     * @symbol ?getCause@ActorDamageSource@@QEBA?AW4ActorDamageCause@@XZ
     * @hash   1194149472
     */
    MCAPI enum ActorDamageCause getCause() const;
    /**
     * @symbol ?setCause@ActorDamageSource@@QEAAXW4ActorDamageCause@@@Z
     * @hash   1954879882
     */
    MCAPI void setCause(enum ActorDamageCause);
    /**
     * @symbol ?generateDamageCauseCommandEnum@ActorDamageSource@@SA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@@2@@std@@XZ
     * @hash   -2115435175
     */
    MCAPI static std::vector<struct std::pair<std::string, enum ActorDamageCause>> generateDamageCauseCommandEnum();
    /**
     * @symbol ?isDamageCausedByMob@ActorDamageSource@@SA_NW4ActorDamageCause@@@Z
     * @hash   1793163583
     */
    MCAPI static bool isDamageCausedByMob(enum ActorDamageCause);
    /**
     * @symbol ?lookupCause@ActorDamageSource@@SA?AW4ActorDamageCause@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -25597523
     */
    MCAPI static enum ActorDamageCause lookupCause(std::string const &);
    /**
     * @symbol ?lookupCauseName@ActorDamageSource@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@Z
     * @hash   1512723741
     */
    MCAPI static std::string const & lookupCauseName(enum ActorDamageCause);

};