// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnchantBookForTradingFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTBOOKFORTRADINGFUNCTION
public:
    class EnchantBookForTradingFunction& operator=(class EnchantBookForTradingFunction const &) = delete;
    EnchantBookForTradingFunction(class EnchantBookForTradingFunction const &) = delete;
    EnchantBookForTradingFunction() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTBOOKFORTRADINGFUNCTION
public:
    MCVAPI int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    MCVAPI int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
    MCVAPI void apply(class ItemStack &, class Random &, class LootTableContext &);
    MCVAPI void apply(class ItemInstance &, class Random &, class LootTableContext &);
#endif
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);


//private:
    MCAPI class EnchantmentInstance _getRandomEnchantAndCalculateCost(class ItemStackBase &, class Random &, int &) const;

};