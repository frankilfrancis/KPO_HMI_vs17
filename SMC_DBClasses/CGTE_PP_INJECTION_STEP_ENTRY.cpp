//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 


#include "CGTE_PP_INJECTION_STEP_ENTRY.h"


//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::PLANT("PLANT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::PLANTNO("PLANTNO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::PRACNO("PRACNO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::TREATMODENO("TREATMODENO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::LIQ_ADD_AMOUNT("LIQ_ADD_AMOUNT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::PRACPHASE("PRACPHASE");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::DEVICENAME("DEVICENAME");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::STEPNO("STEPNO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::SPECEGY("SPECEGY");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::ELEC_ENERGY("ELEC_ENERGY");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::INJTYPE("INJTYPE");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::INJFLOW("INJFLOW");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::RATIO("RATIO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGTE_PP_INJECTION_STEP_ENTRY::DISPLAY_ORDER("DISPLAY_ORDER");

//##DBClassCodeUtility ! DO NOT EDIT !
CGTE_PP_INJECTION_STEP_ENTRY::CGTE_PP_INJECTION_STEP_ENTRY(cCBS_StdConnection* Connection)
:CSMC_DBData("GTE_PP_INJECTION_STEP_ENTRY",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CGTE_PP_INJECTION_STEP_ENTRY::CGTE_PP_INJECTION_STEP_ENTRY(cCBS_Connection* Connection)
:CSMC_DBData("GTE_PP_INJECTION_STEP_ENTRY",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CGTE_PP_INJECTION_STEP_ENTRY::CGTE_PP_INJECTION_STEP_ENTRY()
:CSMC_DBData("GTE_PP_INJECTION_STEP_ENTRY")
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CGTE_PP_INJECTION_STEP_ENTRY::~CGTE_PP_INJECTION_STEP_ENTRY()
{
  //please implement virtual method, to destruct your members
  doOnDestruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CGTE_PP_INJECTION_STEP_ENTRY::getPLANT(long Row)
{
  return getString(CGTE_PP_INJECTION_STEP_ENTRY::PLANT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setPLANT(const std::string& value)
{
  setString(CGTE_PP_INJECTION_STEP_ENTRY::PLANT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CGTE_PP_INJECTION_STEP_ENTRY::getPLANTNO(long Row)
{
  return getLong(CGTE_PP_INJECTION_STEP_ENTRY::PLANTNO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setPLANTNO(long value)
{
  setLong(CGTE_PP_INJECTION_STEP_ENTRY::PLANTNO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CGTE_PP_INJECTION_STEP_ENTRY::getPRACNO(long Row)
{
  return getLong(CGTE_PP_INJECTION_STEP_ENTRY::PRACNO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setPRACNO(long value)
{
  setLong(CGTE_PP_INJECTION_STEP_ENTRY::PRACNO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CGTE_PP_INJECTION_STEP_ENTRY::getTREATMODENO(long Row)
{
  return getLong(CGTE_PP_INJECTION_STEP_ENTRY::TREATMODENO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setTREATMODENO(long value)
{
  setLong(CGTE_PP_INJECTION_STEP_ENTRY::TREATMODENO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CGTE_PP_INJECTION_STEP_ENTRY::getLIQ_ADD_AMOUNT(long Row)
{
  return getLong(CGTE_PP_INJECTION_STEP_ENTRY::LIQ_ADD_AMOUNT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setLIQ_ADD_AMOUNT(long value)
{
  setLong(CGTE_PP_INJECTION_STEP_ENTRY::LIQ_ADD_AMOUNT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CGTE_PP_INJECTION_STEP_ENTRY::getPRACPHASE(long Row)
{
  return getString(CGTE_PP_INJECTION_STEP_ENTRY::PRACPHASE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setPRACPHASE(const std::string& value)
{
  setString(CGTE_PP_INJECTION_STEP_ENTRY::PRACPHASE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CGTE_PP_INJECTION_STEP_ENTRY::getDEVICENAME(long Row)
{
  return getString(CGTE_PP_INJECTION_STEP_ENTRY::DEVICENAME, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setDEVICENAME(const std::string& value)
{
  setString(CGTE_PP_INJECTION_STEP_ENTRY::DEVICENAME, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CGTE_PP_INJECTION_STEP_ENTRY::getSTEPNO(long Row)
{
  return getLong(CGTE_PP_INJECTION_STEP_ENTRY::STEPNO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setSTEPNO(long value)
{
  setLong(CGTE_PP_INJECTION_STEP_ENTRY::STEPNO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CGTE_PP_INJECTION_STEP_ENTRY::getSPECEGY(long Row)
{
  return getDouble(CGTE_PP_INJECTION_STEP_ENTRY::SPECEGY, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setSPECEGY(double value)
{
  setDouble(CGTE_PP_INJECTION_STEP_ENTRY::SPECEGY, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CGTE_PP_INJECTION_STEP_ENTRY::getELEC_ENERGY(long Row)
{
  return getLong(CGTE_PP_INJECTION_STEP_ENTRY::ELEC_ENERGY, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setELEC_ENERGY(long value)
{
  setLong(CGTE_PP_INJECTION_STEP_ENTRY::ELEC_ENERGY, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CGTE_PP_INJECTION_STEP_ENTRY::getINJTYPE(long Row)
{
  return getString(CGTE_PP_INJECTION_STEP_ENTRY::INJTYPE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setINJTYPE(const std::string& value)
{
  setString(CGTE_PP_INJECTION_STEP_ENTRY::INJTYPE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CGTE_PP_INJECTION_STEP_ENTRY::getINJFLOW(long Row)
{
  return getDouble(CGTE_PP_INJECTION_STEP_ENTRY::INJFLOW, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setINJFLOW(double value)
{
  setDouble(CGTE_PP_INJECTION_STEP_ENTRY::INJFLOW, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CGTE_PP_INJECTION_STEP_ENTRY::getRATIO(long Row)
{
  return getLong(CGTE_PP_INJECTION_STEP_ENTRY::RATIO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setRATIO(long value)
{
  setLong(CGTE_PP_INJECTION_STEP_ENTRY::RATIO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CGTE_PP_INJECTION_STEP_ENTRY::getDISPLAY_ORDER(long Row)
{
  return getLong(CGTE_PP_INJECTION_STEP_ENTRY::DISPLAY_ORDER, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGTE_PP_INJECTION_STEP_ENTRY::setDISPLAY_ORDER(long value)
{
  setLong(CGTE_PP_INJECTION_STEP_ENTRY::DISPLAY_ORDER, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
bool CGTE_PP_INJECTION_STEP_ENTRY::select(const std::string& PLANT, long PLANTNO, long PRACNO, long TREATMODENO, long LIQ_ADD_AMOUNT, const std::string& PRACPHASE, const std::string& DEVICENAME, long STEPNO)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::PLANT,PLANT);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::PLANTNO,PLANTNO);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::PRACNO,PRACNO);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::TREATMODENO,TREATMODENO);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::LIQ_ADD_AMOUNT,LIQ_ADD_AMOUNT);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::PRACPHASE,PRACPHASE);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::DEVICENAME,DEVICENAME);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::STEPNO,STEPNO);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

//## ------------------------------------END-GENERATED-CODE---------------------- 

//## ------------------------------------YOUR-CODE------------------------------- 

bool CGTE_PP_INJECTION_STEP_ENTRY::selectInjectionEntrys(long PLANTNO, long PRACNO, long TREATMODENO, const std::string&  INJTYPE)
{
  cleanWhereStatement();

  m_Statement = "Select PLANTNO,PRACNO ,TREATMODENO,LIQ_ADD_AMOUNT ,";
  m_Statement += "DEVICENAME,PRACPHASE,STEPNO ,SPECEGY,INJTYPE,INJFLOW,RATIO from " + m_TableName;


  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::PLANTNO,PLANTNO);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::PRACNO,PRACNO);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::TREATMODENO,TREATMODENO);
  addWhereClause(CGTE_PP_INJECTION_STEP_ENTRY::INJTYPE,INJTYPE);

  m_Statement += getWhereStatement()+"  order by PLANTNO,PRACNO,TREATMODENO,DEVICENAME,PRACPHASE,STEPNO; ";

  return CSMC_DBData::select();
}

