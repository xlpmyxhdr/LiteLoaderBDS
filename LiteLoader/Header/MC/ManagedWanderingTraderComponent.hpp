// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ManagedWanderingTraderComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANAGEDWANDERINGTRADERCOMPONENT
public:
    class ManagedWanderingTraderComponent& operator=(class ManagedWanderingTraderComponent const &) = delete;
    ManagedWanderingTraderComponent(class ManagedWanderingTraderComponent const &) = delete;
    ManagedWanderingTraderComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MANAGEDWANDERINGTRADERCOMPONENT
public:
#endif
    MCAPI void initFromDefinition(class Actor &);
    MCAPI void reloadComponent(class Actor &);



};