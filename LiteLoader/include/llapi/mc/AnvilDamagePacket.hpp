/**
 * @file  AnvilDamagePacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnvilDamagePacket.
 *
 */
class AnvilDamagePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILDAMAGEPACKET
public:
    class AnvilDamagePacket& operator=(class AnvilDamagePacket const &) = delete;
    AnvilDamagePacket(class AnvilDamagePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -685150703
     */
    virtual ~AnvilDamagePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@AnvilDamagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -955821733
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AnvilDamagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1563399160
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@AnvilDamagePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   658417759
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@AnvilDamagePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -2042323633
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0AnvilDamagePacket@@QEAA@XZ
     * @hash   1343100591
     */
    MCAPI AnvilDamagePacket();

};