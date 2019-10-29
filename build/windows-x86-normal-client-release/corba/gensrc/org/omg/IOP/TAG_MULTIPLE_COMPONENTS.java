package org.omg.IOP;


/**
* org/omg/IOP/TAG_MULTIPLE_COMPONENTS.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/IOP.idl����
* 2019�N10��25�� 19��20��22�b JST
*/

public interface TAG_MULTIPLE_COMPONENTS
{

  /** 
     * Indicates that the value encapsulated is of type 
     * <code>MultipleComponentProfile</code>. In this case, the profile 
     * consists of a list of protocol components, the use of which must 
     * be specified by the protocol using this profile. This profile may 
     * be used to carry IOR components.  
     * <p>
     * The <code>profile_data</code> for the 
     * <code>TAG_MULTIPLE_COMPONENTS</code> profile is a CDR encapsulation 
     * of the <code>MultipleComponentProfile</code> type shown above.
     */
  public static final int value = (int)(1L);
}
