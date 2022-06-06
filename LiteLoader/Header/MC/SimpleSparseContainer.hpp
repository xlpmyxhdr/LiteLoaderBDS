// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SimpleSparseContainer {

#define AFTER_EXTRA
// Add Member There
public:
inline class ItemStack const& getItem(int a0) const
{
    class ItemStack const& (SimpleSparseContainer::*rv)(int) const;
    *((void**)&rv) = dlsym("?getItem@SimpleSparseContainer@@UEBAAEBVItemStack@@H@Z");
    return (this->*rv)(std::forward<int>(a0));
}
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLESPARSECONTAINER
public:
    class SimpleSparseContainer& operator=(class SimpleSparseContainer const &) = delete;
    SimpleSparseContainer(class SimpleSparseContainer const &) = delete;
    SimpleSparseContainer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLESPARSECONTAINER
public:
    MCVAPI void containerContentChanged(int);
    MCVAPI int getContainerSize() const;
    MCVAPI class ItemStack const & getItem(int) const;
    MCVAPI int getMaxStackSize() const;
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    MCVAPI void setItem(int, class ItemStack const &);
    MCVAPI void startOpen(class Player &);
    MCVAPI void stopOpen(class Player &);
#endif
    MCAPI SimpleSparseContainer(class Container &, enum SparseContainerBackingSetType, std::unique_ptr<class ISparseContainerSetListener>, std::unique_ptr<class IPlayerContainerSetter>);
    MCAPI void clearItem(int);
    MCAPI void pushAllToBackingContainer();


//private:
    MCAPI void _setBackingContainerSlot(int, class ItemStack const &);

};