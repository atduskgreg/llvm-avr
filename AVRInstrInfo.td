include "AVRInstrFormats.td"

/* Make this AVRish */
// How to define immediate source/dest
def ADDii : AvrInst<3, 0,
                    (outs IntRegs:$dst), (ins IntRegs:$src),
                    "adiw $dst, $const",
                    [(set IntRegs:$dst), (load IntRegs:src))]>;

// TODO: the docs suggest we'll want to use a multiclass when we get to the different memory/register/immediate variations on add and friends
