//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 


#include "cCBS_StdEventLogFrameController.h"
#include "CIntfData.h"
#include "CPDL_ACTUAL_RES_ANL.h"


//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDL_ACTUAL_RES_ANL::HEATID("HEATID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDL_ACTUAL_RES_ANL::TREATID("TREATID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDL_ACTUAL_RES_ANL::PLANT("PLANT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDL_ACTUAL_RES_ANL::REVTIME("REVTIME");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDL_ACTUAL_RES_ANL::ENAME("ENAME");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPDL_ACTUAL_RES_ANL::ANL("ANL");

//##DBClassCodeUtility ! DO NOT EDIT !
CPDL_ACTUAL_RES_ANL::CPDL_ACTUAL_RES_ANL(cCBS_StdConnection* Connection)
:CSMC_DBData("PDL_ACTUAL_RES_ANL",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPDL_ACTUAL_RES_ANL::CPDL_ACTUAL_RES_ANL(cCBS_Connection* Connection)
:CSMC_DBData("PDL_ACTUAL_RES_ANL",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPDL_ACTUAL_RES_ANL::CPDL_ACTUAL_RES_ANL()
:CSMC_DBData("PDL_ACTUAL_RES_ANL")
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPDL_ACTUAL_RES_ANL::~CPDL_ACTUAL_RES_ANL()
{
  //please implement virtual method, to destruct your members
  doOnDestruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CPDL_ACTUAL_RES_ANL::getHEATID(long Row)
{
  return getString(CPDL_ACTUAL_RES_ANL::HEATID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDL_ACTUAL_RES_ANL::setHEATID(const std::string& value)
{
  setString(CPDL_ACTUAL_RES_ANL::HEATID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CPDL_ACTUAL_RES_ANL::getTREATID(long Row)
{
  return getString(CPDL_ACTUAL_RES_ANL::TREATID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDL_ACTUAL_RES_ANL::setTREATID(const std::string& value)
{
  setString(CPDL_ACTUAL_RES_ANL::TREATID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CPDL_ACTUAL_RES_ANL::getPLANT(long Row)
{
  return getString(CPDL_ACTUAL_RES_ANL::PLANT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDL_ACTUAL_RES_ANL::setPLANT(const std::string& value)
{
  setString(CPDL_ACTUAL_RES_ANL::PLANT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
CDateTime CPDL_ACTUAL_RES_ANL::getREVTIME(long Row)
{
  CDateTime D;
  D.fromDBString(getString(CPDL_ACTUAL_RES_ANL::REVTIME, Row));
  return D;
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDL_ACTUAL_RES_ANL::setREVTIME(const CDateTime& value)
{
 setString(CPDL_ACTUAL_RES_ANL::REVTIME, value.toDBString());
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CPDL_ACTUAL_RES_ANL::getENAME(long Row)
{
  return getString(CPDL_ACTUAL_RES_ANL::ENAME, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDL_ACTUAL_RES_ANL::setENAME(const std::string& value)
{
  setString(CPDL_ACTUAL_RES_ANL::ENAME, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CPDL_ACTUAL_RES_ANL::getANL(long Row)
{
  return getDouble(CPDL_ACTUAL_RES_ANL::ANL, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPDL_ACTUAL_RES_ANL::setANL(double value)
{
  setDouble(CPDL_ACTUAL_RES_ANL::ANL, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
bool CPDL_ACTUAL_RES_ANL::select(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, const CDateTime& REVTIME, const std::string& ENAME)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CPDL_ACTUAL_RES_ANL::HEATID,HEATID);
  addWhereClause(CPDL_ACTUAL_RES_ANL::TREATID,TREATID);
  addWhereClause(CPDL_ACTUAL_RES_ANL::PLANT,PLANT);
  addWhereClause(CPDL_ACTUAL_RES_ANL::REVTIME,REVTIME);
  addWhereClause(CPDL_ACTUAL_RES_ANL::ENAME,ENAME);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

//## ------------------------------------END-GENERATED-CODE---------------------- 

//## ------------------------------------YOUR-CODE------------------------------- 

bool CPDL_ACTUAL_RES_ANL::writeAnalysis(const std::string &HEATID, const std::string &TREATID, const std::string &PLANT, const CDateTime const &REVTIME, seqAnalysis &seqAnalysis )
{
  bool RetValue = true;

  for ( long i = 0 ; i < CIntfData::getLength(seqAnalysis); ++i )
  {
    sAnalysis Analysis;

    CIntfData::getAt(Analysis,seqAnalysis,i);

    std::string Element   = Analysis.Element;
    double Concentration  = Analysis.Concentration;

    setHEATID(HEATID);
    setTREATID(TREATID);
    setPLANT(PLANT);
    setREVTIME(REVTIME);
    setENAME(Element);
    setANL(Concentration);

    RetValue = RetValue && insert();

    if (!RetValue) break;
  }

  if ( !RetValue  )
  {
    cCBS_StdEventLogFrame *pEventLog = cCBS_StdEventLogFrameController::getInstance()->getpEventLog();
    sEventLogMessage sMessage = cCBS_StdEventLog::initMessage(__FILE__,__LINE__);
    pEventLog->EL_DBWriteError(sMessage, "",m_TableName.c_str(),"CPDL_ACTUAL_RES_ANL::writeAnalysis");
  }

  return RetValue;
}

