// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PropertyInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYINSTANCE
public:
    PropertyInstance(class PropertyInstance const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROPERTYINSTANCE
public:
#endif
    MCAPI PropertyInstance(class std::shared_ptr<struct PropertyDescription const>);
    MCAPI PropertyInstance();
    MCAPI struct MolangScriptArg getMolangValue() const;
    MCAPI struct PropertyDescription const * getPropertyInfo() const;
    MCAPI class Tag const * getValueTag() const;
    MCAPI bool isDirty() const;
    MCAPI class PropertyInstance & operator=(class PropertyInstance const &);
    MCAPI bool setCurrentState(class Tag const &);
    MCAPI bool setCurrentState(int);
    MCAPI void setDirty(bool);
    MCAPI bool setFloatValue(float);
    MCAPI bool setIntValue(int);
    MCAPI ~PropertyInstance();



};