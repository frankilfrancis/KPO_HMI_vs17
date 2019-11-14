//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CPDE_CYCL_MEAS_DATA_INJ_INCLUDED
#define _INC_CPDE_CYCL_MEAS_DATA_INJ_INCLUDED

#include "CSMC_DBData.h"

class CPDE_CYCL_MEAS_DATA_INJ
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
  static const std::string DEVICENAME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string INJ_MAT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string REVTIME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string INJ_FLOW;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string INJ_AMOUNT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DURSINCEHEATANNOUNCE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DURSINCESTARTOFHEAT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ELEC_CONS;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string STATUS;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPDE_CYCL_MEAS_DATA_INJ(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPDE_CYCL_MEAS_DATA_INJ(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPDE_CYCL_MEAS_DATA_INJ();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CPDE_CYCL_MEAS_DATA_INJ();

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getHEATID(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHEATID(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getTREATID(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTREATID(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getPLANT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPLANT(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getDEVICENAME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDEVICENAME(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getINJ_MAT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setINJ_MAT(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CDateTime getREVTIME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setREVTIME(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getINJ_FLOW(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setINJ_FLOW(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getINJ_AMOUNT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setINJ_AMOUNT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getDURSINCEHEATANNOUNCE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDURSINCEHEATANNOUNCE(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getDURSINCESTARTOFHEAT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDURSINCESTARTOFHEAT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getELEC_CONS(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setELEC_CONS(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getSTATUS(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setSTATUS(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, const std::string& DEVICENAME, const std::string& INJ_MAT, const CDateTime& REVTIME);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool selectCurrentDataByHeat(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT);

};

#endif /* _INC_CPDE_CYCL_MEAS_DATA_INJ_INCLUDED */