// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RakWebSocketDataFrameParser {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETDATAFRAMEPARSER
public:
    class RakWebSocketDataFrameParser& operator=(class RakWebSocketDataFrameParser const &) = delete;
    RakWebSocketDataFrameParser(class RakWebSocketDataFrameParser const &) = delete;
    RakWebSocketDataFrameParser() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKWEBSOCKETDATAFRAMEPARSER
public:
#endif
    MCAPI RakWebSocketDataFrameParser(bool);
    MCAPI class std::shared_ptr<class RakWebSocketDataFrame> readFrame(class RakNet::BitStream &);
    MCAPI void setOnFailHandler(class std::function<void (std::string const &, enum CloseStatusCode)>);
    MCAPI ~RakWebSocketDataFrameParser();


//private:
    MCAPI class std::shared_ptr<class RakWebSocketDataFrame> _failReadFrame(std::string const &, enum CloseStatusCode);

};