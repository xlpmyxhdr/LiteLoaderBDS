// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlock : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCK
public:
    class ScriptBlock& operator=(class ScriptBlock const &) = delete;
    ScriptBlock(class ScriptBlock const &) = delete;
    ScriptBlock() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBLOCK
public:
#endif
    MCAPI ScriptBlock(class ScriptBlock &&);
    MCAPI ScriptBlock(class BlockSource &, class BlockPos, class Scripting::WeakLifetimeScope const &);
    MCAPI class Scripting::Result<class Scripting::StrongObjectHandle> getComponent(std::string const &);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptDimension> getDimension() const;
    MCAPI std::string getId() const;
    MCAPI class Scripting::StrongTypedObjectHandle<class BlockPos> getLocation() const;
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptBlockPermutation> getPermutation() const;
    MCAPI std::vector<std::string> getTags() const;
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptBlockType> getType() const;
    MCAPI bool hasTag(std::string const &) const;
    MCAPI class ScriptBlock & operator=(class ScriptBlock &&);
    MCAPI void setPermutation(class ScriptBlockPermutation const &);
    MCAPI void setType(class ScriptBlockType const &);
    MCAPI class Scripting::Result<void> setWaterlogged(bool);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlock> bind(struct Scripting::Version);



};