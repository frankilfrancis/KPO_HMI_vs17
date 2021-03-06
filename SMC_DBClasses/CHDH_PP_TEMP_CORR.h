//## Copyright (C) 2013 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CHDH_PP_TEMP_CORR_INCLUDED
#define _INC_CHDH_PP_TEMP_CORR_INCLUDED

#include "CSMC_DBData.h"

class CHDH_PP_TEMP_CORR
: public CSMC_DBData

{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string HM_ID;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TREATID;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string PLANT;
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
  static const std::string TEMP_LOSS;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_FACTOR_1;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_TEMP_1;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_TEMP_2;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_FACTOR_2;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_TEMP_3;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_FACTOR_3;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_TEMP_4;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_FACTOR_4;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_TEMP_5;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string CARBIDE_CORR_FACTOR_5;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_CO_RELATION_1;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_FACTOR_10K_1;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_CO_RELATION_2;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_FACTOR_10K_2;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_CO_RELATION_3;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_FACTOR_10K_3;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_CO_RELATION_4;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_FACTOR_10K_4;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_CO_RELATION_5;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string MG_CORR_FACTOR_10K_5;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHDH_PP_TEMP_CORR(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHDH_PP_TEMP_CORR(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CHDH_PP_TEMP_CORR();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CHDH_PP_TEMP_CORR();

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getHM_ID(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHM_ID(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getTREATID(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTREATID(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getPLANT(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPLANT(const std::string& value);

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
  double getTEMP_LOSS(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTEMP_LOSS(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_FACTOR_1(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_FACTOR_1(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_TEMP_1(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_TEMP_1(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_TEMP_2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_TEMP_2(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_FACTOR_2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_FACTOR_2(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_TEMP_3(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_TEMP_3(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_FACTOR_3(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_FACTOR_3(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_TEMP_4(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_TEMP_4(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_FACTOR_4(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_FACTOR_4(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_TEMP_5(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_TEMP_5(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getCARBIDE_CORR_FACTOR_5(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setCARBIDE_CORR_FACTOR_5(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_CO_RELATION_1(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_CO_RELATION_1(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_FACTOR_10K_1(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_FACTOR_10K_1(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_CO_RELATION_2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_CO_RELATION_2(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_FACTOR_10K_2(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_FACTOR_10K_2(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_CO_RELATION_3(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_CO_RELATION_3(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_FACTOR_10K_3(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_FACTOR_10K_3(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_CO_RELATION_4(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_CO_RELATION_4(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_FACTOR_10K_4(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_FACTOR_10K_4(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_CO_RELATION_5(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_CO_RELATION_5(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  double getMG_CORR_FACTOR_10K_5(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setMG_CORR_FACTOR_10K_5(double value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  bool select(const std::string& HM_ID, const std::string& TREATID, const std::string& PLANT, long PRACNO);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool copyHDHPTempCorr(const string& pHeatId, const string& pTreatId, const string& pPlant, long pPlantno, bool pCommit);
  bool delete_HDH_PP_TEMP_CORR(const std::string& HM_ID, const std::string& TREATID, const std::string& PLANT);

};

#endif /* _INC_CHDH_PP_TEMP_CORR_INCLUDED */
