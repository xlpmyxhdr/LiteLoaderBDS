// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldLimitChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDLIMITCHUNKSOURCE
public:
    class WorldLimitChunkSource& operator=(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource() = delete;
#endif

public:
    /*0*/ virtual ~WorldLimitChunkSource();
    /*3*/ virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /*6*/ virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum ChunkSource::LoadMode, bool);
    /*21*/ virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /*25*/ virtual bool canCreateViews() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDLIMITCHUNKSOURCE
public:
#endif
    MCAPI WorldLimitChunkSource(std::unique_ptr<class ChunkSource>, class BlockPos const &, int, int);



};