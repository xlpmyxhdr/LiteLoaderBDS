// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockDescriptor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESCRIPTOR
public:
    class BlockDescriptor& operator=(class BlockDescriptor const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKDESCRIPTOR
public:
#endif
    MCAPI BlockDescriptor(class BlockDescriptor &&);
    MCAPI BlockDescriptor(class BlockDescriptor const &);
    MCAPI BlockDescriptor(std::string const &, std::vector<class BlockDescriptor::BlockState> const &&);
    MCAPI BlockDescriptor(class HashedString const &);
    MCAPI BlockDescriptor();
    MCAPI class Block const * getBlock() const;
    MCAPI std::string const & getTagExpression() const;
    MCAPI bool isValid() const;
    MCAPI bool matches(class Block const &) const;
    MCAPI void operator=(class BlockDescriptor &&);
    MCAPI void operator=(class BlockDescriptor const &);
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;
    MCAPI ~BlockDescriptor();
    MCAPI static char const JSON_NAME_FIELD[];
    MCAPI static char const JSON_STATES_FIELD[];
    MCAPI static char const JSON_TAGS_FIELD[];
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class BlockDescriptor const &);
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class Block const &);
    MCAPI static void bindType();
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const &);
    MCAPI static class BlockDescriptor fromTagExpression(std::string const &, enum MolangVersion);


//private:
    MCAPI bool _anyTagsMatch(class Block const &) const;
    MCAPI void _resolveImpl() const;

};