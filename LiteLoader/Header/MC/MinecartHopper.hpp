// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Minecart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecartHopper : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTHOPPER
public:
    class MinecartHopper& operator=(class MinecartHopper const&) = delete;
    MinecartHopper(class MinecartHopper const&) = delete;
    MinecartHopper() = delete;
#endif

public:
    /*14*/ virtual ~MinecartHopper();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*41*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*79*/ virtual float getShadowHeightOffs();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*94*/ virtual void __unk_vfn_94();
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual void setSleeping(bool);
    /*97*/ virtual void __unk_vfn_97();
    /*99*/ virtual bool isBlocking() const;
    /*100*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual bool isSurfaceMob() const;
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*113*/ virtual bool isValidTarget(class Actor*) const;
    /*116*/ virtual void adjustDamageAmount(int&) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*128*/ virtual bool isJumping() const;
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*137*/ virtual void animateHurt();
    /*152*/ virtual void awardKillScore(class Actor&, int);
    /*156*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*157*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*158*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*160*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*174*/ virtual void __unk_vfn_174();
    /*179*/ virtual int getPortalWaitTime() const;
    /*181*/ virtual bool canChangeDimensions() const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*193*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual bool inCaravan() const;
    /*196*/ virtual void __unk_vfn_196();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*203*/ virtual void buildDebugInfo(std::string&) const;
    /*208*/ virtual int getDeathTime() const;
    /*219*/ virtual void swing();
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*226*/ virtual float getYHeadRot() const;
    /*227*/ virtual bool isWorldBuilder() const;
    /*228*/ virtual void __unk_vfn_228();
    /*229*/ virtual bool isAdventure() const;
    /*233*/ virtual bool canDestroyBlock(class Block const&) const;
    /*234*/ virtual void __unk_vfn_234();
    /*240*/ virtual void stopSpinAttack();
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*255*/ virtual void __unk_vfn_255();
    /*257*/ virtual void __unk_vfn_257();
    /*265*/ virtual void __unk_vfn_265();
    /*274*/ virtual void __unk_vfn_274();
    /*275*/ virtual void destroy(class ActorDamageSource const&, bool);
    /*276*/ virtual enum MinecartType getType();
    /*277*/ virtual class Block const* getDefaultDisplayBlock() const;
    /*278*/ virtual void __unk_vfn_278();
    /*279*/ virtual int getDefaultDisplayOffset() const;
    /*280*/ virtual void applyNaturalSlowdown(class BlockSource&);
    MCAPI MinecartHopper(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

protected:

private:

};