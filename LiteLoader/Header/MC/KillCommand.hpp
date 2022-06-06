// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class KillCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KILLCOMMAND
public:
    class KillCommand& operator=(class KillCommand const &) = delete;
    KillCommand(class KillCommand const &) = delete;
    KillCommand() = delete;
#endif

public:
    /*0*/ virtual ~KillCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_KILLCOMMAND
public:
#endif
    MCAPI static void setup(class CommandRegistry &);



};