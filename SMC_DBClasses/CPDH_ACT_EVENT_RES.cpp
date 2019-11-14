//## Copyright (C) 2013 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 


#include "CPDH_ACT_EVENT_RES.h"


//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDH_ACT_EVENT_RES::HM_ID("HM_ID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDH_ACT_EVENT_RES::TREATID("TREATID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDH_ACT_EVENT_RES::PLANT("PLANT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDH_ACT_EVENT_RES::REVTIME("REVTIME");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDH_ACT_EVENT_RES::TREAT_TYPE("TREAT_TYPE");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDH_ACT_EVENT_RES::EVENT_CODE("EVENT_CODE");

//##DBClassCodeUtility ! DO NOT EDIT !
CPDH_ACT_EVENT_RES::CPDH_ACT_EVENT_RES(cCBS_StdConnection* Connection)
:CSMC_DBData("PDH_ACT_EVENT_RES",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPDH_ACT_EVENT_RES::CPDH_ACT_EVENT_RES(cCBS_Connection* Connection)
:CSMC_DBData("PDH_ACT_EVENT_RES",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPDH_ACT_EVENT_RES::CPDH_ACT_EVENT_RES()
:CSMC_DBData("PDH_ACT_EVENT_RES")
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPDH_ACT_EVENT_RES::~CPDH_ACT_EVENT_RES()
{
  //please implement virtual method, to destruct your members
  doOnDestruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CPDH_ACT_EVENT_RES::getHM_ID(long Row)
{
  return getString(CPDH_ACT_EVENT_RES::HM_ID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDH_ACT_EVENT_RES::setHM_ID(const std::string& value)
{
  setString(CPDH_ACT_EVENT_RES::HM_ID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CPDH_ACT_EVENT_RES::getTREATID(long Row)
{
  return getString(CPDH_ACT_EVENT_RES::TREATID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDH_ACT_EVENT_RES::setTREATID(const std::string& value)
{
  setString(CPDH_ACT_EVENT_RES::TREATID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CPDH_ACT_EVENT_RES::getPLANT(long Row)
{
  return getString(CPDH_ACT_EVENT_RES::PLANT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDH_ACT_EVENT_RES::setPLANT(const std::string& value)
{
  setString(CPDH_ACT_EVENT_RES::PLANT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
CDateTime CPDH_ACT_EVENT_RES::getREVTIME(long Row)
{
  CDateTime D;
  D.fromDBString(getString(CPDH_ACT_EVENT_RES::REVTIME, Row));
  return D;
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDH_ACT_EVENT_RES::setREVTIME(const CDateTime& value)
{
 setString(CPDH_ACT_EVENT_RES::REVTIME, value.toDBString());
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CPDH_ACT_EVENT_RES::getTREAT_TYPE(long Row)
{
  return getLong(CPDH_ACT_EVENT_RES::TREAT_TYPE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDH_ACT_EVENT_RES::setTREAT_TYPE(long value)
{
  setLong(CPDH_ACT_EVENT_RES::TREAT_TYPE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CPDH_ACT_EVENT_RES::getEVENT_CODE(long Row)
{
  return getLong(CPDH_ACT_EVENT_RES::EVENT_CODE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDH_ACT_EVENT_RES::setEVENT_CODE(long value)
{
  setLong(CPDH_ACT_EVENT_RES::EVENT_CODE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
bool CPDH_ACT_EVENT_RES::select(const std::string& HM_ID, const std::string& TREATID, const std::string& PLANT, const CDateTime& REVTIME)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CPDH_ACT_EVENT_RES::HM_ID,HM_ID);
  addWhereClause(CPDH_ACT_EVENT_RES::TREATID,TREATID);
  addWhereClause(CPDH_ACT_EVENT_RES::PLANT,PLANT);
  addWhereClause(CPDH_ACT_EVENT_RES::REVTIME,REVTIME);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

//## ------------------------------------END-GENERATED-CODE---------------------- 

//## ------------------------------------YOUR-CODE------------------------------- 

