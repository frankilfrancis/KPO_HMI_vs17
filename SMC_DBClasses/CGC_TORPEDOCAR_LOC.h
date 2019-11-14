//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CGC_TORPEDOCAR_LOC_INCLUDED
#define _INC_CGC_TORPEDOCAR_LOC_INCLUDED

#include "CSMC_DBData.h"

class CGC_TORPEDOCAR_LOC
: public CSMC_DBData
{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARLOCNO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARLOC;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARLOC_DESCR;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGC_TORPEDOCAR_LOC(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGC_TORPEDOCAR_LOC(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGC_TORPEDOCAR_LOC();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CGC_TORPEDOCAR_LOC();

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Unique number
  long getCARLOCNO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARLOCNO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Torpedo car location (short)
  std::string getCARLOC(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARLOC(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Full meaningful description
  std::string getCARLOC_DESCR(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARLOC_DESCR(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(long CARLOCNO);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

};

#endif /* _INC_CGC_TORPEDOCAR_LOC_INCLUDED */