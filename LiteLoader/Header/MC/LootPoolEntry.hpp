// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LootPoolEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTPOOLENTRY
public:
    class LootPoolEntry& operator=(class LootPoolEntry const &) = delete;
    LootPoolEntry(class LootPoolEntry const &) = delete;
    LootPoolEntry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTPOOLENTRY
public:
#endif
    MCAPI void createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);
    MCAPI std::vector<std::unique_ptr<class LootItemCondition>> const & getConditions() const;
    MCAPI int getWeight(float) const;
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value const &);



};