//## Copyright (C) 2013 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CGTH_PP_BASE_VAL_INCLUDED
#define _INC_CGTH_PP_BASE_VAL_INCLUDED

#include "CSMC_DBData.h"

class CGTH_PP_BASE_VAL
: public CSMC_DBData

{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string PLANTNO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string PRACNO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string REVTIME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DESCR_E;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DESCR_C;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string USERCODE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string BLOW_RELATION;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CONTENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CAF2_CONTENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string S_AIM_1;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string S_AIM_2;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string S_AIM_3;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string S_AIM_4;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string S_AIM_5;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGTH_PP_BASE_VAL(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGTH_PP_BASE_VAL(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGTH_PP_BASE_VAL();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CGTH_PP_BASE_VAL();

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getPLANTNO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPLANTNO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getPRACNO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPRACNO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CDateTime getREVTIME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setREVTIME(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getDESCR_E(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDESCR_E(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getDESCR_C(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDESCR_C(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getUSERCODE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setUSERCODE(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getBLOW_RELATION(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setBLOW_RELATION(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CONTENT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CONTENT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCAF2_CONTENT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCAF2_CONTENT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getS_AIM_1(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setS_AIM_1(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getS_AIM_2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setS_AIM_2(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getS_AIM_3(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setS_AIM_3(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getS_AIM_4(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setS_AIM_4(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getS_AIM_5(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setS_AIM_5(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(long PLANTNO, long PRACNO);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

};

#endif /* _INC_CGTH_PP_BASE_VAL_INCLUDED */