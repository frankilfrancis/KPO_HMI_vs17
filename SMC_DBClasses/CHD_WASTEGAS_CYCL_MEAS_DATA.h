//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CHD_WASTEGAS_CYCL_MEAS_DATA_INCLUDED
#define _INC_CHD_WASTEGAS_CYCL_MEAS_DATA_INCLUDED

#include "CSMC_DBData.h"

class CHD_WASTEGAS_CYCL_MEAS_DATA
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
  static const std::string REVTIME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string O2_MOMENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string N2_MOMENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string AR_MOMENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DURSINCEHEATANNOUNCE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DURSINCESTARTOFHEAT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ELEC_EGYTOT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WASTEGAS_CO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WASTEGAS_CO2;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WASTEGAS_O2;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WASTEGAS_AR;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WASTEGAS_HE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WASTEGAS_FLOW;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WASTEGAS_TEMP;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WASTEGAS_N2;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_WASTEGAS_CYCL_MEAS_DATA(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_WASTEGAS_CYCL_MEAS_DATA(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_WASTEGAS_CYCL_MEAS_DATA();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CHD_WASTEGAS_CYCL_MEAS_DATA();

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
  //##Date and time of last revision
  CDateTime getREVTIME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setREVTIME(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Metallurgical Nm3 since start of heat
  double getO2_MOMENT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setO2_MOMENT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Metallurgical Nm3 since start of heat
  double getN2_MOMENT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setN2_MOMENT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Argon consumption
  double getAR_MOMENT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setAR_MOMENT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Duration since heat announcement
  double getDURSINCEHEATANNOUNCE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDURSINCEHEATANNOUNCE(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Duration since start of heat
  double getDURSINCESTARTOFHEAT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDURSINCESTARTOFHEAT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Total electric energy consumption in case of electric heating, kWh
  double getELEC_EGYTOT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setELEC_EGYTOT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Wast gas CO concentration if Measured
  double getWASTEGAS_CO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWASTEGAS_CO(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Waste gas CO2 concentration  if measured
  double getWASTEGAS_CO2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWASTEGAS_CO2(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Waste gas O2 concentration  if measured
  double getWASTEGAS_O2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWASTEGAS_O2(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Waste gas Ar concetration if measured
  double getWASTEGAS_AR(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWASTEGAS_AR(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Waste Gas He concetration if measured
  double getWASTEGAS_HE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWASTEGAS_HE(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Waste Gas flow
  double getWASTEGAS_FLOW(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWASTEGAS_FLOW(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Waste gas temperature if measured
  double getWASTEGAS_TEMP(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWASTEGAS_TEMP(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getWASTEGAS_N2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWASTEGAS_N2(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, const CDateTime& REVTIME);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool copy(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, long PLANTNO, bool Commit, cCBS_ODBC_DBError &Error);

};

#endif /* _INC_CHD_WASTEGAS_CYCL_MEAS_DATA_INCLUDED */