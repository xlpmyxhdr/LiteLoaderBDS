// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftableCompounds {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTABLECOMPOUNDS
public:
    class CraftableCompounds& operator=(class CraftableCompounds const &) = delete;
    CraftableCompounds(class CraftableCompounds const &) = delete;
#endif

public:
    /*0*/ virtual ~CraftableCompounds();
    /*1*/ virtual void _registerCompound(std::vector<class ItemStack> const &, class ItemStack const &, enum LabTableReactionType, enum CompoundContainerType);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTABLECOMPOUNDS
public:
#endif
    MCAPI CraftableCompounds();
    MCAPI std::vector<class ItemStack> const * getComponents(class ItemDescriptor const &) const;
    MCAPI class ItemStack const & getCompound(std::vector<class ItemStack> const &);
    MCAPI enum LabTableReactionType getReaction(std::vector<class ItemStack> const &);
    MCAPI void registerCompounds();

//protected:
    MCAPI std::string _getCompoundId(std::vector<class ItemStack> const &);
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const &, class ItemStack const &, enum LabTableReactionType, enum CompoundContainerType);
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const &, enum CompoundType, enum LabTableReactionType, enum CompoundContainerType, int);


};