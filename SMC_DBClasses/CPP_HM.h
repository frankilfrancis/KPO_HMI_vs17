//## Copyright (C) 2013 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 

#if defined (_MSC_VER) && (_MSC_VER >= 1000)
#pragma once
#endif
#ifndef _INC_CPP_HM_INCLUDED
#define _INC_CPP_HM_INCLUDED

#include "CSMC_DBData.h"

class CPP_HM
: public CSMC_DBData

{

public:
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string HM_ID;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string PRODORDERID;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string PLANTNO;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string HM_ID_CUST_PLAN;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TREATSTART_PLAN;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string TREATEND_PLAN;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string PLANNED;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string ON_REQUEST;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string HOTMETAL_COUNTER;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string LADLEFREEBOARD;
  //##DBClassCodeUtility ! DO NOT EDIT !
  static const std::string AIM_S;

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPP_HM(cCBS_StdConnection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPP_HM(cCBS_Connection* Connection);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CPP_HM();

  //##DBClassCodeUtility ! DO NOT EDIT !
  ~CPP_HM();

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getHM_ID(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHM_ID(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getPRODORDERID(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPRODORDERID(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getPLANTNO(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPLANTNO(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  std::string getHM_ID_CUST_PLAN(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHM_ID_CUST_PLAN(const std::string& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CDateTime getTREATSTART_PLAN(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTREATSTART_PLAN(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  CDateTime getTREATEND_PLAN(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setTREATEND_PLAN(const CDateTime& value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getPLANNED(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setPLANNED(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getON_REQUEST(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setON_REQUEST(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getHOTMETAL_COUNTER(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setHOTMETAL_COUNTER(long value);

  //##DBClassCodeUtility ! DO NOT EDIT !
  long getLADLEFREEBOARD(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setLADLEFREEBOARD(long value);

	//##DBClassCodeUtility ! DO NOT EDIT !
  double getAIM_S(long Row);

  //##DBClassCodeUtility ! DO NOT EDIT !
  void setAIM_S(double value);

	//##DBClassCodeUtility ! DO NOT EDIT !
  bool select(const std::string& HM_ID);

  //## ----------------------------------END-GENERATED-CODE--------------------- 

  //## ----------------------------------YOUR-CODE------------------------------ 

  bool doAnnouncement(const std::string& pHMID, const std::string& pPRODORDERID, long pPLANTNo,long pONREQUEST, long pHMCOUNTER);

  bool CPP_HM::doCancelHeat(const std::string& pHMID, const std::string& pPRODORDERID, long pPLANTNo);
  bool exists(const std::string& pHMID, const std::string& pPRODORDERID, long pPLANTNo);
  bool existsDesignHeatID(const std::string& pHM_ID_CUST_PLAN);
  bool selectHMCounter(const std::string& pHM_ID_CUST_PLAN);
  bool updateHMCounter(const std::string& pHM_ID_CUST_PLAN);
  bool selectOrderId(std::string& HM_ID);
  bool select_ProdOrderId(const std::string& HM_ID);
  bool updateHMCounter(const std::string& pHM_ID_CUST_PLAN, long pHmcounter);
  bool Exists_HM_Id(const std::string& PRODORDERID);
  bool Insert_Schedule(const std::string& PRODORDERID,long HM_COUNTER);
  bool selectInternalID(const std::string& HM_ID_CUST_PLAN);

  bool CPP_HM::select_orderid(const std::string& orderid);
	bool getMaxHMID(string &pHMId, cCBS_ODBC_DBError &pError);
	bool updateInsertPP(const string &pHMID,long pPlantNo, long pHMCounter, bool pCommit, cCBS_ODBC_DBError &pError);
	bool exists(const string& HM_ID);

	long getNextHMID();
};

#endif /* _INC_CPP_HM_INCLUDED */