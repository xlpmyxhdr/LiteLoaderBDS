// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntityComponentFactoryJson {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYJSON
public:
    class EntityComponentFactoryJson& operator=(class EntityComponentFactoryJson const &) = delete;
    EntityComponentFactoryJson(class EntityComponentFactoryJson const &) = delete;
    EntityComponentFactoryJson() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYCOMPONENTFACTORYJSON
public:
#endif
    MCAPI class IJsonDefinitionSerializer * tryGetDefinitionSerializer(std::string const &) const;



};