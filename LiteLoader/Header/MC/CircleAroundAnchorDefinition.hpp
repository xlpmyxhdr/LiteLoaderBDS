// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CircleAroundAnchorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCLEAROUNDANCHORDEFINITION
public:
    class CircleAroundAnchorDefinition& operator=(class CircleAroundAnchorDefinition const &) = delete;
    CircleAroundAnchorDefinition(class CircleAroundAnchorDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CIRCLEAROUNDANCHORDEFINITION
public:
#endif
    MCAPI CircleAroundAnchorDefinition();
    MCAPI void initialize(class EntityContext &, class CircleAroundAnchorGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CircleAroundAnchorDefinition>> &);



};