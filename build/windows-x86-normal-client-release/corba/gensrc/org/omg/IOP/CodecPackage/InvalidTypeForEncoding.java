package org.omg.IOP.CodecPackage;


/**
* org/omg/IOP/CodecPackage/InvalidTypeForEncoding.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/IOP.idl����
* 2019�N10��25�� 19��20��22�b JST
*/

public final class InvalidTypeForEncoding extends org.omg.CORBA.UserException
{

  public InvalidTypeForEncoding ()
  {
    super(InvalidTypeForEncodingHelper.id());
  } // ctor


  public InvalidTypeForEncoding (String $reason)
  {
    super(InvalidTypeForEncodingHelper.id() + "  " + $reason);
  } // ctor

} // class InvalidTypeForEncoding
