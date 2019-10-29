package org.omg.DynamicAny;


/**
* org/omg/DynamicAny/DynValueCommonOperations.java .
* IDL-to-Javaコンパイラ(ポータブル)、バージョン"3.2"によって生成されました
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/DynamicAny/DynamicAny.idlから
* 2019年10月25日 18時05分54秒 JST
*/


/**
    * DynValueCommon provides operations supported by both the DynValue and DynValueBox interfaces.
    */
public interface DynValueCommonOperations  extends org.omg.DynamicAny.DynAnyOperations
{

  /**
        * Returns true if the DynValueCommon represents a null value type.
        */
  boolean is_null ();

  /**
        * Changes the representation of a DynValueCommon to a null value type.
        */
  void set_to_null ();

  /**
        * Replaces a null value type with a newly constructed value. Its components are initialized
        * to default values as in DynAnyFactory.create_dyn_any_from_type_code.
        * If the DynValueCommon represents a non-null value type, then this operation has no effect. 
        */
  void set_to_value ();
} // interface DynValueCommonOperations
