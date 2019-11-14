// This file is generated by omniidl (C++ backend) - omniORB_4_2. Do not edit.

#include "iEventData_s.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_2_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::PR_structMember _0RL_structmember_sEventData[] = {
  {"m_Sender", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_Receiver", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_Message", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_PlantID", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_PlantLocation", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_ProductID", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_RelatedInformation", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_isPlantEvent", CORBA::TypeCode::PR_boolean_tc()},
  {"m_HeatID", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_TreatID", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_OrderID", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"m_DataKey", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)}
};

#ifdef _0RL_tc_sEventData
#  undef _0RL_tc_sEventData
#endif
static CORBA::TypeCode_ptr _0RL_tc_sEventData = CORBA::TypeCode::PR_struct_tc("IDL:sEventData:1.0", "sEventData", _0RL_structmember_sEventData, 12, &_0RL_tcTrack);

const CORBA::TypeCode_ptr _tc_sEventData = _0RL_tc_sEventData;


static void _0RL_sEventData_marshal_fn(cdrStream& _s, void* _v)
{
  sEventData* _p = (sEventData*)_v;
  *_p >>= _s;
}
static void _0RL_sEventData_unmarshal_fn(cdrStream& _s, void*& _v)
{
  sEventData* _p = new sEventData;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_sEventData_destructor_fn(void* _v)
{
  sEventData* _p = (sEventData*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const sEventData& _s)
{
  sEventData* _p = new sEventData(_s);
  _a.PR_insert(_0RL_tc_sEventData,
               _0RL_sEventData_marshal_fn,
               _0RL_sEventData_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, sEventData* _sp)
{
  _a.PR_insert(_0RL_tc_sEventData,
               _0RL_sEventData_marshal_fn,
               _0RL_sEventData_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, sEventData*& _sp)
{
  return _a >>= (const sEventData*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const sEventData*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_sEventData,
                    _0RL_sEventData_unmarshal_fn,
                    _0RL_sEventData_marshal_fn,
                    _0RL_sEventData_destructor_fn,
                    _v)) {
    _sp = (const sEventData*)_v;
    return 1;
  }
  return 0;
}
