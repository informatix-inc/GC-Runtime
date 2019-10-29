package org.omg.IOP;


/**
* org/omg/IOP/ExceptionDetailMessage.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/IOP.idl����
* 2019�N10��25�� 18��05��57�b JST
*/

public interface ExceptionDetailMessage
{

  /**
     * CORBA formal/02-06-01: 13.7.1:
     * ExceptionDetailMessage identifies a CDR encapsulation of a wstring,
     * encoded using GIOP 1.2 with a TCS-W of UTF-16.  This service context
     * may be sent on Reply messages with a reply_status of SYSTEM_EXCEPTION
     * or USER_EXCEPTION. The usage of this service context is defined
     * by language mappings. <br/> <br/>
     *
     * IDL/Java: ptc/02-01-22: 1.15.2: 
     * When a System Exception is marshaled, its GIOP Reply message shall
     * include an associated ExceptionDetailMessage service context. The
     * callee's stack trace is often very valuable debugging information but
     * may contain sensitive or unwanted information. The wstring within the
     * service context will therefore contain additional information relating
     * to the exception, for example the result of calling either
     * printStackTrace(PrintWriter) or getMessage() on the exception. When
     * unmarshaling a System Exception on the client side, the wstring from
     * any ExceptionDetailMessage service context shall become the Java error
     * message in the unmarshaled exception object.
     */
  public static final int value = (int)(14L);
}
