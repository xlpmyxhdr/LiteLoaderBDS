// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NBCastleCorridorStairsPiece : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLECORRIDORSTAIRSPIECE
public:
    class NBCastleCorridorStairsPiece& operator=(class NBCastleCorridorStairsPiece const &) = delete;
    NBCastleCorridorStairsPiece(class NBCastleCorridorStairsPiece const &) = delete;
    NBCastleCorridorStairsPiece() = delete;
#endif

public:
    /*0*/ virtual ~NBCastleCorridorStairsPiece();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual int getWorldX(int, int);
    /*8*/ virtual int getWorldZ(int, int);
    /*9*/ virtual void placeBlock(class BlockSource &, class Block const &, int, int, int, class BoundingBox const &);
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, class Block const &, bool);
    /*12*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBCASTLECORRIDORSTAIRSPIECE
public:
#endif



};