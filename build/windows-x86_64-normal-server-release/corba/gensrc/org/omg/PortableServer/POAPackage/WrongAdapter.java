package org.omg.PortableServer.POAPackage;


/**
* org/omg/PortableServer/POAPackage/WrongAdapter.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableServer/poa.idl����
* 2019�N10��25�� 18��05��59�b JST
*/

public final class WrongAdapter extends org.omg.CORBA.UserException
{

  public WrongAdapter ()
  {
    super(WrongAdapterHelper.id());
  } // ctor


  public WrongAdapter (String $reason)
  {
    super(WrongAdapterHelper.id() + "  " + $reason);
  } // ctor

} // class WrongAdapter
