package com.sun.corba.se.spi.activation;

/**
* com/sun/corba/se/spi/activation/ServerAlreadyUninstalledHolder.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/com/sun/corba/se/spi/activation/activation.idl����
* 2019�N10��25�� 18��05��54�b JST
*/

public final class ServerAlreadyUninstalledHolder implements org.omg.CORBA.portable.Streamable
{
  public com.sun.corba.se.spi.activation.ServerAlreadyUninstalled value = null;

  public ServerAlreadyUninstalledHolder ()
  {
  }

  public ServerAlreadyUninstalledHolder (com.sun.corba.se.spi.activation.ServerAlreadyUninstalled initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = com.sun.corba.se.spi.activation.ServerAlreadyUninstalledHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    com.sun.corba.se.spi.activation.ServerAlreadyUninstalledHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return com.sun.corba.se.spi.activation.ServerAlreadyUninstalledHelper.type ();
  }

}