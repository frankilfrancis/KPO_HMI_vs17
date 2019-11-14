//## Copyright (C) 2013 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 


#include "CHDH_PP_TEMP_CORR.h"


//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::HM_ID("HM_ID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::TREATID("TREATID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::PLANT("PLANT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::PRACNO("PRACNO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::REVTIME("REVTIME");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::DESCR_E("DESCR_E");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::DESCR_C("DESCR_C");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::USERCODE("USERCODE");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::TEMP_LOSS("TEMP_LOSS");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_1("CARBIDE_CORR_FACTOR_1");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_1("CARBIDE_CORR_TEMP_1");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_2("CARBIDE_CORR_TEMP_2");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_2("CARBIDE_CORR_FACTOR_2");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_3("CARBIDE_CORR_TEMP_3");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_3("CARBIDE_CORR_FACTOR_3");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_4("CARBIDE_CORR_TEMP_4");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_4("CARBIDE_CORR_FACTOR_4");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_5("CARBIDE_CORR_TEMP_5");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_5("CARBIDE_CORR_FACTOR_5");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_1("MG_CORR_CO_RELATION_1");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_1("MG_CORR_FACTOR_10K_1");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_2("MG_CORR_CO_RELATION_2");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_2("MG_CORR_FACTOR_10K_2");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_3("MG_CORR_CO_RELATION_3");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_3("MG_CORR_FACTOR_10K_3");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_4("MG_CORR_CO_RELATION_4");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_4("MG_CORR_FACTOR_10K_4");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_5("MG_CORR_CO_RELATION_5");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_5("MG_CORR_FACTOR_10K_5");

//##DBClassCodeUtility ! DO NOT EDIT !
CHDH_PP_TEMP_CORR::CHDH_PP_TEMP_CORR(cCBS_StdConnection* Connection)
:CSMC_DBData("HDH_PP_TEMP_CORR",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CHDH_PP_TEMP_CORR::CHDH_PP_TEMP_CORR(cCBS_Connection* Connection)
:CSMC_DBData("HDH_PP_TEMP_CORR",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CHDH_PP_TEMP_CORR::CHDH_PP_TEMP_CORR()
:CSMC_DBData("HDH_PP_TEMP_CORR")
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CHDH_PP_TEMP_CORR::~CHDH_PP_TEMP_CORR()
{
  //please implement virtual method, to destruct your members
  doOnDestruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHDH_PP_TEMP_CORR::getHM_ID(long Row)
{
  return getString(CHDH_PP_TEMP_CORR::HM_ID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setHM_ID(const std::string& value)
{
  setString(CHDH_PP_TEMP_CORR::HM_ID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHDH_PP_TEMP_CORR::getTREATID(long Row)
{
  return getString(CHDH_PP_TEMP_CORR::TREATID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setTREATID(const std::string& value)
{
  setString(CHDH_PP_TEMP_CORR::TREATID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHDH_PP_TEMP_CORR::getPLANT(long Row)
{
  return getString(CHDH_PP_TEMP_CORR::PLANT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setPLANT(const std::string& value)
{
  setString(CHDH_PP_TEMP_CORR::PLANT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
long CHDH_PP_TEMP_CORR::getPRACNO(long Row)
{
  return getLong(CHDH_PP_TEMP_CORR::PRACNO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setPRACNO(long value)
{
  setLong(CHDH_PP_TEMP_CORR::PRACNO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
CDateTime CHDH_PP_TEMP_CORR::getREVTIME(long Row)
{
  CDateTime D;
  D.fromDBString(getString(CHDH_PP_TEMP_CORR::REVTIME, Row));
  return D;
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setREVTIME(const CDateTime& value)
{
 setString(CHDH_PP_TEMP_CORR::REVTIME, value.toDBString());
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHDH_PP_TEMP_CORR::getDESCR_E(long Row)
{
  return getString(CHDH_PP_TEMP_CORR::DESCR_E, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setDESCR_E(const std::string& value)
{
  setString(CHDH_PP_TEMP_CORR::DESCR_E, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHDH_PP_TEMP_CORR::getDESCR_C(long Row)
{
  return getString(CHDH_PP_TEMP_CORR::DESCR_C, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setDESCR_C(const std::string& value)
{
  setString(CHDH_PP_TEMP_CORR::DESCR_C, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
std::string CHDH_PP_TEMP_CORR::getUSERCODE(long Row)
{
  return getString(CHDH_PP_TEMP_CORR::USERCODE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setUSERCODE(const std::string& value)
{
  setString(CHDH_PP_TEMP_CORR::USERCODE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getTEMP_LOSS(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::TEMP_LOSS, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setTEMP_LOSS(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::TEMP_LOSS, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_FACTOR_1(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_1, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_FACTOR_1(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_1, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_TEMP_1(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_1, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_TEMP_1(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_1, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_TEMP_2(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_2, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_TEMP_2(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_2, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_FACTOR_2(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_2, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_FACTOR_2(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_2, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_TEMP_3(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_3, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_TEMP_3(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_3, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_FACTOR_3(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_3, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_FACTOR_3(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_3, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_TEMP_4(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_4, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_TEMP_4(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_4, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_FACTOR_4(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_4, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_FACTOR_4(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_4, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_TEMP_5(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_5, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_TEMP_5(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_TEMP_5, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getCARBIDE_CORR_FACTOR_5(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_5, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setCARBIDE_CORR_FACTOR_5(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::CARBIDE_CORR_FACTOR_5, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_CO_RELATION_1(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_1, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_CO_RELATION_1(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_1, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_FACTOR_10K_1(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_1, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_FACTOR_10K_1(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_1, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_CO_RELATION_2(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_2, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_CO_RELATION_2(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_2, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_FACTOR_10K_2(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_2, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_FACTOR_10K_2(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_2, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_CO_RELATION_3(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_3, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_CO_RELATION_3(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_3, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_FACTOR_10K_3(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_3, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_FACTOR_10K_3(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_3, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_CO_RELATION_4(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_4, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_CO_RELATION_4(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_4, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_FACTOR_10K_4(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_4, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_FACTOR_10K_4(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_4, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_CO_RELATION_5(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_5, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_CO_RELATION_5(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_CO_RELATION_5, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
double CHDH_PP_TEMP_CORR::getMG_CORR_FACTOR_10K_5(long Row)
{
  return getDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_5, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CHDH_PP_TEMP_CORR::setMG_CORR_FACTOR_10K_5(double value)
{
  setDouble(CHDH_PP_TEMP_CORR::MG_CORR_FACTOR_10K_5, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
bool CHDH_PP_TEMP_CORR::select(const std::string& HM_ID, const std::string& TREATID, const std::string& PLANT, long PRACNO)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CHDH_PP_TEMP_CORR::HM_ID,HM_ID);
  addWhereClause(CHDH_PP_TEMP_CORR::TREATID,TREATID);
  addWhereClause(CHDH_PP_TEMP_CORR::PLANT,PLANT);
  addWhereClause(CHDH_PP_TEMP_CORR::PRACNO,PRACNO);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

//## ------------------------------------END-GENERATED-CODE---------------------- 

//## ------------------------------------YOUR-CODE------------------------------- 

bool CHDH_PP_TEMP_CORR::copyHDHPTempCorr(const string& pHeatId, const string& pTreatId, const string& pPlant, long pPlantno, bool pCommit)
{
	bool result=true;
	std::stringstream sql;
	//some data found -> delete them
	/*if (!result)
	{
		result = deleteRows();
		if (!result)
			setLastError(string("delete from HDH_PP_TEMP_CORR faild"), 0, "delete from HDH_PP_TEMP_CORR where " + getWhereStatement());
	}*/
// pracno =0  for testing
	sql << "insert into HDH_PP_TEMP_CORR (HM_ID,TREATID,PLANT,PRACNO,REVTIME,DESCR_E,DESCR_C,USERCODE,TEMP_LOSS,CARBIDE_CORR_FACTOR_1 ,"
		  << " CARBIDE_CORR_TEMP_1, CARBIDE_CORR_TEMP_2, CARBIDE_CORR_FACTOR_2, CARBIDE_CORR_TEMP_3, CARBIDE_CORR_FACTOR_3, CARBIDE_CORR_TEMP_4, CARBIDE_CORR_FACTOR_4,"
			<< " CARBIDE_CORR_TEMP_5, CARBIDE_CORR_FACTOR_5, MG_CORR_CO_RELATION_1, MG_CORR_FACTOR_10K_1, MG_CORR_CO_RELATION_2, MG_CORR_FACTOR_10K_2, MG_CORR_CO_RELATION_3, MG_CORR_FACTOR_10K_3,"
			<< " MG_CORR_CO_RELATION_4, MG_CORR_FACTOR_10K_4, MG_CORR_CO_RELATION_5, MG_CORR_FACTOR_10K_5) "
			<< " (select '" << pHeatId << "', '" << pTreatId << "', '" << pPlant << "', PRACNO,REVTIME,DESCR_E,DESCR_C,USERCODE,TEMP_LOSS,CARBIDE_CORR_FACTOR_1 ,"
			//<< " (select '" << pHeatId << "', '" << pTreatId << "', '" << pPlant << "', 0,REVTIME,DESCR_E,DESCR_C,USERCODE,TEMP_LOSS,CARBIDE_CORR_FACTOR_1 ,"
			<< " CARBIDE_CORR_TEMP_1, CARBIDE_CORR_TEMP_2, CARBIDE_CORR_FACTOR_2, CARBIDE_CORR_TEMP_3, CARBIDE_CORR_FACTOR_3, CARBIDE_CORR_TEMP_4, CARBIDE_CORR_FACTOR_4,"
			<< " CARBIDE_CORR_TEMP_5, CARBIDE_CORR_FACTOR_5, MG_CORR_CO_RELATION_1, MG_CORR_FACTOR_10K_1, MG_CORR_CO_RELATION_2, MG_CORR_FACTOR_10K_2, MG_CORR_CO_RELATION_3, MG_CORR_FACTOR_10K_3,"
			<< " MG_CORR_CO_RELATION_4, MG_CORR_FACTOR_10K_4, MG_CORR_CO_RELATION_5, MG_CORR_FACTOR_10K_5 "
			<< " from GTH_PP_TEMP_CORR"
			<< "  where PLANTNO = "  << pPlantno 
			<< "  and PRACNO = (select PRODPRACID_MOD from PDH_HM_DATA_PRODPRAC where HM_ID = '" << pHeatId << "' and TREATID = '"  <<  pTreatId <<  "' and PLANT = '" << pPlant << "' and DESCR_PP = 'Temp_Corr')"
			<< "  and REVTIME = (select max(REVTIME) from GTH_PP_TEMP_CORR))";
			
	result = result && executeSQL(sql.str());
	if (!result)
		//pError = getLastError();

	if(pCommit)
  {
		if (result)
			this->commit();
		else
			rollback();
  }

	return result;
}

bool CHDH_PP_TEMP_CORR::delete_HDH_PP_TEMP_CORR(const std::string& HM_ID, const std::string& TREATID, const std::string& PLANT)
{
	bool result;
  std::stringstream sql;
	try
	{
		addWhereClause("HM_ID",HM_ID);
		addWhereClause("TREATID",TREATID);
		addWhereClause("PLANT",PLANT);
		//sql += getWhereStatement() + ";";
		sql << "delete from HDH_PP_TEMP_CORR" 
			  << getWhereStatement();
		/*<< "  where HEATID = '" << pHeatId << "'"
		<< "   and TREATID = '" << pTreatId << "'"
		<< "   and PLANT = '" << pPlant << "'";*/

	result = executeSQL(sql.str());
	if (result)
    {
      commit();
    }
    else
    {
      rollback();
      log("ERROR: CHDH_PP_TEMP_CORR::delete_HDH_PP_TEMP_CORR failed",1);
    }
	}
	catch(...)
	{
		result=false;
	}

	return result;
}



