// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompressedNetworkPeer : public NetworkPeer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPRESSEDNETWORKPEER
public:
    class CompressedNetworkPeer& operator=(class CompressedNetworkPeer const &) = delete;
    CompressedNetworkPeer(class CompressedNetworkPeer const &) = delete;
    CompressedNetworkPeer() = delete;
#endif

public:
    /*0*/ virtual ~CompressedNetworkPeer();
    /*1*/ virtual void sendPacket(std::string const &, enum NetworkPeer::Reliability, int, unsigned short, enum Compressibility);
    /*2*/ virtual enum NetworkPeer::DataStatus receivePacket(std::string &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &);
    /*3*/ virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPRESSEDNETWORKPEER
public:
#endif
    MCAPI CompressedNetworkPeer(class std::shared_ptr<class NetworkPeer>);



};