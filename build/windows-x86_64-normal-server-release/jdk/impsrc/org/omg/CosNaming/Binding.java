package org.omg.CosNaming;


/**
* org/omg/CosNaming/Binding.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/CosNaming/nameservice.idl����
* 2019�N10��25�� 18��05��54�b JST
*/

public final class Binding implements org.omg.CORBA.portable.IDLEntity
{
  public org.omg.CosNaming.NameComponent binding_name[] = null;

  // name
  public org.omg.CosNaming.BindingType binding_type = null;

  public Binding ()
  {
  } // ctor

  public Binding (org.omg.CosNaming.NameComponent[] _binding_name, org.omg.CosNaming.BindingType _binding_type)
  {
    binding_name = _binding_name;
    binding_type = _binding_type;
  } // ctor

} // class Binding
