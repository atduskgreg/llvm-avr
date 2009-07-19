set(LLVM_TARGET_DEFINTIONS AVR.td)

tablegen(AVRGenRegisterInfo.h.inc -gen-register-desc-header)
tablegen(AVRGenInstrInfo.inc -gen-instr-desc)

add_llvm_target(AVR
  AVRTargetMachine.cpp
  AVRRegisterInfo.cpp
  )

