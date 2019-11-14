// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "iDM_Interface_s.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



DM::iDM_Interface_ptr DM::iDM_Interface_Helper::_nil() {
  return ::DM::iDM_Interface::_nil();
}

::CORBA::Boolean DM::iDM_Interface_Helper::is_nil(::DM::iDM_Interface_ptr p) {
  return ::CORBA::is_nil(p);

}

void DM::iDM_Interface_Helper::release(::DM::iDM_Interface_ptr p) {
  ::CORBA::release(p);
}

void DM::iDM_Interface_Helper::marshalObjRef(::DM::iDM_Interface_ptr obj, cdrStream& s) {
  ::DM::iDM_Interface::_marshalObjRef(obj, s);
}

DM::iDM_Interface_ptr DM::iDM_Interface_Helper::unmarshalObjRef(cdrStream& s) {
  return ::DM::iDM_Interface::_unmarshalObjRef(s);
}

void DM::iDM_Interface_Helper::duplicate(::DM::iDM_Interface_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

DM::iDM_Interface_ptr
DM::iDM_Interface::_duplicate(::DM::iDM_Interface_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

DM::iDM_Interface_ptr
DM::iDM_Interface::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


DM::iDM_Interface_ptr
DM::iDM_Interface::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

DM::iDM_Interface_ptr
DM::iDM_Interface::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_iDM_Interface _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_iDM_Interface* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_iDM_Interface;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* DM::iDM_Interface::_PD_repoId = "IDL:DM/iDM_Interface:1.0";


DM::_objref_iDM_Interface::~_objref_iDM_Interface() {
  
}


DM::_objref_iDM_Interface::_objref_iDM_Interface(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::DM::iDM_Interface::_PD_repoId, ior, id, 1),
   _objref_iSMC_DataProvider(ior, id)
   
{
  _PR_setobj(this);
}

void*
DM::_objref_iDM_Interface::_ptrToObjRef(const char* id)
{
  if (id == ::DM::iDM_Interface::_PD_repoId)
    return (::DM::iDM_Interface_ptr) this;
  if (id == ::iSMC_DataProvider::_PD_repoId)
    return (::iSMC_DataProvider_ptr) this;

  if (id == ::iData_Provider::_PD_repoId)
    return (::iData_Provider_ptr) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::DM::iDM_Interface::_PD_repoId))
    return (::DM::iDM_Interface_ptr) this;
  if (omni::strMatch(id, ::iSMC_DataProvider::_PD_repoId))
    return (::iSMC_DataProvider_ptr) this;

  if (omni::strMatch(id, ::iData_Provider::_PD_repoId))
    return (::iData_Provider_ptr) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for DM::iDM_Interface::setProductFromTreatmentPos

// Proxy call descriptor class. Mangled signature:
//  _cboolean_i_cstring_o_csEventData
class _0RL_cd_a861262d97734cad_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_a861262d97734cad_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  sEventData_var arg_1;
  ::CORBA::Boolean result;
};

void _0RL_cd_a861262d97734cad_00000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_a861262d97734cad_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

void _0RL_cd_a861262d97734cad_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);
  (const sEventData&) arg_1 >>= _n;

}

void _0RL_cd_a861262d97734cad_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();
  arg_1 = new sEventData;
  (sEventData&)arg_1 <<= _n;

}

const char* const _0RL_cd_a861262d97734cad_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_a861262d97734cad_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_a861262d97734cad_00000000* tcd = (_0RL_cd_a861262d97734cad_00000000*)cd;
  DM::_impl_iDM_Interface* impl = (DM::_impl_iDM_Interface*) svnt->_ptrToInterface(DM::iDM_Interface::_PD_repoId);
  tcd->result = impl->setProductFromTreatmentPos(tcd->arg_0, tcd->arg_1.out());


}

::CORBA::Boolean DM::_objref_iDM_Interface::setProductFromTreatmentPos(const char* TreatmentPosition, ::sEventData_out EventData)
{
  _0RL_cd_a861262d97734cad_00000000 _call_desc(_0RL_lcfn_a861262d97734cad_10000000, "setProductFromTreatmentPos", 27);
  _call_desc.arg_0 = TreatmentPosition;

  _invoke(_call_desc);
  EventData = _call_desc.arg_1._retn();
  return _call_desc.result;


}

DM::_pof_iDM_Interface::~_pof_iDM_Interface() {}


omniObjRef*
DM::_pof_iDM_Interface::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::DM::_objref_iDM_Interface(ior, id);
}


::CORBA::Boolean
DM::_pof_iDM_Interface::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::DM::iDM_Interface::_PD_repoId))
    return 1;
  if (omni::ptrStrMatch(id, iSMC_DataProvider::_PD_repoId))
    return 1;

  if (omni::ptrStrMatch(id, iData_Provider::_PD_repoId))
    return 1;


  return 0;
}

const DM::_pof_iDM_Interface _the_pof_DM_miDM__Interface;

DM::_impl_iDM_Interface::~_impl_iDM_Interface() {}


::CORBA::Boolean
DM::_impl_iDM_Interface::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "setProductFromTreatmentPos")) {

    _0RL_cd_a861262d97734cad_00000000 _call_desc(_0RL_lcfn_a861262d97734cad_10000000, "setProductFromTreatmentPos", 27, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  
#ifndef _MSC_VER
  if (_impl_iSMC_DataProvider::_dispatch(_handle)) {
    return 1;
  }
#else
  // Work-around for incorrect MSVC code generation.
  if (((_impl_iSMC_DataProvider*)this)->
      _impl_iSMC_DataProvider::_dispatch(_handle)) {
    return 1;
  }
#endif


  return 0;
}

void*
DM::_impl_iDM_Interface::_ptrToInterface(const char* id)
{
  if (id == ::DM::iDM_Interface::_PD_repoId)
    return (::DM::_impl_iDM_Interface*) this;
  if (id == ::iSMC_DataProvider::_PD_repoId)
    return (::_impl_iSMC_DataProvider*) this;

  if (id == ::iData_Provider::_PD_repoId)
    return (::_impl_iData_Provider*) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::DM::iDM_Interface::_PD_repoId))
    return (::DM::_impl_iDM_Interface*) this;
  if (omni::strMatch(id, ::iSMC_DataProvider::_PD_repoId))
    return (::_impl_iSMC_DataProvider*) this;

  if (omni::strMatch(id, ::iData_Provider::_PD_repoId))
    return (::_impl_iData_Provider*) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
DM::_impl_iDM_Interface::_mostDerivedRepoId()
{
  return ::DM::iDM_Interface::_PD_repoId;
}

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage othewise.
namespace DM { 
  extern const char * PLANT = "PLANT";
} 
#else
const char * DM::PLANT = "PLANT";
#endif

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage othewise.
namespace DM { 
  extern const char * PRODUCT = "PRODUCT";
} 
#else
const char * DM::PRODUCT = "PRODUCT";
#endif

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage othewise.
namespace DM { 
  extern const char * EVENT = "EVENT";
} 
#else
const char * DM::EVENT = "EVENT";
#endif

POA_DM::iDM_Interface::~iDM_Interface() {}
