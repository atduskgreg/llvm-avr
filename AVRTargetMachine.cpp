#include "AVRTargetMachine.h"
#include "llvm/Target/TargetMachineRegistry.h"

using namespace llvm;

AVRTargetMachine::AVRTargetMachine(const Module &M, const std::string &FS)
  : DataLayout("E-p:32:32") {
}

namespace {
  // Register the targets
  RegisterTarget<AVRTargetMachine> X("avr", "  AVR 8-bit");
}
