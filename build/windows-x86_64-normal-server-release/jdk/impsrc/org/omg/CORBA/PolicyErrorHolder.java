package org.omg.CORBA;

/**
* org/omg/CORBA/PolicyErrorHolder.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/CORBAX.idl����
* 2019�N10��25�� 18��05��56�b JST
*/


/**
   * Thrown to indicate problems with parameter values passed to the
   * <code>ORB.create_policy</code> operation.  
   */
public final class PolicyErrorHolder implements org.omg.CORBA.portable.Streamable
{
  public org.omg.CORBA.PolicyError value = null;

  public PolicyErrorHolder ()
  {
  }

  public PolicyErrorHolder (org.omg.CORBA.PolicyError initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = org.omg.CORBA.PolicyErrorHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    org.omg.CORBA.PolicyErrorHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return org.omg.CORBA.PolicyErrorHelper.type ();
  }

}
