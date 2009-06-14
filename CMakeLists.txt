set(LLVM_TARGET_DEFINTIONS AVR.td)

tablegen(AVRGenRegisterInfo.h.inc -gen-register-desc-header)

add_llvm_target(AVR
  AVRTargetMachine.cpp
  )

