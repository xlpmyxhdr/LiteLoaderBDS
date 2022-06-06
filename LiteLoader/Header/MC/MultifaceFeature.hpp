// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MultifaceFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACEFEATURE
public:
    class MultifaceFeature& operator=(class MultifaceFeature const &) = delete;
    MultifaceFeature(class MultifaceFeature const &) = delete;
#endif

public:
    /*0*/ virtual ~MultifaceFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIFACEFEATURE
public:
#endif
    MCAPI MultifaceFeature();


//private:
    MCAPI class std::optional<class BlockPos> _placeBlockIfPossible(class BlockSource &, class BlockPos const &, class Random &, std::vector<unsigned char> const &) const;
    MCAPI static std::vector<unsigned char> _getShuffledDirections(std::vector<unsigned char>);
    MCAPI static std::vector<unsigned char> _getShuffledDirectionsExcept(unsigned char, std::vector<unsigned char> const &);

};