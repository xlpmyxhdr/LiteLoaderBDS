// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NpcDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDEFINITION
public:
    class NpcDefinition& operator=(class NpcDefinition const &) = delete;
    NpcDefinition(class NpcDefinition const &) = delete;
    NpcDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCDEFINITION
public:
#endif
    MCAPI void initialize(class EntityContext &, class NpcComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NpcDefinition>> &);



};