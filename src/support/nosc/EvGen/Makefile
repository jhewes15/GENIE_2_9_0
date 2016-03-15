####################################################################
# Makefile for the neutron-osc event generation driver 
# Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
####################################################################

SHELL = /bin/sh
NAME = all
MAKEFILE = Makefile

# Include machine specific flags and locations (inc. files & libs)
#
include $(GENIE)/src/make/Make.include

# Require C++11 for this event generator
CXXFLAGS += -std=c++11

GENIE_LIBS  = $(shell $(GENIE)/src/scripts/setup/genie-config --libs)
LIBRARIES  := $(GENIE_LIBS) $(LIBRARIES) $(CERN_LIBRARIES)

TGT = gevgen_nosc

NEUTRON_OSC_CODE_SOURCES := $(wildcard *.cxx)
NEUTRON_OSC_CODE_OBJECTS  = $(addsuffix .$(ObjSuf), $(basename $(NEUTRON_OSC_CODE_SOURCES)))

all: $(TGT)

gevgen_nosc: FORCE
	$(CXX) $(CXXFLAGS) -c $(NEUTRON_OSC_CODE_SOURCES) $(INCLUDES)
	$(LD) $(LDFLAGS) $(NEUTRON_OSC_CODE_OBJECTS) $(LIBRARIES) -o $(GENIE_BIN_PATH)/gevgen_nosc

purge: FORCE
	$(RM) *.o *~ core 

clean: FORCE
	$(RM) *.o *~ core $(GENIE_BIN_PATH)/gevgen_nosc

distclean: FORCE
	$(RM) $(GENIE_BIN_INSTALLATION_PATH)/gevgen_nosc

FORCE:

# DO NOT DELETE
