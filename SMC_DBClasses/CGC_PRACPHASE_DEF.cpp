//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 


#include "CGC_PRACPHASE_DEF.h"


//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGC_PRACPHASE_DEF::PLANT("PLANT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGC_PRACPHASE_DEF::PRACPHASE("PRACPHASE");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CGC_PRACPHASE_DEF::PRACPHASEDESCR("PRACPHASEDESCR");

//##DBClassCodeUtility ! DO NOT EDIT !
CGC_PRACPHASE_DEF::CGC_PRACPHASE_DEF(cCBS_StdConnection* Connection)
:CSMC_DBData("GC_PRACPHASE_DEF",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CGC_PRACPHASE_DEF::CGC_PRACPHASE_DEF(cCBS_Connection* Connection)
:CSMC_DBData("GC_PRACPHASE_DEF",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CGC_PRACPHASE_DEF::CGC_PRACPHASE_DEF()
:CSMC_DBData("GC_PRACPHASE_DEF")
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CGC_PRACPHASE_DEF::~CGC_PRACPHASE_DEF()
{
  //please implement virtual method, to destruct your members
  doOnDestruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Plant identifier
std::string CGC_PRACPHASE_DEF::getPLANT(long Row)
{
  return getString(CGC_PRACPHASE_DEF::PLANT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGC_PRACPHASE_DEF::setPLANT(const std::string& value)
{
  setString(CGC_PRACPHASE_DEF::PLANT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Practice phase name
std::string CGC_PRACPHASE_DEF::getPRACPHASE(long Row)
{
  return getString(CGC_PRACPHASE_DEF::PRACPHASE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGC_PRACPHASE_DEF::setPRACPHASE(const std::string& value)
{
  setString(CGC_PRACPHASE_DEF::PRACPHASE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CGC_PRACPHASE_DEF::getPRACPHASEDESCR(long Row)
{
  return getString(CGC_PRACPHASE_DEF::PRACPHASEDESCR, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CGC_PRACPHASE_DEF::setPRACPHASEDESCR(const std::string& value)
{
  setString(CGC_PRACPHASE_DEF::PRACPHASEDESCR, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
bool CGC_PRACPHASE_DEF::select(const std::string& PLANT, const std::string& PRACPHASE)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CGC_PRACPHASE_DEF::PLANT,PLANT);
  addWhereClause(CGC_PRACPHASE_DEF::PRACPHASE,PRACPHASE);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

//## ------------------------------------END-GENERATED-CODE---------------------- 

//## ------------------------------------YOUR-CODE------------------------------- 

