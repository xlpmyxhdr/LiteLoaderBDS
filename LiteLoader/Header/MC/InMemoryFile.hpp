// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InMemoryFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYFILE
public:
    class InMemoryFile& operator=(class InMemoryFile const &) = delete;
    InMemoryFile(class InMemoryFile const &) = delete;
    InMemoryFile() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INMEMORYFILE
public:
#endif
    MCAPI InMemoryFile(class Core::Path const &);
    MCAPI class leveldb::Status append(class leveldb::Slice const &);
    MCAPI class leveldb::Status close(enum InMemoryAccessMode);
    MCAPI class leveldb::Status flushToDisk(class leveldb::Env *);
    MCAPI class Core::PathBuffer<std::string> getFilename() const;
    MCAPI bool isMarkedDirty() const;
    MCAPI bool isSafeToDelete(std::string &) const;
    MCAPI void markForDelete();
    MCAPI class leveldb::Status open(enum InMemoryAccessMode);
    MCAPI class leveldb::Status read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *, unsigned __int64 &) const;
    MCAPI void rename(class Core::Path const &);
    MCAPI ~InMemoryFile();



};