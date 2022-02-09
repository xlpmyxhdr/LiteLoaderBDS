// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CraftHandlerSmithingTable : public CraftHandlerBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERSMITHINGTABLE
public:
    class CraftHandlerSmithingTable& operator=(class CraftHandlerSmithingTable const&) = delete;
    CraftHandlerSmithingTable(class CraftHandlerSmithingTable const&) = delete;
    CraftHandlerSmithingTable() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerSmithingTable();
    /*3*/ virtual void endRequestBatch();
    /*4*/ virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*5*/ virtual void _postCraftRequest(bool);
    /*6*/ virtual class Recipes const* _getLevelRecipes() const;
    MCAPI CraftHandlerSmithingTable(class Player&, class ItemStackRequestActionCraftHandler&);

protected:

private:

};