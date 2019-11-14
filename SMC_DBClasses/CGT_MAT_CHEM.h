//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CGT_MAT_CHEM_INCLUDED
#define _INC_CGT_MAT_CHEM_INCLUDED

#include "CSMC_DBData.h"

class CGT_MAT_CHEM
: public CSMC_DBData
{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MAT_CODE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ENAME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string VALUE;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGT_MAT_CHEM(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGT_MAT_CHEM(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CGT_MAT_CHEM();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CGT_MAT_CHEM();

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Material code
  std::string getMAT_CODE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMAT_CODE(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Element or slag compound name
  std::string getENAME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setENAME(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Concentration (element or compound)
  double getVALUE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setVALUE(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(const std::string& MAT_CODE, const std::string& ENAME);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool deleteChem(const std::string& MAT_CODE);

  bool updateInsertChem(const std::string& MAT_CODE, seqAnalysis & SeqAnalysis, bool Replace, bool Commit, cCBS_ODBC_DBError &Error);

};

#endif /* _INC_CGT_MAT_CHEM_INCLUDED */