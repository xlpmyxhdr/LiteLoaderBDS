// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DelayActionList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYACTIONLIST
public:
    class DelayActionList& operator=(class DelayActionList const &) = delete;
    DelayActionList(class DelayActionList const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DELAYACTIONLIST
public:
#endif
    MCAPI DelayActionList();
    MCAPI enum QueueRequestResult queueRequestOrExecuteAction(class DelayRequest, class ServerLevel &, class Dimension &, unsigned __int64, bool);
    MCAPI void tick(class ServerLevel &, class Dimension &, unsigned __int64);



};