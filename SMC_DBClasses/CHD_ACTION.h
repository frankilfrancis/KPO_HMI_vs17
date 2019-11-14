//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CHD_ACTION_INCLUDED
#define _INC_CHD_ACTION_INCLUDED

#include "CSMC_DBData.h"

class CHD_ACTION
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
  static const std::string ACTIONNO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string REVTIME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DURSINCEHEATANNOUNCEMENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string O2_MOMENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string N2_MOMENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string AR_MOMENT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DURSINCESTARTOFHEAT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ELECEGY;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ACTIONNAME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ACTIONUNIT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ACTIONVALUE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ACTIONSTATUS;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_ACTION(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_ACTION(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_ACTION();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CHD_ACTION();

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
  //##Unique action number
  long getACTIONNO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setACTIONNO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Date and time of last revision
  CDateTime getREVTIME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setREVTIME(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Duration since heat announcement
  double getDURSINCEHEATANNOUNCEMENT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDURSINCEHEATANNOUNCEMENT(double value);

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
  //##Duration since start of heat
  double getDURSINCESTARTOFHEAT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDURSINCESTARTOFHEAT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Total electric energy consumption when action occurs in case of electric heating, kWh
  double getELECEGY(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setELECEGY(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Action name
  std::string getACTIONNAME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setACTIONNAME(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getACTIONUNIT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setACTIONUNIT(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getACTIONVALUE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setACTIONVALUE(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##0=Not Finished, 1=Finished
  long getACTIONSTATUS(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setACTIONSTATUS(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, long ACTIONNO, const CDateTime& REVTIME);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool copy(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, bool Commit, cCBS_ODBC_DBError &Error);

  bool exists(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT);

};

#endif /* _INC_CHD_ACTION_INCLUDED */