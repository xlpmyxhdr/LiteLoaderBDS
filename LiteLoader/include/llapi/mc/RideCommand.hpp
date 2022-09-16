/**
 * @file  RideCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RideCommand.
 *
 */
class RideCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDECOMMAND
public:
    class RideCommand& operator=(class RideCommand const &) = delete;
    RideCommand(class RideCommand const &) = delete;
    RideCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1288705793
     */
    virtual ~RideCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@RideCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   223729392
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@RideCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1771808768
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?evictPassengers@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1651525426
     */
    MCAPI void evictPassengers(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?startRiding@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   167720455
     */
    MCAPI void startRiding(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?stopRiding@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1747003383
     */
    MCAPI void stopRiding(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?summonPassenger@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -168011783
     */
    MCAPI void summonPassenger(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?summonVehicle@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   807033243
     */
    MCAPI void summonVehicle(class CommandOrigin const &, class CommandOutput &) const;

private:

};