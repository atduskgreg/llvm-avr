class AVRReg<string n> : Register<n> {
      field bits<5> Num;
      let Namespace = "R";
}

class GPReg<bits<5> num, string n> : AVRReg<n> {
      let Num = num;
}

def R16 : GPReg< 16, "R16">;
def R17 : GPReg< 17, "R17">;

// TODO: figure out register alignment, fix the third argument to suit
def GPRegs : RegisterClass<"R", [i8], 8, [R16, R17]>;
