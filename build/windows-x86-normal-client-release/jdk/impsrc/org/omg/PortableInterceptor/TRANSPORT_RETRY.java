package org.omg.PortableInterceptor;


/**
* org/omg/PortableInterceptor/TRANSPORT_RETRY.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/Interceptors.idl����
* 2019�N10��25�� 19��20��23�b JST
*/

public interface TRANSPORT_RETRY
{

  /**
   * Indicates a Transport Retry reply status. One possible value for 
   * <code>RequestInfo.reply_status</code>.
   * @see RequestInfo#reply_status
   * @see SUCCESSFUL
   * @see SYSTEM_EXCEPTION
   * @see USER_EXCEPTION
   * @see LOCATION_FORWARD
   */
  public static final short value = (short)(4);
}
