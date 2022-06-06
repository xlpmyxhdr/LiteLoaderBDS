// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Bedrock.hpp"
#include "ServerPlayer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ScriptNavigationResult.hpp"

#undef BEFORE_EXTRA

class SimulatedPlayer : public ServerPlayer {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI bool simulateDestory();
    LIAPI bool simulateUseItem();
    LIAPI static class SimulatedPlayer* create(std::string const& name, class BlockPos const& position, class AutomaticID<class Dimension, int> dimensionId = 0);
    LIAPI static class SimulatedPlayer* create(std::string const& name, class AutomaticID<class Dimension, int> dimensionId = 0);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYER
public:
    class SimulatedPlayer& operator=(class SimulatedPlayer const &) = delete;
    SimulatedPlayer(class SimulatedPlayer const &) = delete;
    SimulatedPlayer() = delete;
#endif

public:
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~SimulatedPlayer();
    /*40*/ virtual void __unk_vfn_40();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*294*/ virtual void aiStep();
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
    /*369*/ virtual void __unk_vfn_369();
    /*374*/ virtual void __unk_vfn_374();
    /*375*/ virtual void __unk_vfn_375();
    /*377*/ virtual void __unk_vfn_377();
    /*378*/ virtual void __unk_vfn_378();
    /*384*/ virtual void __unk_vfn_384();
    /*385*/ virtual void __unk_vfn_385();
    /*388*/ virtual void __unk_vfn_388();
    /*391*/ virtual void __unk_vfn_391();
    /*392*/ virtual void __unk_vfn_392();
    /*401*/ virtual void __unk_vfn_401();
    /*402*/ virtual void __unk_vfn_402();
    /*406*/ virtual void __unk_vfn_406();
    /*413*/ virtual void __unk_vfn_413();
    /*441*/ virtual void __unk_vfn_441();
    /*442*/ virtual std::string getXuid() const;
    /*443*/ virtual struct PlayerMovementSettings const & getMovementSettings() const;
    /*445*/ virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
    /*446*/ virtual int _getSpawnChunkLimit() const;
    /*447*/ virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMULATEDPLAYER
public:
    MCVAPI bool isSimulated() const;
    MCVAPI bool useNewAi() const;
#endif
    MCAPI SimulatedPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum GameType, class NetworkIdentifier const &, unsigned char, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);
    MCAPI bool simulateAttack(class Actor *);
    MCAPI bool simulateAttack();
    MCAPI bool simulateDestroyBlock(class BlockPos const &, enum ScriptFacing);
    MCAPI void simulateDisconnect();
    MCAPI bool simulateGiveItem(class ItemStack &, bool);
    MCAPI bool simulateInteract(class Actor &);
    MCAPI bool simulateInteract(class BlockPos const &, enum ScriptFacing);
    MCAPI bool simulateInteract();
    MCAPI bool simulateJump();
    MCAPI void simulateLocalMove(class Vec3 const &, float);
    MCAPI void simulateLookAt(class Actor &);
    MCAPI void simulateLookAt(class BlockPos const &);
    MCAPI void simulateLookAt(class Vec3 const &);
    MCAPI void simulateMoveToLocation(class Vec3 const &, float);
    MCAPI struct ScriptNavigationResult simulateNavigateToEntity(class Actor &, float);
    MCAPI struct ScriptNavigationResult simulateNavigateToLocation(class Vec3 const &, float);
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3> &&, float);
    MCAPI void simulateSetBodyRotation(float);
    MCAPI bool simulateSetItem(class ItemStack &, bool, int);
    MCAPI void simulateStopDestroyingBlock();
    MCAPI void simulateStopInteracting();
    MCAPI void simulateStopMoving();
    MCAPI void simulateStopUsingItem();
    MCAPI bool simulateUseItem(class ItemStack &);
    MCAPI bool simulateUseItemInSlot(int);
    MCAPI bool simulateUseItemInSlotOnBlock(int, class BlockPos const &, enum ScriptFacing, class Vec3 const &);
    MCAPI bool simulateUseItemOnBlock(class ItemStack &, class BlockPos const &, enum ScriptFacing, class Vec3 const &);
    MCAPI void simulateWorldMove(class Vec3 const &, float);
    MCAPI static class SimulatedPlayer * create(std::string const &, class BlockPos const &, class AutomaticID<class Dimension, int>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>);
    MCAPI static class SimulatedPlayer * tryGetFromEntity(class EntityContext &, bool);


//private:
    MCAPI void _addMoveComponent();
    MCAPI struct ScriptNavigationResult _createNavigationResult(class NavigationComponent *) const;
    MCAPI float _getInputSpeed();
    MCAPI void _startCooldown();
    MCAPI bool _trySwing();
    MCAPI void _updateMovement();
    MCAPI void _updateRidingComponents();

};