// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There
public:
    inline Actor* getEntity()
    {
        return _getEntity();
    }
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCONTAINERMODEL
public:
    class LevelContainerModel& operator=(class LevelContainerModel const &) = delete;
    LevelContainerModel(class LevelContainerModel const &) = delete;
    LevelContainerModel() = delete;
#endif

public:
    /*0*/ virtual void containerContentChanged(int);
    /*1*/ virtual ~LevelContainerModel();
    /*2*/ virtual void postInit();
    /*3*/ virtual void releaseResources();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual class ContainerWeakRef getContainerWeakRef() const;
    /*12*/ virtual void __unk_vfn_12();
    /*14*/ virtual bool isValid();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual class Container * _getContainer() const;
    /*21*/ virtual int _getContainerOffset() const;
    /*22*/ virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCONTAINERMODEL
public:
#endif
    MCAPI LevelContainerModel(enum ContainerEnumName, int, class Player &, struct ActorUniqueID, enum ContainerCategory);
    MCAPI LevelContainerModel(enum ContainerEnumName, int, class Player &, enum BlockActorType, class BlockPos const &, enum ContainerCategory);
    MCAPI static class Container * getContainerHelper(class Player &, struct ActorUniqueID const &);
    MCAPI static class Container * getContainerHelper(class Player &, enum BlockActorType, class BlockPos const &);


//private:
    MCAPI class Actor * _getEntity() const;
    MCAPI void _refreshSlot(int);

};