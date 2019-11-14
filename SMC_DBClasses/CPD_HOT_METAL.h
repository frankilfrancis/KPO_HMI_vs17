//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CPD_HOT_METAL_INCLUDED
#define _INC_CPD_HOT_METAL_INCLUDED

#include "CSMC_DBData.h"

class CPD_HOT_METAL
: public CSMC_DBData
{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string HOTMETAL_COUNTER;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WEIGHT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WEIGHT_CHARGED;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string WEIGHT_SLAG;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CHARGINGTIME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string LOADINGTIME;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO1;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO2;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO3;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string LADLENO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string LADLETYPE;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string SAMPLE_REF;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO1_WEIGHT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO2_WEIGHT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO3_WEIGHT;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO1_SMP_REF;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO2_SMP_REF;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TORPEDO3_SMP_REF;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string REVTIME;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPD_HOT_METAL(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPD_HOT_METAL(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPD_HOT_METAL();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CPD_HOT_METAL();

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Unique counter
  long getHOTMETAL_COUNTER(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHOTMETAL_COUNTER(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Actual charged weight
  double getWEIGHT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWEIGHT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##If material is charged the attribute is filled with copy of WEIGHT. WEIGHT is set to 0. In case of wrong assignment of HM ladle,, the previous weight can be restored in the ladle by copy from WEIGHT_CHARGED to WEIGHT.
  double getWEIGHT_CHARGED(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWEIGHT_CHARGED(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Estimated slag weight
  double getWEIGHT_SLAG(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setWEIGHT_SLAG(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Timestamp, when the hot metal was discharged
  CDateTime getCHARGINGTIME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCHARGINGTIME(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Time of loading start time at pouring time
  CDateTime getLOADINGTIME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setLOADINGTIME(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Consider charging from up to three torpedo cars
  long getTORPEDO1(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO1(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Consider charging from up to three torpedo cars
  long getTORPEDO2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO2(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Consider charging from up to three torpedo cars
  long getTORPEDO3(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO3(long value);

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
  //##Measured temperature and analysis. If the values are not available data from the cars can be taken manually. Blast furnace analysis is also possible.
  long getSAMPLE_REF(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setSAMPLE_REF(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Mass contribution from torpedo car 1
  double getTORPEDO1_WEIGHT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO1_WEIGHT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Mass contribution from torpedo car 2
  double getTORPEDO2_WEIGHT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO2_WEIGHT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Mass contribution from torpedo car 3
  double getTORPEDO3_WEIGHT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO3_WEIGHT(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Temperature and analysis from HM in car 1
  long getTORPEDO1_SMP_REF(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO1_SMP_REF(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Temperature and analysis from HM in car 2
  long getTORPEDO2_SMP_REF(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO2_SMP_REF(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Temperature and analysis from HM in car 3
  long getTORPEDO3_SMP_REF(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTORPEDO3_SMP_REF(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  //##Date and time of last revision
  CDateTime getREVTIME(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setREVTIME(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(long HOTMETAL_COUNTER);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool selectByOrder(const std::string& Order);

  bool changeHotMetalData(long HOTMETAL_COUNTER, double WEIGHT, double WEIGHT_SLAG, long SAMPLE_REF, bool Commit, cCBS_ODBC_DBError &Error);

  bool changeHotMetalData(long HOTMETAL_COUNTER, double WEIGHT, double WEIGHT_SLAG, long SAMPLE_REF, long LADLENO, const std::string& LADLETYPE, bool Commit, cCBS_ODBC_DBError &Error);

  bool doDischargeLadle(long pHotMetalCounter,bool Commit, cCBS_ODBC_DBError &Error);

  bool exists(long HOTMETAL_COUNTER);

  bool getNextHOTMETAL_COUNTER(long &HOTMETAL_COUNTER, cCBS_ODBC_DBError &Error);

  bool insertLadle(long HOTMETAL_COUNTER, const std::string &LADLETYPE, long LADLENO, double WEIGHT, bool Commit, cCBS_ODBC_DBError &Error);

  bool updateLadle(long HOTMETAL_COUNTER, const std::string &LADLETYPE, long LADLENO, bool Commit, cCBS_ODBC_DBError &Error);

  bool updateLadle(long HOTMETAL_COUNTER, const std::string &LADLETYPE, long LADLENO, double WEIGHT, bool Commit, cCBS_ODBC_DBError &Error);

  bool selectByREVTIME(const CDateTime& REVTIME, const std::string& Operator);
};

#endif /* _INC_CPD_HOT_METAL_INCLUDED */