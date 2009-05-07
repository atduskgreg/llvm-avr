##===- lib/Target/Mips/Makefile ----------------------------*- Makefile -*-===##
# 
#                     The LLVM Compiler Infrastructure
#
# This file is distributed under the University of Illinois Open Source
# License. See LICENSE.TXT for details.
# 
##===----------------------------------------------------------------------===##
LEVEL = ../../..
LIBRARYNAME = LLVMAvr
TARGET = Avr

# Make sure that tblgen is run, first thing.
BUILT_SOURCES = # AvrBlah.h.inc

include $(LEVEL)/Makefile.common
