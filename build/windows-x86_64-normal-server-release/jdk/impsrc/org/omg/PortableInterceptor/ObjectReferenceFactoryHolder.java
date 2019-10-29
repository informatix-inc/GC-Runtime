package org.omg.PortableInterceptor;

/**
* org/omg/PortableInterceptor/ObjectReferenceFactoryHolder.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/Interceptors.idl����
* 2019�N10��25�� 18��05��57�b JST
*/


/** The object reference factory.  This provides the capability of
  * creating an object reference.
  */
public final class ObjectReferenceFactoryHolder implements org.omg.CORBA.portable.Streamable
{
  public org.omg.PortableInterceptor.ObjectReferenceFactory value = null;

  public ObjectReferenceFactoryHolder ()
  {
  }

  public ObjectReferenceFactoryHolder (org.omg.PortableInterceptor.ObjectReferenceFactory initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = org.omg.PortableInterceptor.ObjectReferenceFactoryHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    org.omg.PortableInterceptor.ObjectReferenceFactoryHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return org.omg.PortableInterceptor.ObjectReferenceFactoryHelper.type ();
  }

}
