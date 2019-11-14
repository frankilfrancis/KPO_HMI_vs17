//## Copyright (C) 2010 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CPD_PHASE_RES_ANL_INCLUDED
#define _INC_CPD_PHASE_RES_ANL_INCLUDED

#include "CSMC_DBData.h"

class CPD_PHASE_RES_ANL
: public CSMC_DBData
{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string HEATID;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TREATID;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string PLANT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string RES_PHASENO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ENAME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ANL;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPD_PHASE_RES_ANL(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPD_PHASE_RES_ANL(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPD_PHASE_RES_ANL();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CPD_PHASE_RES_ANL();

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Internal heat identifier
  std::string getHEATID(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHEATID(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Treatment identifier
  std::string getTREATID(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTREATID(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Plant identifier
  std::string getPLANT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPLANT(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Result Phase No for storing into the Result tables
  long getRES_PHASENO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setRES_PHASENO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Element or slag compound name
  std::string getENAME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setENAME(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Analysis value
  double getANL(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setANL(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, long RES_PHASENO, const std::string& ENAME);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool deleteAnalysis(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, long RES_PHASENO);

  bool writeAnalysis(const std::string& HeatID, const std::string& TreatID, const std::string& Plant, long Res_PhaseNo, const seqAnalysis& SeqAnalysis);

};

#endif /* _INC_CPD_PHASE_RES_ANL_INCLUDED */