package org.omg.PortableServer.POAPackage;


/**
* org/omg/PortableServer/POAPackage/ServantAlreadyActive.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableServer/poa.idl����
* 2019�N10��25�� 19��20��24�b JST
*/

public final class ServantAlreadyActive extends org.omg.CORBA.UserException
{

  public ServantAlreadyActive ()
  {
    super(ServantAlreadyActiveHelper.id());
  } // ctor


  public ServantAlreadyActive (String $reason)
  {
    super(ServantAlreadyActiveHelper.id() + "  " + $reason);
  } // ctor

} // class ServantAlreadyActive
