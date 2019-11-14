// This file is generated by omniidl (C++ backend) - omniORB_4_2. Do not edit.

#include "iData_Provider_s.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_2_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::TypeCode_ptr _0RL_tc_DEF_mseqLong = CORBA::TypeCode::PR_alias_tc("IDL:DEF/seqLong:1.0", "seqLong", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_long_tc(), &_0RL_tcTrack), &_0RL_tcTrack);


#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace DEF { 
  const ::CORBA::TypeCode_ptr _tc_seqLong = _0RL_tc_DEF_mseqLong;
} 
#else
const ::CORBA::TypeCode_ptr DEF::_tc_seqLong = _0RL_tc_DEF_mseqLong;
#endif

static CORBA::TypeCode_ptr _0RL_tc_DEF_mseqDouble = CORBA::TypeCode::PR_alias_tc("IDL:DEF/seqDouble:1.0", "seqDouble", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_double_tc(), &_0RL_tcTrack), &_0RL_tcTrack);


#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace DEF { 
  const ::CORBA::TypeCode_ptr _tc_seqDouble = _0RL_tc_DEF_mseqDouble;
} 
#else
const ::CORBA::TypeCode_ptr DEF::_tc_seqDouble = _0RL_tc_DEF_mseqDouble;
#endif

static CORBA::TypeCode_ptr _0RL_tc_DEF_mseqBoolean = CORBA::TypeCode::PR_alias_tc("IDL:DEF/seqBoolean:1.0", "seqBoolean", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_boolean_tc(), &_0RL_tcTrack), &_0RL_tcTrack);


#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace DEF { 
  const ::CORBA::TypeCode_ptr _tc_seqBoolean = _0RL_tc_DEF_mseqBoolean;
} 
#else
const ::CORBA::TypeCode_ptr DEF::_tc_seqBoolean = _0RL_tc_DEF_mseqBoolean;
#endif

static CORBA::TypeCode_ptr _0RL_tc_DEF_mseqString = CORBA::TypeCode::PR_alias_tc("IDL:DEF/seqString:1.0", "seqString", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack), &_0RL_tcTrack), &_0RL_tcTrack);


#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace DEF { 
  const ::CORBA::TypeCode_ptr _tc_seqString = _0RL_tc_DEF_mseqString;
} 
#else
const ::CORBA::TypeCode_ptr DEF::_tc_seqString = _0RL_tc_DEF_mseqString;
#endif

static CORBA::PR_structMember _0RL_structmember_sIntfDataList[] = {
  {"Name", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"Type", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)}
};

#ifdef _0RL_tc_sIntfDataList
#  undef _0RL_tc_sIntfDataList
#endif
static CORBA::TypeCode_ptr _0RL_tc_sIntfDataList = CORBA::TypeCode::PR_struct_tc("IDL:sIntfDataList:1.0", "sIntfDataList", _0RL_structmember_sIntfDataList, 2, &_0RL_tcTrack);

const CORBA::TypeCode_ptr _tc_sIntfDataList = _0RL_tc_sIntfDataList;






static CORBA::TypeCode_ptr _0RL_tc_seqIntfDataList = CORBA::TypeCode::PR_alias_tc("IDL:seqIntfDataList:1.0", "seqIntfDataList", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_sIntfDataList, &_0RL_tcTrack), &_0RL_tcTrack);


const CORBA::TypeCode_ptr _tc_seqIntfDataList = _0RL_tc_seqIntfDataList;

const CORBA::TypeCode_ptr _tc_iData_Provider = CORBA::TypeCode::PR_interface_tc("IDL:iData_Provider:1.0", "iData_Provider", &_0RL_tcTrack);

static void _0RL_DEF_mseqLong_marshal_fn(cdrStream& _s, void* _v)
{
  DEF::seqLong* _p = (DEF::seqLong*)_v;
  *_p >>= _s;
}
static void _0RL_DEF_mseqLong_unmarshal_fn(cdrStream& _s, void*& _v)
{
  DEF::seqLong* _p = new DEF::seqLong;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_DEF_mseqLong_destructor_fn(void* _v)
{
  DEF::seqLong* _p = (DEF::seqLong*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const DEF::seqLong& _s)
{
  DEF::seqLong* _p = new DEF::seqLong(_s);
  _a.PR_insert(_0RL_tc_DEF_mseqLong,
               _0RL_DEF_mseqLong_marshal_fn,
               _0RL_DEF_mseqLong_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, DEF::seqLong* _sp)
{
  _a.PR_insert(_0RL_tc_DEF_mseqLong,
               _0RL_DEF_mseqLong_marshal_fn,
               _0RL_DEF_mseqLong_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, DEF::seqLong*& _sp)
{
  return _a >>= (const DEF::seqLong*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const DEF::seqLong*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_DEF_mseqLong,
                    _0RL_DEF_mseqLong_unmarshal_fn,
                    _0RL_DEF_mseqLong_marshal_fn,
                    _0RL_DEF_mseqLong_destructor_fn,
                    _v)) {
    _sp = (const DEF::seqLong*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_DEF_mseqDouble_marshal_fn(cdrStream& _s, void* _v)
{
  DEF::seqDouble* _p = (DEF::seqDouble*)_v;
  *_p >>= _s;
}
static void _0RL_DEF_mseqDouble_unmarshal_fn(cdrStream& _s, void*& _v)
{
  DEF::seqDouble* _p = new DEF::seqDouble;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_DEF_mseqDouble_destructor_fn(void* _v)
{
  DEF::seqDouble* _p = (DEF::seqDouble*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const DEF::seqDouble& _s)
{
  DEF::seqDouble* _p = new DEF::seqDouble(_s);
  _a.PR_insert(_0RL_tc_DEF_mseqDouble,
               _0RL_DEF_mseqDouble_marshal_fn,
               _0RL_DEF_mseqDouble_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, DEF::seqDouble* _sp)
{
  _a.PR_insert(_0RL_tc_DEF_mseqDouble,
               _0RL_DEF_mseqDouble_marshal_fn,
               _0RL_DEF_mseqDouble_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, DEF::seqDouble*& _sp)
{
  return _a >>= (const DEF::seqDouble*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const DEF::seqDouble*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_DEF_mseqDouble,
                    _0RL_DEF_mseqDouble_unmarshal_fn,
                    _0RL_DEF_mseqDouble_marshal_fn,
                    _0RL_DEF_mseqDouble_destructor_fn,
                    _v)) {
    _sp = (const DEF::seqDouble*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_DEF_mseqBoolean_marshal_fn(cdrStream& _s, void* _v)
{
  DEF::seqBoolean* _p = (DEF::seqBoolean*)_v;
  *_p >>= _s;
}
static void _0RL_DEF_mseqBoolean_unmarshal_fn(cdrStream& _s, void*& _v)
{
  DEF::seqBoolean* _p = new DEF::seqBoolean;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_DEF_mseqBoolean_destructor_fn(void* _v)
{
  DEF::seqBoolean* _p = (DEF::seqBoolean*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const DEF::seqBoolean& _s)
{
  DEF::seqBoolean* _p = new DEF::seqBoolean(_s);
  _a.PR_insert(_0RL_tc_DEF_mseqBoolean,
               _0RL_DEF_mseqBoolean_marshal_fn,
               _0RL_DEF_mseqBoolean_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, DEF::seqBoolean* _sp)
{
  _a.PR_insert(_0RL_tc_DEF_mseqBoolean,
               _0RL_DEF_mseqBoolean_marshal_fn,
               _0RL_DEF_mseqBoolean_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, DEF::seqBoolean*& _sp)
{
  return _a >>= (const DEF::seqBoolean*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const DEF::seqBoolean*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_DEF_mseqBoolean,
                    _0RL_DEF_mseqBoolean_unmarshal_fn,
                    _0RL_DEF_mseqBoolean_marshal_fn,
                    _0RL_DEF_mseqBoolean_destructor_fn,
                    _v)) {
    _sp = (const DEF::seqBoolean*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_DEF_mseqString_marshal_fn(cdrStream& _s, void* _v)
{
  DEF::seqString* _p = (DEF::seqString*)_v;
  *_p >>= _s;
}
static void _0RL_DEF_mseqString_unmarshal_fn(cdrStream& _s, void*& _v)
{
  DEF::seqString* _p = new DEF::seqString;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_DEF_mseqString_destructor_fn(void* _v)
{
  DEF::seqString* _p = (DEF::seqString*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const DEF::seqString& _s)
{
  DEF::seqString* _p = new DEF::seqString(_s);
  _a.PR_insert(_0RL_tc_DEF_mseqString,
               _0RL_DEF_mseqString_marshal_fn,
               _0RL_DEF_mseqString_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, DEF::seqString* _sp)
{
  _a.PR_insert(_0RL_tc_DEF_mseqString,
               _0RL_DEF_mseqString_marshal_fn,
               _0RL_DEF_mseqString_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, DEF::seqString*& _sp)
{
  return _a >>= (const DEF::seqString*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const DEF::seqString*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_DEF_mseqString,
                    _0RL_DEF_mseqString_unmarshal_fn,
                    _0RL_DEF_mseqString_marshal_fn,
                    _0RL_DEF_mseqString_destructor_fn,
                    _v)) {
    _sp = (const DEF::seqString*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_sIntfDataList_marshal_fn(cdrStream& _s, void* _v)
{
  sIntfDataList* _p = (sIntfDataList*)_v;
  *_p >>= _s;
}
static void _0RL_sIntfDataList_unmarshal_fn(cdrStream& _s, void*& _v)
{
  sIntfDataList* _p = new sIntfDataList;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_sIntfDataList_destructor_fn(void* _v)
{
  sIntfDataList* _p = (sIntfDataList*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const sIntfDataList& _s)
{
  sIntfDataList* _p = new sIntfDataList(_s);
  _a.PR_insert(_0RL_tc_sIntfDataList,
               _0RL_sIntfDataList_marshal_fn,
               _0RL_sIntfDataList_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, sIntfDataList* _sp)
{
  _a.PR_insert(_0RL_tc_sIntfDataList,
               _0RL_sIntfDataList_marshal_fn,
               _0RL_sIntfDataList_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, sIntfDataList*& _sp)
{
  return _a >>= (const sIntfDataList*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const sIntfDataList*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_sIntfDataList,
                    _0RL_sIntfDataList_unmarshal_fn,
                    _0RL_sIntfDataList_marshal_fn,
                    _0RL_sIntfDataList_destructor_fn,
                    _v)) {
    _sp = (const sIntfDataList*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_seqIntfDataList_marshal_fn(cdrStream& _s, void* _v)
{
  seqIntfDataList* _p = (seqIntfDataList*)_v;
  *_p >>= _s;
}
static void _0RL_seqIntfDataList_unmarshal_fn(cdrStream& _s, void*& _v)
{
  seqIntfDataList* _p = new seqIntfDataList;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_seqIntfDataList_destructor_fn(void* _v)
{
  seqIntfDataList* _p = (seqIntfDataList*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const seqIntfDataList& _s)
{
  seqIntfDataList* _p = new seqIntfDataList(_s);
  _a.PR_insert(_0RL_tc_seqIntfDataList,
               _0RL_seqIntfDataList_marshal_fn,
               _0RL_seqIntfDataList_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, seqIntfDataList* _sp)
{
  _a.PR_insert(_0RL_tc_seqIntfDataList,
               _0RL_seqIntfDataList_marshal_fn,
               _0RL_seqIntfDataList_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, seqIntfDataList*& _sp)
{
  return _a >>= (const seqIntfDataList*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const seqIntfDataList*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_seqIntfDataList,
                    _0RL_seqIntfDataList_unmarshal_fn,
                    _0RL_seqIntfDataList_marshal_fn,
                    _0RL_seqIntfDataList_destructor_fn,
                    _v)) {
    _sp = (const seqIntfDataList*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_iData__Provider_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_iData__Provider_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(iData_Provider::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_iData__Provider_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, iData_Provider_ptr _o)
{
  iData_Provider_ptr _no = iData_Provider::_duplicate(_o);
  _a.PR_insert(_tc_iData_Provider,
               _0RL_iData__Provider_marshal_fn,
               _0RL_iData__Provider_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, iData_Provider_ptr* _op)
{
  _a.PR_insert(_tc_iData_Provider,
               _0RL_iData__Provider_marshal_fn,
               _0RL_iData__Provider_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = iData_Provider::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, iData_Provider_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(_tc_iData_Provider,
                    _0RL_iData__Provider_unmarshal_fn,
                    _0RL_iData__Provider_marshal_fn,
                    _0RL_iData__Provider_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (iData_Provider_ptr)_r->_ptrToObjRef(iData_Provider::_PD_repoId);
    else
      _o = iData_Provider::_nil();
    return 1;
  }
  return 0;
}
