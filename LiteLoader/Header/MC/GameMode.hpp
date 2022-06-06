// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class ServerPlayer;
#undef BEFORE_EXTRA

class GameMode {

#define AFTER_EXTRA
// Add Member There
public:
	LIAPI ServerPlayer* getPlayer();
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEMODE
public:
    class GameMode& operator=(class GameMode const &) = delete;
    GameMode(class GameMode const &) = delete;
    GameMode() = delete;
#endif

public:
    /*0*/ virtual ~GameMode();
    /*1*/ virtual bool startDestroyBlock(class BlockPos const &, unsigned char, bool &);
    /*2*/ virtual bool destroyBlock(class BlockPos const &, unsigned char);
    /*3*/ virtual bool continueDestroyBlock(class BlockPos const &, unsigned char, class Vec3 const &, bool &);
    /*4*/ virtual void stopDestroyBlock(class BlockPos const &);
    /*5*/ virtual void startBuildBlock(class BlockPos const &, unsigned char);
    /*6*/ virtual bool buildBlock(class BlockPos const &, unsigned char, bool);
    /*7*/ virtual void continueBuildBlock(class BlockPos const &, unsigned char);
    /*8*/ virtual void stopBuildBlock();
    /*9*/ virtual void tick();
    /*10*/ virtual float getPickRange(enum InputMode const &, bool);
    /*11*/ virtual bool useItem(class ItemStack &);
    /*12*/ virtual bool useItemOn(class ItemStack &, class BlockPos const &, unsigned char, class Vec3 const &, class Block const *);
    /*13*/ virtual bool interact(class Actor &, class Vec3 const &);
    /*14*/ virtual bool attack(class Actor &);
    /*15*/ virtual void releaseUsingItem();
    /*16*/ virtual void setTrialMode(bool);
    /*17*/ virtual bool isInTrialMode();
    /*18*/ virtual void registerUpsellScreenCallback(class std::function<void (bool)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEMODE
public:
#endif
    MCAPI GameMode(class Player &, std::unique_ptr<struct IGameModeTimer>, std::unique_ptr<struct IGameModeMessenger>);
    MCAPI bool _startDestroyBlock(class BlockPos const &, class Vec3 const &, unsigned char, bool &);
    MCAPI bool _tickContinueDestroyBlock(class BlockPos const &, class Vec3 const &, unsigned char, bool &, class std::function<void (void)> const &);
    MCAPI bool baseUseItem(class ItemStack &);
    MCAPI class gsl::final_action<class std::function<void (void)>> createBlockBreakCaptureScope(class std::function<void (class ItemStack const &, class ItemStack const &, class BlockPos const &)>);
    MCAPI unsigned char getDestroyBlockFace() const;
    MCAPI class BlockPos const & getDestroyBlockPos() const;
    MCAPI float getDestroyProgress();
    MCAPI float getDestroyRate(class Block const &);
    MCAPI float getMaxPickRange();
    MCAPI float getMaxPickRangeSqr();
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM;
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM_SQR;
    MCAPI static float const PICKRANGE_GAMEPAD;
    MCAPI static float const PICKRANGE_MOUSE;
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM;
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM_SQR;
    MCAPI static float const PICKRANGE_TOUCH_CREATIVE;
    MCAPI static float const PICKRANGE_TOUCH_SURVIVAL;
    MCAPI static float const PICKRANGE_VR_CREATIVE;
    MCAPI static float const PICKRANGE_VR_SURVIVAL;


//private:
    MCAPI bool _canDestroy(class BlockPos const &, unsigned char);
    MCAPI bool _canUseBlock(class Block const &);
    MCAPI bool _creativeDestroyBlock(class BlockPos const &, unsigned char);

};