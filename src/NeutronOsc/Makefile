#
# Makefile for GENIE Neutrino Generator
#
# Author: Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
#

SHELL    = /bin/sh
NAME     = all
MAKEFILE = Makefile

# Include machine specific flags and locations (inc. files & libs)
#
include $(GENIE)/src/make/Make.include

# Require C++11 for NeutronOsc module.
CXXFLAGS         += -std=c++11

PACKAGE           = NeutronOsc
DICTIONARY        = _ROOT_DICT_NeutronOsc
LIBNAME           = libGNeutronOsc

all     : rootcint lib lib-link
install : install-inc install-lib

# Include standard package makefile targets
#
include $(GENIE)/src/make/Make.std-package-targets

FORCE:

