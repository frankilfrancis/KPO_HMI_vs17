//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CGCE_INJECTION_RATIO_INCLUDED
#define _INC_CGCE_INJECTION_RATIO_INCLUDED

#include "CSMC_DBData.h"

class CGCE_INJECTION_RATIO
: public CSMC_DBData
{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string RATIO;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGCE_INJECTION_RATIO(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGCE_INJECTION_RATIO(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGCE_INJECTION_RATIO();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CGCE_INJECTION_RATIO();

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getRATIO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setRATIO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(long RATIO);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

};

#endif /* _INC_CGCE_INJECTION_RATIO_INCLUDED */