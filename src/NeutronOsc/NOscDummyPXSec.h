//____________________________________________________________________________
/*!

\class    genie::NOscDummyPXSec

\brief    

\author   

\created  May 05, 2009

\cpright  Copyright (c) 2003-2015, GENIE Neutrino MC Generator Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NOSC_DUMMY_PXSEC_H_
#define _NOSC_DUMMY_PXSEC_H_

#include "Base/XSecAlgorithmI.h"

namespace genie {

class NOscDummyPXSec : public XSecAlgorithmI {

public:
  NOscDummyPXSec();
  NOscDummyPXSec(string config);
 ~NOscDummyPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
};

}       // genie namespace
#endif  //
