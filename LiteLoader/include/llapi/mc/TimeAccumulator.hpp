/**
 * @file  TimeAccumulator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TimeAccumulator.
 *
 */
class TimeAccumulator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMEACCUMULATOR
public:
    class TimeAccumulator& operator=(class TimeAccumulator const &) = delete;
    TimeAccumulator(class TimeAccumulator const &) = delete;
#endif

public:
    /**
     * @symbol ??0TimeAccumulator@@QEAA@XZ
     * @hash   -615717003
     */
    MCAPI TimeAccumulator();
    /**
     * @symbol ?getCount@TimeAccumulator@@QEBA_KXZ
     * @hash   768693577
     */
    MCAPI unsigned __int64 getCount() const;
    /**
     * @symbol ?getTimeSumAverageMS@TimeAccumulator@@QEBAMXZ
     * @hash   -527966372
     */
    MCAPI float getTimeSumAverageMS() const;
    /**
     * @symbol ?getTimeSumAverageSeconds@TimeAccumulator@@QEBAMXZ
     * @hash   -638869288
     */
    MCAPI float getTimeSumAverageSeconds() const;
    /**
     * @symbol ?getTimeSumSeconds@TimeAccumulator@@QEBAMXZ
     * @hash   -1388613756
     */
    MCAPI float getTimeSumSeconds() const;

};