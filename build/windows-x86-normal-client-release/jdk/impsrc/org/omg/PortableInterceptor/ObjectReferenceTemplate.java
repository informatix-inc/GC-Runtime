package org.omg.PortableInterceptor;


/**
* org/omg/PortableInterceptor/ObjectReferenceTemplate.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/Interceptors.idl����
* 2019�N10��25�� 19��20��23�b JST
*/


/** The object reference template.  An instance of this must
   * exist for each object adapter created in an ORB.  The server_id,
   * orb_id, and adapter_name attributes uniquely identify this template
   * within the scope of an IMR.  Note that adapter_id is similarly unique
   * within the same scope, but it is opaque, and less useful in many
   * cases.
   */
public interface ObjectReferenceTemplate extends org.omg.PortableInterceptor.ObjectReferenceFactory
{
  public abstract String server_id ();

  public abstract String orb_id ();

  public abstract String[] adapter_name ();

} // interface ObjectReferenceTemplate
