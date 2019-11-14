//## Copyright (C) 2009 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 


#include "CPD_HEAT_DATA_CUST.h"
#include "CHD_HEAT_DATA_CUST.h"


//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::HEATID("HEATID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::TREATID("TREATID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::PLANT("PLANT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::REVTIME("REVTIME");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::FREEBORD("FREEBORD");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::LF_COOLING_WATER("LF_COOLING_WATER");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::LF_PLUG1_STATUS("LF_PLUG1_STATUS");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::LF_PLUG2_STATUS("LF_PLUG2_STATUS");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHD_HEAT_DATA_CUST::LF_OPERATOR("LF_OPERATOR");

//##DBClassCodeUtility ! DO NOT EDIT !
CHD_HEAT_DATA_CUST::CHD_HEAT_DATA_CUST(cCBS_StdConnection* Connection)
:CSMC_DBData("HD_HEAT_DATA_CUST",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CHD_HEAT_DATA_CUST::CHD_HEAT_DATA_CUST(cCBS_Connection* Connection)
:CSMC_DBData("HD_HEAT_DATA_CUST",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CHD_HEAT_DATA_CUST::CHD_HEAT_DATA_CUST()
:CSMC_DBData("HD_HEAT_DATA_CUST")
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CHD_HEAT_DATA_CUST::~CHD_HEAT_DATA_CUST()
{
  //please implement virtual method, to destruct your members
  doOnDestruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHD_HEAT_DATA_CUST::getHEATID(long Row)
{
  return getString(CHD_HEAT_DATA_CUST::HEATID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setHEATID(const std::string& value)
{
  setString(CHD_HEAT_DATA_CUST::HEATID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHD_HEAT_DATA_CUST::getTREATID(long Row)
{
  return getString(CHD_HEAT_DATA_CUST::TREATID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setTREATID(const std::string& value)
{
  setString(CHD_HEAT_DATA_CUST::TREATID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHD_HEAT_DATA_CUST::getPLANT(long Row)
{
  return getString(CHD_HEAT_DATA_CUST::PLANT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setPLANT(const std::string& value)
{
  setString(CHD_HEAT_DATA_CUST::PLANT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Date and time of last revision
CDateTime CHD_HEAT_DATA_CUST::getREVTIME(long Row)
{
  CDateTime D;
  D.fromDBString(getString(CHD_HEAT_DATA_CUST::REVTIME, Row));
  return D;
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setREVTIME(const CDateTime& value)
{
 setString(CHD_HEAT_DATA_CUST::REVTIME, value.toDBString());
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Freeboard of ladle
double CHD_HEAT_DATA_CUST::getFREEBORD(long Row)
{
  return getDouble(CHD_HEAT_DATA_CUST::FREEBORD, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setFREEBORD(double value)
{
  setDouble(CHD_HEAT_DATA_CUST::FREEBORD, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Total cooling water in m3
double CHD_HEAT_DATA_CUST::getLF_COOLING_WATER(long Row)
{
  return getDouble(CHD_HEAT_DATA_CUST::LF_COOLING_WATER, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setLF_COOLING_WATER(double value)
{
  setDouble(CHD_HEAT_DATA_CUST::LF_COOLING_WATER, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Plug status as from confirmation
std::string CHD_HEAT_DATA_CUST::getLF_PLUG1_STATUS(long Row)
{
  return getString(CHD_HEAT_DATA_CUST::LF_PLUG1_STATUS, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setLF_PLUG1_STATUS(const std::string& value)
{
  setString(CHD_HEAT_DATA_CUST::LF_PLUG1_STATUS, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Plug status as from confirmation
std::string CHD_HEAT_DATA_CUST::getLF_PLUG2_STATUS(long Row)
{
  return getString(CHD_HEAT_DATA_CUST::LF_PLUG2_STATUS, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setLF_PLUG2_STATUS(const std::string& value)
{
  setString(CHD_HEAT_DATA_CUST::LF_PLUG2_STATUS, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Name of operator at LF
std::string CHD_HEAT_DATA_CUST::getLF_OPERATOR(long Row)
{
  return getString(CHD_HEAT_DATA_CUST::LF_OPERATOR, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHD_HEAT_DATA_CUST::setLF_OPERATOR(const std::string& value)
{
  setString(CHD_HEAT_DATA_CUST::LF_OPERATOR, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
bool CHD_HEAT_DATA_CUST::select(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CHD_HEAT_DATA_CUST::HEATID,HEATID);
  addWhereClause(CHD_HEAT_DATA_CUST::TREATID,TREATID);
  addWhereClause(CHD_HEAT_DATA_CUST::PLANT,PLANT);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

//## ------------------------------------END-GENERATED-CODE---------------------- 

//## ------------------------------------YOUR-CODE------------------------------- 

bool CHD_HEAT_DATA_CUST::copy(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT, bool Commit, cCBS_ODBC_DBError &Error)
{
	bool result = !exists(HEATID, TREATID, PLANT);
	//some data found -> delete them
	if (!result)
	{
		result = deleteRows();
		if (!result)
			setLastError(std::string("ERROR_DELETE_DATA"), 0, getActStatement());
	}

  // preparing setting for source table
  CPD_HEAT_DATA_CUST PD_HEAT_DATA_CUST(m_pCBS_StdConnection);
  PD_HEAT_DATA_CUST.addWhereClause(CPD_HEAT_DATA_CUST::HEATID,HEATID);
  PD_HEAT_DATA_CUST.addWhereClause(CPD_HEAT_DATA_CUST::TREATID,TREATID);
  PD_HEAT_DATA_CUST.addWhereClause(CPD_HEAT_DATA_CUST::PLANT,PLANT);

  result = result && copyByInsert(&PD_HEAT_DATA_CUST);

  if (!result)
    Error = getLastError();

  if(Commit)
  {
    if (result)
      commit();
    else
      rollback();
  }

  return result;

}

bool CHD_HEAT_DATA_CUST::exists(const std::string& HEATID, const std::string& TREATID, const std::string& PLANT)
{
	cleanWhereStatement();

	m_Statement = "Select HEATID from " + m_TableName;

	addWhereClause(CHD_HEAT_DATA_CUST::HEATID,HEATID);
	addWhereClause(CHD_HEAT_DATA_CUST::TREATID,TREATID);
	addWhereClause(CHD_HEAT_DATA_CUST::PLANT,PLANT);
   
  std::string sWhereStatement = getWhereStatement();
  //to avoid the exception like 'Select HEATID from PP_HEAT AND ROWNUM = 1 '
  if(sWhereStatement.length() > 0 ) 
  {
    // do not use ROWNUM in "addWhereClause", ROWNUM is not a table column and where statement will be used for deletion at "deleteRows"
    m_Statement += sWhereStatement + " AND ROWNUM = 1 ;";
  }
  else
  {
    return false;
  }

	return CSMC_DBData::select();
}

