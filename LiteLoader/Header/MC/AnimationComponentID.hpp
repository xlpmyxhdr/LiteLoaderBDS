// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AnimationComponentID {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONCOMPONENTID
public:
    class AnimationComponentID& operator=(class AnimationComponentID const &) = delete;
    AnimationComponentID(class AnimationComponentID const &) = delete;
    AnimationComponentID() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATIONCOMPONENTID
public:
#endif
    MCAPI AnimationComponentID(struct ActorUniqueID const &, unsigned short, enum AttachableSlotIndex);



};