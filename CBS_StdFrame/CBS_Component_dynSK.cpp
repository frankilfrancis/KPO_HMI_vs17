// This file is generated by omniidl (C++ backend) - omniORB_4_2. Do not edit.

#include "CBS_Component_s.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_2_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static const char* _0RL_enumMember_CBS__RunMode[] = { "OnlineMode", "OfflineMode" };
static CORBA::TypeCode_ptr _0RL_tc_CBS__RunMode = CORBA::TypeCode::PR_enum_tc("IDL:CBS_RunMode:1.0", "CBS_RunMode", _0RL_enumMember_CBS__RunMode, 2, &_0RL_tcTrack);
const CORBA::TypeCode_ptr _tc_CBS_RunMode = _0RL_tc_CBS__RunMode;

const CORBA::TypeCode_ptr _tc_iCBS_Component = CORBA::TypeCode::PR_interface_tc("IDL:iCBS_Component:1.0", "iCBS_Component", &_0RL_tcTrack);

static CORBA::TypeCode_ptr _0RL_tc_CBS__ComponentSeq = CORBA::TypeCode::PR_alias_tc("IDL:CBS_ComponentSeq:1.0", "CBS_ComponentSeq", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_interface_tc("IDL:iCBS_Component:1.0", "iCBS_Component", &_0RL_tcTrack), &_0RL_tcTrack), &_0RL_tcTrack);


const CORBA::TypeCode_ptr _tc_CBS_ComponentSeq = _0RL_tc_CBS__ComponentSeq;

static void _0RL_CBS__RunMode_marshal_fn(cdrStream& _s, void* _v)
{
  CBS_RunMode* _p = (CBS_RunMode*)_v;
  *_p >>= _s;
}
static void _0RL_CBS__RunMode_unmarshal_fn(cdrStream& _s, void*& _v)
{
  CBS_RunMode* _p = (CBS_RunMode*)_v;
  *_p <<= _s;
}

void operator<<=(::CORBA::Any& _a, CBS_RunMode _s)
{
  _a.PR_insert(_0RL_tc_CBS__RunMode,
               _0RL_CBS__RunMode_marshal_fn,
               &_s);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CBS_RunMode& _s)
{
  return _a.PR_extract(_0RL_tc_CBS__RunMode,
                       _0RL_CBS__RunMode_unmarshal_fn,
                       &_s);
}

static void _0RL_iCBS__Component_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_iCBS__Component_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(iCBS_Component::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_iCBS__Component_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, iCBS_Component_ptr _o)
{
  iCBS_Component_ptr _no = iCBS_Component::_duplicate(_o);
  _a.PR_insert(_tc_iCBS_Component,
               _0RL_iCBS__Component_marshal_fn,
               _0RL_iCBS__Component_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, iCBS_Component_ptr* _op)
{
  _a.PR_insert(_tc_iCBS_Component,
               _0RL_iCBS__Component_marshal_fn,
               _0RL_iCBS__Component_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = iCBS_Component::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, iCBS_Component_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(_tc_iCBS_Component,
                    _0RL_iCBS__Component_unmarshal_fn,
                    _0RL_iCBS__Component_marshal_fn,
                    _0RL_iCBS__Component_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (iCBS_Component_ptr)_r->_ptrToObjRef(iCBS_Component::_PD_repoId);
    else
      _o = iCBS_Component::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CBS__ComponentSeq_marshal_fn(cdrStream& _s, void* _v)
{
  CBS_ComponentSeq* _p = (CBS_ComponentSeq*)_v;
  *_p >>= _s;
}
static void _0RL_CBS__ComponentSeq_unmarshal_fn(cdrStream& _s, void*& _v)
{
  CBS_ComponentSeq* _p = new CBS_ComponentSeq;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_CBS__ComponentSeq_destructor_fn(void* _v)
{
  CBS_ComponentSeq* _p = (CBS_ComponentSeq*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const CBS_ComponentSeq& _s)
{
  CBS_ComponentSeq* _p = new CBS_ComponentSeq(_s);
  _a.PR_insert(_0RL_tc_CBS__ComponentSeq,
               _0RL_CBS__ComponentSeq_marshal_fn,
               _0RL_CBS__ComponentSeq_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, CBS_ComponentSeq* _sp)
{
  _a.PR_insert(_0RL_tc_CBS__ComponentSeq,
               _0RL_CBS__ComponentSeq_marshal_fn,
               _0RL_CBS__ComponentSeq_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CBS_ComponentSeq*& _sp)
{
  return _a >>= (const CBS_ComponentSeq*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const CBS_ComponentSeq*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_CBS__ComponentSeq,
                    _0RL_CBS__ComponentSeq_unmarshal_fn,
                    _0RL_CBS__ComponentSeq_marshal_fn,
                    _0RL_CBS__ComponentSeq_destructor_fn,
                    _v)) {
    _sp = (const CBS_ComponentSeq*)_v;
    return 1;
  }
  return 0;
}
