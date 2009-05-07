#ifndef AVR_TARGETMACHINE_H
#define AVR_TARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetData.h"
#include "llvm/Target/TargetFrameInfo.h"

namespace llvm {

class AVRTargetMachine : public LLVMTargetMachine {
  const TargetData DataLayout; // Calculates type size and alignment
  // AVRInstrInfo InstrInfo;
  // TargetFrameInfo FrameInfo;
  
protected:
  virtual const TargetAsmInfo *createTargetAsmInfo() const;
  
public:
  
  AVRTargetMachine(const Module &M, const std::string &FS);
  
  // virtual const AVRInstrInfo *getInstrInfo() const { return &InstrInfo; }
  // virtual const TargetFrameInfo *getFrameInfo() const { return &FrameInfo; }
  // virtual const TargetRegisterInfo *getRegisterInfo() const { 
  //   return &InstrInfo.getRegisterInfo(); 
  // }
  
  virtual const TargetData *getTargetData() const { return &DataLayout; }
  static unsigned getModuleMatchQuality(const Module &M);
  
  virtual bool addInstSelector(PassManagerBase &PM, bool Fast);
  virtual bool addPreEmitPass(PassManagerBase &PM, bool Fast);
  virtual bool addAssemblyEmitter(PassManagerBase &PM, bool Fast, 
                                  raw_ostream &Out);
};

}

#endif
