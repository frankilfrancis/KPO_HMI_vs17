//## Copyright (C) 2010 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 


#include "CPD_SCRAP_CONTAINER_ENTRY.h"


//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ENTRY::CONTAINERNO("CONTAINERNO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ENTRY::CONTAINERTYPE("CONTAINERTYPE");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ENTRY::MATCHARGESEQ("MATCHARGESEQ");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ENTRY::MAT_CODE("MAT_CODE");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ENTRY::MATWEIGHT("MATWEIGHT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ENTRY::MATWEIGHT_CHARGED("MATWEIGHT_CHARGED");

//##DBClassCodeUtility ! DO NOT EDIT !
CPD_SCRAP_CONTAINER_ENTRY::CPD_SCRAP_CONTAINER_ENTRY(cCBS_StdConnection* Connection)
:CSMC_DBData("PD_SCRAP_CONTAINER_ENTRY",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPD_SCRAP_CONTAINER_ENTRY::CPD_SCRAP_CONTAINER_ENTRY(cCBS_Connection* Connection)
:CSMC_DBData("PD_SCRAP_CONTAINER_ENTRY",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPD_SCRAP_CONTAINER_ENTRY::CPD_SCRAP_CONTAINER_ENTRY()
:CSMC_DBData("PD_SCRAP_CONTAINER_ENTRY")
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPD_SCRAP_CONTAINER_ENTRY::~CPD_SCRAP_CONTAINER_ENTRY()
{
  //please implement virtual method, to destruct your members
  doOnDestruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Unique identification number
long CPD_SCRAP_CONTAINER_ENTRY::getCONTAINERNO(long Row)
{
  return getLong(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERNO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ENTRY::setCONTAINERNO(long value)
{
  setLong(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERNO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##basket or chute
std::string CPD_SCRAP_CONTAINER_ENTRY::getCONTAINERTYPE(long Row)
{
  return getString(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERTYPE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ENTRY::setCONTAINERTYPE(const std::string& value)
{
  setString(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERTYPE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Charging sequence for the materials in the container
long CPD_SCRAP_CONTAINER_ENTRY::getMATCHARGESEQ(long Row)
{
  return getLong(CPD_SCRAP_CONTAINER_ENTRY::MATCHARGESEQ, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ENTRY::setMATCHARGESEQ(long value)
{
  setLong(CPD_SCRAP_CONTAINER_ENTRY::MATCHARGESEQ, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CPD_SCRAP_CONTAINER_ENTRY::getMAT_CODE(long Row)
{
  return getString(CPD_SCRAP_CONTAINER_ENTRY::MAT_CODE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ENTRY::setMAT_CODE(const std::string& value)
{
  setString(CPD_SCRAP_CONTAINER_ENTRY::MAT_CODE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Actual weight
double CPD_SCRAP_CONTAINER_ENTRY::getMATWEIGHT(long Row)
{
  return getDouble(CPD_SCRAP_CONTAINER_ENTRY::MATWEIGHT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ENTRY::setMATWEIGHT(double value)
{
  setDouble(CPD_SCRAP_CONTAINER_ENTRY::MATWEIGHT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##If material is charged the attribute is filled with copy of .MATWEIGHT., MATWEIGHT is set to 0. In case of wrong assignment of ContainerID,, the previous materials can be restored in container by copy from MATWEIGHT_CHARGED to MATWEIGHT., MATWEIGHT_CHARGED must be cleared during new assignement.
double CPD_SCRAP_CONTAINER_ENTRY::getMATWEIGHT_CHARGED(long Row)
{
  return getDouble(CPD_SCRAP_CONTAINER_ENTRY::MATWEIGHT_CHARGED, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ENTRY::setMATWEIGHT_CHARGED(double value)
{
  setDouble(CPD_SCRAP_CONTAINER_ENTRY::MATWEIGHT_CHARGED, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
bool CPD_SCRAP_CONTAINER_ENTRY::select(long CONTAINERNO, const std::string& CONTAINERTYPE, long MATCHARGESEQ)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERNO,CONTAINERNO);
  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERTYPE,CONTAINERTYPE);
  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::MATCHARGESEQ,MATCHARGESEQ);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

//## ------------------------------------END-GENERATED-CODE---------------------- 

//## ------------------------------------YOUR-CODE------------------------------- 

bool CPD_SCRAP_CONTAINER_ENTRY::selectByMatCode(long CONTAINERNO, const std::string& CONTAINERTYPE, const std::string& MAT_CODE)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERNO,CONTAINERNO);
  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERTYPE,CONTAINERTYPE);
  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::MAT_CODE,MAT_CODE);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

bool CPD_SCRAP_CONTAINER_ENTRY::deleteRow(long CONTAINERNO, const std::string& CONTAINERTYPE, long MATCHARGESEQ)
{
  cleanWhereStatement();

  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERNO,CONTAINERNO);
  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::CONTAINERTYPE,CONTAINERTYPE);
  addWhereClause(CPD_SCRAP_CONTAINER_ENTRY::MATCHARGESEQ,MATCHARGESEQ);

  return deleteRows();
}

bool CPD_SCRAP_CONTAINER_ENTRY::updateOnDischarge(long CONTAINERNO, const std::string& CONTAINERTYPE)
{
  bool result = false;

  // multiple rows selectable
  if ( select ( CONTAINERNO, CONTAINERTYPE, CSMC_DBData::unspecLong) )
  {
    for( long i = 1; i <= getLastRow(); ++i )
    {
      setMATWEIGHT_CHARGED(getMATWEIGHT(i));
      setMATWEIGHT(0.0);

      result = update();

      if ( !result )
      {
        break;
      }
    } // for( long i = 1; i <= getLastRow(); ++i )
  }

  if(result)
  {
    commit();
  }
  else 
  {
    rollback();
  }

  return result;
}

