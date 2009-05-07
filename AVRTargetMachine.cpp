#include "AVRTargetMachine.h"
#include "llvm/Target/TargetMachineRegistry.h"

using namespace llvm;

AVRTargetMachine::AVRTargetMachine(const Module &M, const std::string &FS)
  : DataLayout("E-p:32:32") {
}

const TargetAsmInfo *AVRTargetMachine::createTargetAsmInfo() const {
  return NULL;
}

bool AVRTargetMachine::addInstSelector(PassManagerBase &PM, bool Fast) {
  return false;
}

bool AVRTargetMachine::addPreEmitPass(PassManagerBase &PM, bool Fast) {
  return false;
}

bool AVRTargetMachine::addAssemblyEmitter(PassManagerBase &PM, bool Fast, 
                                raw_ostream &Out) {
                                  return false;
}

namespace {
  // Register the targets
  RegisterTarget<AVRTargetMachine> X("avr", "AVR 8-bit [experimental]");
}
