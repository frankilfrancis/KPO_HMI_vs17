//## Copyright (C) 2012 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CHD_HEAT_DATA_LIQADD_INCLUDED
#define _INC_CHD_HEAT_DATA_LIQADD_INCLUDED

#include "CSMC_DBData.h"

class CHD_HEAT_DATA_LIQADD
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
  static const std::string LIQADDNO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string STEELWEIGHT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string SLAGWEIGHT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string SAMPLE_REF;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string LADLENO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string LADLETYPE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string STATUS;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string LIQADDTYPE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string DISCHARGETIME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MANUALCHANGED;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string LASTPLANT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string THERMALSTATUS;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string SCULLMASS;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string PRETREAT_CNT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string HOTMETAL_CNT;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_HEAT_DATA_LIQADD(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_HEAT_DATA_LIQADD(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHD_HEAT_DATA_LIQADD();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CHD_HEAT_DATA_LIQADD();

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
  //##Number of liquid addition
  long getLIQADDNO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setLIQADDNO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Steel weight in kg
  double getSTEELWEIGHT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setSTEELWEIGHT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Slag weight in kg
  double getSLAGWEIGHT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setSLAGWEIGHT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Unique sample reference
  long getSAMPLE_REF(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setSAMPLE_REF(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Unique ladle number
  long getLADLENO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setLADLENO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##e.g. Hot Metal -> H, Teeming -> T
  std::string getLADLETYPE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setLADLETYPE(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Status of liquid addition
  std::string getSTATUS(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setSTATUS(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Type of liquid addition
  std::string getLIQADDTYPE(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setLIQADDTYPE(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CDateTime getDISCHARGETIME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setDISCHARGETIME(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##1= Manual Changed on HMI, 0 = Not Manual changed
  long getMANUALCHANGED(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMANUALCHANGED(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Where does the ladle comes from? Taken from PD_PRETREATDATA during announcement.
  std::string getLASTPLANT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setLASTPLANT(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##H=Hot, M=Medium, C=Cold
  std::string getTHERMALSTATUS(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTHERMALSTATUS(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Eng. Unit : kg, Mass of ladle scull
  double getSCULLMASS(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setSCULLMASS(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Treatment data for liquid addition from pretreatment data
  long getPRETREAT_CNT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPRETREAT_CNT(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Treatment data for liquid addition from hot metal
  long getHOTMETAL_CNT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHOTMETAL_CNT(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, long LIQADDNO);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool copy(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, bool Commit, cCBS_ODBC_DBError &Error);

};

#endif /* _INC_CHD_HEAT_DATA_LIQADD_INCLUDED */
