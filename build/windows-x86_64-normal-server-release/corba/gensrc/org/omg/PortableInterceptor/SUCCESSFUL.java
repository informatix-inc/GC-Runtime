package org.omg.PortableInterceptor;


/**
* org/omg/PortableInterceptor/SUCCESSFUL.java .
* IDL-to-Javaコンパイラ(ポータブル)、バージョン"3.2"によって生成されました
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/Interceptors.idlから
* 2019年10月25日 18時05分57秒 JST
*/

public interface SUCCESSFUL
{

  /**
   * Indicates a successful Reply Status. One possible value for 
   * <code>RequestInfo.reply_status</code>.
   * @see RequestInfo#reply_status
   * @see SYSTEM_EXCEPTION
   * @see USER_EXCEPTION
   * @see LOCATION_FORWARD
   * @see TRANSPORT_RETRY
   */
  public static final short value = (short)(0);
}
