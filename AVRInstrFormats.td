class AvrInst<dag outs, dag ins, string asmstr, list<dag> pattern> : Instruction {
  field bits<32> Inst;
  
  let Namespace = "AVR"; // TODO: need something AVR-specific here?
  
  bits<2> op; // TODO
  let Inst{31-26} = op; // Where does AVR put the opcode?
  
  dag OutOperandList = outs;
  dag InOperandList = ins;
  let AsmString = asmstr;
  let Pattern = pattern;
}
