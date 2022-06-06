// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BatchedNetworkPeer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BATCHEDNETWORKPEER
public:
    class BatchedNetworkPeer& operator=(class BatchedNetworkPeer const &) = delete;
    BatchedNetworkPeer(class BatchedNetworkPeer const &) = delete;
    BatchedNetworkPeer() = delete;
#endif

public:
    /*0*/ virtual ~BatchedNetworkPeer();
    /*1*/ virtual void sendPacket(std::string const &, enum NetworkPeer::Reliability, int, unsigned short, enum Compressibility);
    /*2*/ virtual enum NetworkPeer::DataStatus receivePacket(std::string &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &);
    /*3*/ virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /*4*/ virtual void update();
    /*5*/ virtual void flush(class std::function<void (void)> &&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BATCHEDNETWORKPEER
public:
#endif
    MCAPI BatchedNetworkPeer(class std::shared_ptr<class NetworkPeer>, class Scheduler &);
    MCAPI void setAsyncEnabled(bool);


//private:
    MCAPI void _startSendTask();

};