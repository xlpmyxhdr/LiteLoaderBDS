/**
 * @file  ChunkBlockPos.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

class ChunkLocalHeight {
public:
    short mVal;
    ChunkLocalHeight(short v)
    : mVal(v){};
    ChunkLocalHeight()
    : mVal(0){};
};

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkBlockPos.
 *
 */
class ChunkBlockPos {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLOCKPOS
public:
char x;
char z;
ChunkLocalHeight y;
ChunkBlockPos()
    : x(0)
    , y(0)
    , z(0){};

ChunkBlockPos(char x, short y, char z)
    : x(x)
    , y(y)
    , z(z){};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLOCKPOS
public:
    class ChunkBlockPos& operator=(class ChunkBlockPos const &) = delete;
    ChunkBlockPos(class ChunkBlockPos const &) = delete;
    ChunkBlockPos() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBLOCKPOS
#endif
    /**
     * @symbol ??0ChunkBlockPos@@QEAA@EVChunkLocalHeight@@E@Z
     */
    MCAPI ChunkBlockPos(unsigned char, class ChunkLocalHeight, unsigned char);
    /**
     * @symbol ??0ChunkBlockPos@@QEAA@AEBVBlockPos@@F@Z
     */
    MCAPI ChunkBlockPos(class BlockPos const &, short);
    /**
     * @symbol ?toPos@ChunkBlockPos@@QEBA?AVPos@@XZ
     */
    MCAPI class Pos toPos() const;
    /**
     * @symbol ?from2D@ChunkBlockPos@@SA?AV1@EE@Z
     */
    MCAPI static class ChunkBlockPos from2D(unsigned char, unsigned char);
    /**
     * @symbol ?fromLegacyIndex@ChunkBlockPos@@SA?AV1@G@Z
     */
    MCAPI static class ChunkBlockPos fromLegacyIndex(unsigned short);

};