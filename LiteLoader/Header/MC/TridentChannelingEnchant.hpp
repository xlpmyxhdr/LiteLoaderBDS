// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TridentChannelingEnchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTCHANNELINGENCHANT
public:
    class TridentChannelingEnchant& operator=(class TridentChannelingEnchant const &) = delete;
    TridentChannelingEnchant(class TridentChannelingEnchant const &) = delete;
    TridentChannelingEnchant() = delete;
#endif

public:
    /*0*/ virtual ~TridentChannelingEnchant();
    /*1*/ virtual bool isCompatibleWith(enum Enchant::Type) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual int getMaxLevel() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIDENTCHANNELINGENCHANT
public:
#endif
    MCAPI TridentChannelingEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);



};