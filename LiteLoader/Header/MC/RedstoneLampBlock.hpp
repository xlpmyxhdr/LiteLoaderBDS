// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RedstoneLampBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONELAMPBLOCK
public:
    class RedstoneLampBlock& operator=(class RedstoneLampBlock const&) = delete;
    RedstoneLampBlock(class RedstoneLampBlock const&) = delete;
    RedstoneLampBlock() = delete;
#endif

public:
    /*0*/ virtual ~RedstoneLampBlock();
    /*4*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*10*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*17*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual bool isStrippable(class Block const&) const;
    /*25*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual bool isDoubleSlabBlock() const;
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*46*/ virtual void __unk_vfn_46();
    /*48*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*49*/ virtual bool isValidAuxValue(int) const;
    /*50*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*52*/ virtual void __unk_vfn_52();
    /*53*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*57*/ virtual void __unk_vfn_57();
    /*58*/ virtual void __unk_vfn_58();
    /*63*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*64*/ virtual void __unk_vfn_64();
    /*65*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*66*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*71*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*72*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual bool isFilteredOut(enum BlockRenderLayer) const;
    /*77*/ virtual void __unk_vfn_77();
    /*78*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*79*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
    /*80*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*81*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*82*/ virtual bool mayPick() const;
    /*84*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*86*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*88*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*90*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*92*/ virtual void __unk_vfn_92();
    /*93*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*94*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*95*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*96*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*97*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*98*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*103*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual void __unk_vfn_105();
    /*108*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*109*/ virtual void __unk_vfn_109();
    /*112*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*124*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*126*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*127*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*128*/ virtual void __unk_vfn_128();
    /*129*/ virtual int getIconYOffset() const;
    /*131*/ virtual void __unk_vfn_131();
    /*132*/ virtual int getColor(class Block const&) const;
    /*133*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*134*/ virtual void __unk_vfn_134();
    /*136*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*144*/ virtual void __unk_vfn_144();
    /*147*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*148*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*161*/ virtual void __unk_vfn_161();
    /*162*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*165*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*166*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*167*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*168*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*169*/ virtual void _addHardCodedBlockComponents();
    /*170*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*171*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*172*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*173*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void __unk_vfn_175();
    /*176*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*179*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*185*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*188*/ virtual int getExtraRenderLayers() const;
    /*191*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*
    inline bool shouldConnectToRedstone(class BlockSource& a0, class BlockPos const& a1, int a2) const{
        bool (RedstoneLampBlock::*rv)(class BlockSource&, class BlockPos const&, int) const;
        *((void**)&rv) = dlsym("?shouldConnectToRedstone@RedstoneLampBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<int>(a2));
    }
    */
    MCAPI RedstoneLampBlock(std::string const&, int, bool);

protected:

private:

};