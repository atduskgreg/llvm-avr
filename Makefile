##===- lib/Target/Mips/Makefile ----------------------------*- Makefile -*-===##
# 
#                     The LLVM Compiler Infrastructure
#
# This file is distributed under the University of Illinois Open Source
# License. See LICENSE.TXT for details.
# 
##===----------------------------------------------------------------------===##
LEVEL = ../../..
LIBRARYNAME = LLVMAVR
TARGET = AVR

# Make sure that tblgen is run, first thing.
BUILT_SOURCES = AVRGenRegisterInfo.inc

include $(LEVEL)/Makefile.common
