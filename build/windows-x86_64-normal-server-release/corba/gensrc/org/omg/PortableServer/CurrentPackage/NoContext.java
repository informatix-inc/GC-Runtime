package org.omg.PortableServer.CurrentPackage;


/**
* org/omg/PortableServer/CurrentPackage/NoContext.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableServer/poa.idl����
* 2019�N10��25�� 18��05��59�b JST
*/

public final class NoContext extends org.omg.CORBA.UserException
{

  public NoContext ()
  {
    super(NoContextHelper.id());
  } // ctor


  public NoContext (String $reason)
  {
    super(NoContextHelper.id() + "  " + $reason);
  } // ctor

} // class NoContext
