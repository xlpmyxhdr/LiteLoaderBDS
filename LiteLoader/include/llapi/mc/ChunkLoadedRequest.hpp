/**
 * @file  ChunkLoadedRequest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkLoadedRequest.
 *
 */
class ChunkLoadedRequest {

#define AFTER_EXTRA
// Add Member There
    char filler[128];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADEDREQUEST
public:
    class ChunkLoadedRequest& operator=(class ChunkLoadedRequest const &) = delete;
    ChunkLoadedRequest(class ChunkLoadedRequest const &) = delete;
    ChunkLoadedRequest() = delete;
#endif

public:
    /**
     * @symbol ??0ChunkLoadedRequest@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@2@_N@Z
     * @hash   -246310923
     */
    MCAPI ChunkLoadedRequest(std::string const &, std::unique_ptr<class IRequestAction>, bool);
    /**
     * @symbol ??0ChunkLoadedRequest@@QEAA@AEBUBounds@@V?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@std@@_N2@Z
     * @hash   229060410
     */
    MCAPI ChunkLoadedRequest(struct Bounds const &, std::unique_ptr<class IRequestAction>, bool, bool);
    /**
     * @symbol ??0ChunkLoadedRequest@@QEAA@$$QEAV0@@Z
     * @hash   2027131395
     */
    MCAPI ChunkLoadedRequest(class ChunkLoadedRequest &&);
    /**
     * @symbol ?areAllChunksLoaded@ChunkLoadedRequest@@QEBA?AW4ChunksLoadedStatus@@AEAVDimension@@UTick@@@Z
     * @hash   525536338
     */
    MCAPI enum ChunksLoadedStatus areAllChunksLoaded(class Dimension &, struct Tick) const;
    /**
     * @symbol ?areaContainsChunk@ChunkLoadedRequest@@QEBA_NAEBVLevelChunk@@@Z
     * @hash   197948031
     */
    MCAPI bool areaContainsChunk(class LevelChunk const &) const;
    /**
     * @symbol ?executeAction@ChunkLoadedRequest@@QEAAXAEAVServerLevel@@AEAVDimension@@@Z
     * @hash   -12380095
     */
    MCAPI void executeAction(class ServerLevel &, class Dimension &);
    /**
     * @symbol ?getSerializationId@ChunkLoadedRequest@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -793673538
     */
    MCAPI std::string const & getSerializationId() const;
    /**
     * @symbol ?isValid@ChunkLoadedRequest@@QEBA_NXZ
     * @hash   -815552198
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?serialize@ChunkLoadedRequest@@QEAA?AVCompoundTag@@W4ChunkRequestListType@@@Z
     * @hash   -1692280353
     */
    MCAPI class CompoundTag serialize(enum ChunkRequestListType);
    /**
     * @symbol ?setSerializationId@ChunkLoadedRequest@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1261267796
     */
    MCAPI void setSerializationId(std::string const &);
    /**
     * @symbol ?tickingAreaMatches@ChunkLoadedRequest@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1591930217
     */
    MCAPI bool tickingAreaMatches(std::string const &) const;
    /**
     * @symbol ??1ChunkLoadedRequest@@QEAA@XZ
     * @hash   1129196215
     */
    MCAPI ~ChunkLoadedRequest();
    /**
     * @symbol ?isValidTag@ChunkLoadedRequest@@SA_NAEBVCompoundTag@@@Z
     * @hash   -528103491
     */
    MCAPI static bool isValidTag(class CompoundTag const &);
    /**
     * @symbol ?load@ChunkLoadedRequest@@SA?AUDeserializedChunkLoadedRequest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVICommandOriginLoader@@0@Z
     * @hash   -439436075
     */
    MCAPI static struct DeserializedChunkLoadedRequest load(std::string const &, class CompoundTag const &, class ICommandOriginLoader &, std::string const &);

//private:
    /**
     * @symbol ?_getTickingArea@ChunkLoadedRequest@@AEBAPEBVITickingAreaView@@AEBVDimension@@@Z
     * @hash   -1838203749
     */
    MCAPI class ITickingAreaView const * _getTickingArea(class Dimension const &) const;

private:

};