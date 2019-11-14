//## Copyright (C) 2010 SMS Siemag AG, Germany 
//## Version generated by DBClassCodeUtility BETA 0.6.3 
//## ALL METHODS MARKED AS - //##DBClassCodeUtility - WILL BE OVERWRITTEN, IF DB CLASS RE-GENERATED 
//## MANUALLY IMPLEMENTED METHODS MUST BE LOCATED BELOW THE MARK - "YOUR-CODE" - 


#include "DEF_GC_SCRAP_CONTAINER_TYPE.h"
#include "DEF_GC_SCRAP_CONT_ORDER_STATUS.h"
#include "CPD_SCRAP_CONTAINER_ORDER.h"


//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::PLANT("PLANT");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::PRODORDERID("PRODORDERID");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::CONTAINERINSEQ("CONTAINERINSEQ");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::STATUSNO("STATUSNO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::CONTAINERNO("CONTAINERNO");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE("CONTAINERTYPE");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::CONTAINERLAST("CONTAINERLAST");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::ORDERTIME("ORDERTIME");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::DISCHARGETIME("DISCHARGETIME");
//##DBClassCodeUtility ! DO NOT EDIT !
const std::string CPD_SCRAP_CONTAINER_ORDER::REVTIME("REVTIME");

//##DBClassCodeUtility ! DO NOT EDIT !
CPD_SCRAP_CONTAINER_ORDER::CPD_SCRAP_CONTAINER_ORDER(cCBS_StdConnection* Connection)
:CSMC_DBData("PD_SCRAP_CONTAINER_ORDER",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPD_SCRAP_CONTAINER_ORDER::CPD_SCRAP_CONTAINER_ORDER(cCBS_Connection* Connection)
:CSMC_DBData("PD_SCRAP_CONTAINER_ORDER",Connection)
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPD_SCRAP_CONTAINER_ORDER::CPD_SCRAP_CONTAINER_ORDER()
:CSMC_DBData("PD_SCRAP_CONTAINER_ORDER")
{
  //please implement virtual method, to initialize your members  
  doOnConstruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
CPD_SCRAP_CONTAINER_ORDER::~CPD_SCRAP_CONTAINER_ORDER()
{
  //please implement virtual method, to destruct your members
  doOnDestruct(); 
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Plant identifier
std::string CPD_SCRAP_CONTAINER_ORDER::getPLANT(long Row)
{
  return getString(CPD_SCRAP_CONTAINER_ORDER::PLANT, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setPLANT(const std::string& value)
{
  setString(CPD_SCRAP_CONTAINER_ORDER::PLANT, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Production order identifier
std::string CPD_SCRAP_CONTAINER_ORDER::getPRODORDERID(long Row)
{
  return getString(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setPRODORDERID(const std::string& value)
{
  setString(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Identifies the order within in charging sequence
long CPD_SCRAP_CONTAINER_ORDER::getCONTAINERINSEQ(long Row)
{
  return getLong(CPD_SCRAP_CONTAINER_ORDER::CONTAINERINSEQ, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setCONTAINERINSEQ(long value)
{
  setLong(CPD_SCRAP_CONTAINER_ORDER::CONTAINERINSEQ, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Number of the order status
long CPD_SCRAP_CONTAINER_ORDER::getSTATUSNO(long Row)
{
  return getLong(CPD_SCRAP_CONTAINER_ORDER::STATUSNO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setSTATUSNO(long value)
{
  setLong(CPD_SCRAP_CONTAINER_ORDER::STATUSNO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Unique identification number
long CPD_SCRAP_CONTAINER_ORDER::getCONTAINERNO(long Row)
{
  return getLong(CPD_SCRAP_CONTAINER_ORDER::CONTAINERNO, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setCONTAINERNO(long value)
{
  setLong(CPD_SCRAP_CONTAINER_ORDER::CONTAINERNO, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##basket or chute
std::string CPD_SCRAP_CONTAINER_ORDER::getCONTAINERTYPE(long Row)
{
  return getString(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setCONTAINERTYPE(const std::string& value)
{
  setString(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Identifies the last container in a charging sequence -> 1
long CPD_SCRAP_CONTAINER_ORDER::getCONTAINERLAST(long Row)
{
  return getLong(CPD_SCRAP_CONTAINER_ORDER::CONTAINERLAST, Row);
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setCONTAINERLAST(long value)
{
  setLong(CPD_SCRAP_CONTAINER_ORDER::CONTAINERLAST, value);
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##For displaying the scrap container in corresponding assignment dialog
CDateTime CPD_SCRAP_CONTAINER_ORDER::getORDERTIME(long Row)
{
  CDateTime D;
  D.fromDBString(getString(CPD_SCRAP_CONTAINER_ORDER::ORDERTIME, Row));
  return D;
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setORDERTIME(const CDateTime& value)
{
 setString(CPD_SCRAP_CONTAINER_ORDER::ORDERTIME, value.toDBString());
}

//##DBClassCodeUtility ! DO NOT EDIT !
CDateTime CPD_SCRAP_CONTAINER_ORDER::getDISCHARGETIME(long Row)
{
  CDateTime D;
  D.fromDBString(getString(CPD_SCRAP_CONTAINER_ORDER::DISCHARGETIME, Row));
  return D;
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setDISCHARGETIME(const CDateTime& value)
{
 setString(CPD_SCRAP_CONTAINER_ORDER::DISCHARGETIME, value.toDBString());
}

//##DBClassCodeUtility ! DO NOT EDIT !
//##Date and time of last revision
CDateTime CPD_SCRAP_CONTAINER_ORDER::getREVTIME(long Row)
{
  CDateTime D;
  D.fromDBString(getString(CPD_SCRAP_CONTAINER_ORDER::REVTIME, Row));
  return D;
}

//##DBClassCodeUtility ! DO NOT EDIT !
void CPD_SCRAP_CONTAINER_ORDER::setREVTIME(const CDateTime& value)
{
 setString(CPD_SCRAP_CONTAINER_ORDER::REVTIME, value.toDBString());
}

//##DBClassCodeUtility ! DO NOT EDIT !
bool CPD_SCRAP_CONTAINER_ORDER::select(const std::string& PLANT, const std::string& PRODORDERID, long CONTAINERINSEQ)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERINSEQ,CONTAINERINSEQ);
  m_Statement += getWhereStatement() + ";";

  return CSMC_DBData::select();
}

//## ------------------------------------END-GENERATED-CODE---------------------- 

//## ------------------------------------YOUR-CODE------------------------------- 

bool CPD_SCRAP_CONTAINER_ORDER::selectByContainerNoAndType( const std::string& PLANT, const std::string& PRODORDERID, long CONTAINERINSEQ, long CONTAINERNO, const std::string& CONTAINERTYPE  )
{
	cleanWhereStatement();

	m_Statement = "Select * from " + m_TableName;

	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT );
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERNO,CONTAINERNO);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE,CONTAINERTYPE);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERINSEQ,CONTAINERINSEQ);

	m_Statement += getWhereStatement() + " order by CONTAINERINSEQ;";

	return CSMC_DBData::select();
}

bool CPD_SCRAP_CONTAINER_ORDER::selectByContainerState( const std::string& PLANT, const std::string& PRODORDERID, long STATUSNO, bool ASC /* = true */  )
{
	cleanWhereStatement();

	m_Statement = "Select * from " + m_TableName;

	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT );
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::STATUSNO,STATUSNO);

  if ( ASC )
  {
    m_Statement += getWhereStatement() + " ORDER BY REVTIME;";
  }
  else
  {
    m_Statement += getWhereStatement() + " ORDER BY REVTIME DESC;"; 
  }

	return CSMC_DBData::select();
}

bool CPD_SCRAP_CONTAINER_ORDER::selectByContainerType( const std::string& PLANT, const std::string& PRODORDERID, const std::string& CONTAINERTYPE  )
{
	cleanWhereStatement();

	m_Statement = "Select * from " + m_TableName;

	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT );
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE,CONTAINERTYPE);

	m_Statement += getWhereStatement() + " order by CONTAINERINSEQ;";

	return CSMC_DBData::select();
}

bool CPD_SCRAP_CONTAINER_ORDER::selectByContainerTypeAndState( const std::string& PLANT, const std::string& PRODORDERID, long CONTAINERINSEQ, long CONTAINERNO, const std::string& CONTAINERTYPE, long STATUSNO  )
{
	cleanWhereStatement();

	m_Statement = "Select * from " + m_TableName;

	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT );
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERINSEQ,CONTAINERINSEQ);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERNO,CONTAINERNO);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE,CONTAINERTYPE);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::STATUSNO,STATUSNO);

  m_Statement += getWhereStatement() + " order by CONTAINERINSEQ;";

	return CSMC_DBData::select();
}

bool CPD_SCRAP_CONTAINER_ORDER::selectByContainerTypeAndState( const std::string& PLANT, const std::string& PRODORDERID, const std::string& CONTAINERTYPE, long STATUSNO  )
{
	cleanWhereStatement();

	m_Statement = "Select * from " + m_TableName;

	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT );
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE,CONTAINERTYPE);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::STATUSNO,STATUSNO);

  m_Statement += getWhereStatement() + " order by CONTAINERINSEQ;";

	return CSMC_DBData::select();
}

bool CPD_SCRAP_CONTAINER_ORDER::selectByContainerTypeAndState( const std::string& PLANT, const std::string& PRODORDERID, const std::string& CONTAINERTYPE, std::vector<long> StatusNoList  )
{
	cleanWhereStatement();

	m_Statement = "Select * from " + m_TableName;

	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT );
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE,CONTAINERTYPE);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::STATUSNO,StatusNoList,"IN");

  m_Statement += getWhereStatement() + " order by CONTAINERINSEQ;";

	return CSMC_DBData::select();
}

bool CPD_SCRAP_CONTAINER_ORDER::selectLastOrder(const std::string& PLANT, const std::string& CONTAINERTYPE)
{
  cleanWhereStatement();

  m_Statement = "Select * from " + m_TableName;

  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT );
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE, CONTAINERTYPE);

  m_Statement += getWhereStatement() + " order by PRODORDERID desc;";

  return CSMC_DBData::select();
}

bool CPD_SCRAP_CONTAINER_ORDER::selectOrderedButNotCharged(const string& PLANT, const string& PRODORDERID, long CONTAINERNO, const string& CONTAINERTYPE)
{
  cleanWhereStatement();

  m_Statement = "Select PRODORDERID from " + m_TableName;

  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE,CONTAINERTYPE);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERNO,CONTAINERNO);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::ORDERTIME + " is not null");
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::DISCHARGETIME + " is null");

  m_Statement += getWhereStatement() + " order by PRODORDERID,CONTAINERINSEQ,CONTAINERNO;";

  return CSMC_DBData::select();  
}

bool CPD_SCRAP_CONTAINER_ORDER::deleteData(const std::string& PLANT, const std::string& PRODORDERID, long CONTAINERINSEQ, const std::string& CONTAINERTYPE )
{
	cleanWhereStatement();

	m_Statement = "delete from " + m_TableName;

	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERINSEQ,CONTAINERINSEQ);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERTYPE,CONTAINERTYPE);

	m_Statement += getWhereStatement() + ";";

	return CSMC_DBData::deleteRows();
}


bool CPD_SCRAP_CONTAINER_ORDER::deletePlannedDataOnDeparture(const std::string& PLANT, const std::string& PRODORDERID, cCBS_ODBC_DBError &Error)
{
	cleanWhereStatement();

	m_Statement = "delete from " + m_TableName;

	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT );
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
	addWhereClause(CPD_SCRAP_CONTAINER_ORDER::STATUSNO,DEF_GC_SCRAP_CONT_ORDER_STATUS::Planned);

	m_Statement += getWhereStatement() + ";";

  bool result = CSMC_DBData::deleteRows();
	if (!result)
		Error = getLastError();

	return result;
}

bool CPD_SCRAP_CONTAINER_ORDER::exists(const std::string& PLANT,const std::string& PRODORDERID, long CONTAINERINSEQ)
{
  cleanWhereStatement();

  m_Statement = "Select PLANT from " + m_TableName;

  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PLANT,PLANT);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::PRODORDERID,PRODORDERID);
  addWhereClause(CPD_SCRAP_CONTAINER_ORDER::CONTAINERINSEQ,CONTAINERINSEQ);


  // do not use ROWNUM in "addWhereClause", ROWNUM is not a table column and where statement will be used for deletion at "deleteRows"
  m_Statement += getWhereStatement() + " AND ROWNUM = 1 ;";


  return CSMC_DBData::select();
}

std::set<std::string> CPD_SCRAP_CONTAINER_ORDER::getOrderList(const std::string& PLANT, const std::string& PRODORDERID, const std::string& CONTAINERTYPE, long STATUSNO  )
{
  std::set<std::string> OrderList;

  if ( selectByContainerTypeAndState(PLANT, PRODORDERID, CONTAINERTYPE, STATUSNO ) )
  {
    for ( int i = 1; i <= getLastRow(); i++ )
    {
      std::string PRODORDERID = getPRODORDERID(i);

      if ( OrderList.find(PRODORDERID) == OrderList.end() )
      {
        OrderList.insert(PRODORDERID);
      }
    }
  }

  return OrderList;
}

bool CPD_SCRAP_CONTAINER_ORDER::insertData(const std::string& PLANT, const std::string& PRODORDERID, long CONTAINERINSEQ, long CONTAINERNO, const std::string& CONTAINERTYPE, bool Commit, cCBS_ODBC_DBError &Error)
{
  CDateTime now;
  setPRODORDERID(PRODORDERID);
  setPLANT(PLANT);
  setCONTAINERINSEQ(CONTAINERINSEQ);
  setCONTAINERNO(CONTAINERNO);
  setCONTAINERTYPE(CONTAINERTYPE);
  setREVTIME(now);

  bool result = insert();
	if (!result)
		Error = getLastError();

	if (Commit)
	{
		if (result)
			commit();
		else
			rollback();
	}
	return result;
}

bool CPD_SCRAP_CONTAINER_ORDER::setOrderedTime(const string& PLANT,const string &PRODORDERID, long CONTAINERINSEQ, bool Commit, cCBS_ODBC_DBError &Error)
{
  bool  result = true;

  if ( select(PLANT, PRODORDERID, CONTAINERINSEQ) )
  {
    if (getORDERTIME(1) == CSMC_DBData::unspecDate )
    {
      setSTATUSNO(DEF_GC_SCRAP_CONT_ORDER_STATUS::OrderAvailable); //we are now available to be ordered by L1
      setORDERTIME(CDateTime());
      setREVTIME  (CDateTime());
      result = update();
    }
  }
  else
  {
    setPLANT(PLANT);
    setPRODORDERID(PRODORDERID);
    setCONTAINERINSEQ(CONTAINERINSEQ);
    setORDERTIME(CDateTime());
    setREVTIME  (CDateTime());
    setSTATUSNO(DEF_GC_SCRAP_CONT_ORDER_STATUS::OrderAvailable); //we are now available to be ordered by L1

    result = insert();
  }

  if ( Commit )
  {
    if ( result )
      commit();
    else 
      rollback();
  }

  return result;
}

bool CPD_SCRAP_CONTAINER_ORDER::updateOrderTime(const std::string& PLANT, const std::string & PRODORDERID, const long & CONTAINERINSEQ, CDateTime& ORDERTIME, bool Commit, cCBS_ODBC_DBError &Error)
{
	bool result = exists(PLANT, PRODORDERID, CONTAINERINSEQ);
	if (result)
	{
    // where clause is set in exists
    setORDERTIME    (ORDERTIME);
    setREVTIME      (CDateTime());

    result = update();
	}

  if (!result)
		Error = getLastError();

	if (Commit)
	{
		if (result)
			commit();
		else
			rollback();
	}

	return result;
}


bool CPD_SCRAP_CONTAINER_ORDER::isOrderInProcess(const std::string& PLANT, const std::string & PRODORDERID, cCBS_ODBC_DBError &Error)
{
  std::vector<long> StatusNoList;

  StatusNoList.push_back(DEF_GC_SCRAP_CONT_ORDER_STATUS::LoadingStarted);
  StatusNoList.push_back(DEF_GC_SCRAP_CONT_ORDER_STATUS::LoadingEnded);
  StatusNoList.push_back(DEF_GC_SCRAP_CONT_ORDER_STATUS::Preloaded);
  StatusNoList.push_back(DEF_GC_SCRAP_CONT_ORDER_STATUS::Ordered);

  return selectByContainerTypeAndState( PLANT, PRODORDERID, CSMC_DBData::unspecString, StatusNoList );
}