#include "AVRTargetMachine.h"

/// SparcTargetMachine ctor - Create an ILP32 architecture model
///
AVRTargetMachine::AVRTargetMachine(const Module &M, const std::string &FS)
  : DataLayout("E-p:32:32") {
}
