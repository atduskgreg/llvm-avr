What? Who knows.

To build:

* Hack your LLVM tree to include AVR in TARGETS_TO_BUILD in the configure script for the LLVM tree you're using:

<pre><code>
case "$enableval" in
  all) TARGETS_TO_BUILD="X86 Sparc PowerPC Alpha IA64 ARM Mips CellSPU PIC16 CBackend MSIL CppBackend" ;;
  host-only)
    case "$llvm_cv_target_arch" in
      x86)     TARGETS_TO_BUILD="X86" ;;
      x86_64)  TARGETS_TO_BUILD="X86" ;;
      Sparc)   TARGETS_TO_BUILD="Sparc" ;;
      PowerPC) TARGETS_TO_BUILD="PowerPC" ;;
      Alpha)   TARGETS_TO_BUILD="Alpha" ;;
      IA64)    TARGETS_TO_BUILD="IA64" ;;
      ARM)     TARGETS_TO_BUILD="ARM" ;;
      Mips)    TARGETS_TO_BUILD="Mips" ;;
      CellSPU|SPU) TARGETS_TO_BUILD="CellSPU" ;;
      PIC16)   TARGETS_TO_BUILD="PIC16" ;;
      AVR)   TARGETS_TO_BUILD="AVR" ;;
      *)       { { echo "$as_me:$LINENO: error: Can not set target to build" >&5
echo "$as_me: error: Can not set target to build" >&2;}
   { (exit 1); exit 1; }; } ;;
    esac
    ;;
  *)for a_target in `echo $enableval|sed -e 's/,/ /g' ` ; do
      case "$a_target" in
        x86)     TARGETS_TO_BUILD="X86 $TARGETS_TO_BUILD" ;;
        x86_64)  TARGETS_TO_BUILD="X86 $TARGETS_TO_BUILD" ;;
        sparc)   TARGETS_TO_BUILD="Sparc $TARGETS_TO_BUILD" ;;
        powerpc) TARGETS_TO_BUILD="PowerPC $TARGETS_TO_BUILD" ;;
        alpha)   TARGETS_TO_BUILD="Alpha $TARGETS_TO_BUILD" ;;
        ia64)    TARGETS_TO_BUILD="IA64 $TARGETS_TO_BUILD" ;;
        arm)     TARGETS_TO_BUILD="ARM $TARGETS_TO_BUILD" ;;
        mips)    TARGETS_TO_BUILD="Mips $TARGETS_TO_BUILD" ;;
        spu)     TARGETS_TO_BUILD="CellSPU $TARGETS_TO_BUILD" ;;
        pic16)   TARGETS_TO_BUILD="PIC16 $TARGETS_TO_BUILD" ;;
        avr)     TARGETS_TO_BUILD="AVR $TARGETS_TO_BUILD" ;;
        cbe)     TARGETS_TO_BUILD="CBackend $TARGETS_TO_BUILD" ;;
        msil)    TARGETS_TO_BUILD="MSIL $TARGETS_TO_BUILD" ;;
        cpp)     TARGETS_TO_BUILD="CppBackend $TARGETS_TO_BUILD" ;;
        *) { { echo "$as_me:$LINENO: error: Unrecognized target $a_target" >&5
echo "$as_me: error: Unrecognized target $a_target" >&2;}
   { (exit 1); exit 1; }; } ;;
      esac
  done
  ;;
esac
TARGETS_TO_BUILD=$TARGETS_TO_BUILD
</code></pre>

* Add AVR to the top-level LLVM `Makefile` like so:

    TARGETS_TO_BUILD=X86 Sparc PowerPC Alpha IA64 ARM Mips CellSPU PIC16 CBackend MSIL CppBackend AVR
    
