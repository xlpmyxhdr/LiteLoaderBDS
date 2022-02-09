// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TemplateStructurePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPLATESTRUCTUREPIECE
public:
    class TemplateStructurePiece& operator=(class TemplateStructurePiece const&) = delete;
    TemplateStructurePiece(class TemplateStructurePiece const&) = delete;
    TemplateStructurePiece() = delete;
#endif

public:
    /*0*/ virtual ~TemplateStructurePiece();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual void __unk_vfn_6();
    /*10*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*12*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
    /*
    inline  ~TemplateStructurePiece(){
         (TemplateStructurePiece::*rv)();
        *((void**)&rv) = dlsym("??1TemplateStructurePiece@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI TemplateStructurePiece(int);

protected:
    MCAPI void _setup(class LegacyStructureTemplate&, class LegacyStructureSettings const&, class BlockPos const&);

private:
    MCAPI void _setBoundingBoxFromTemplate();

};