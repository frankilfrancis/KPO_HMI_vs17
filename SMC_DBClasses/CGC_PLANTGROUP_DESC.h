//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CGC_PLANTGROUP_DESC_INCLUDED
#define _INC_CGC_PLANTGROUP_DESC_INCLUDED

#include "CSMC_DBData.h"

class CGC_PLANTGROUP_DESC
: public CSMC_DBData
{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string UNITGROUPNO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string UNITGROUPDESCR;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string HIERARCHY;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGC_PLANTGROUP_DESC(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGC_PLANTGROUP_DESC(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGC_PLANTGROUP_DESC();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CGC_PLANTGROUP_DESC();

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Unit group number, see GC_PLANT_GROUP
  long getUNITGROUPNO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setUNITGROUPNO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getUNITGROUPDESCR(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setUNITGROUPDESCR(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getHIERARCHY(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHIERARCHY(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(long UNITGROUPNO);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

};

#endif /* _INC_CGC_PLANTGROUP_DESC_INCLUDED */