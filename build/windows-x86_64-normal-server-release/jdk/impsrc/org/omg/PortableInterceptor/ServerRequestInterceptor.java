package org.omg.PortableInterceptor;


/**
* org/omg/PortableInterceptor/ServerRequestInterceptor.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/Interceptors.idl����
* 2019�N10��25�� 18��05��57�b JST
*/


/**
   * Server-side request interceptor.
   * <p>
   * A request Interceptor is designed to intercept the flow of a 
   * request/reply sequence through the ORB at specific points so that 
   * services can query the request information and manipulate the service 
   * contexts which are propagated between clients and servers. The primary 
   * use of request Interceptors is to enable ORB services to transfer 
   * context information between clients and servers. There are two types 
   * of request Interceptors: client-side and server-side. 
   * <p>
   * To write a server-side Interceptor, implement the 
   * ServerRequestInterceptor interface.
   *
   * @see ServerRequestInfo
   */
public interface ServerRequestInterceptor extends ServerRequestInterceptorOperations, org.omg.PortableInterceptor.Interceptor, org.omg.CORBA.portable.IDLEntity 
{
} // interface ServerRequestInterceptor
