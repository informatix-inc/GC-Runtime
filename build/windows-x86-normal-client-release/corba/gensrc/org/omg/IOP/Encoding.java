package org.omg.IOP;


/**
* org/omg/IOP/Encoding.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableInterceptor/IOP.idl����
* 2019�N10��25�� 19��20��22�b JST
*/

public final class Encoding implements org.omg.CORBA.portable.IDLEntity
{

  /**
     * The encoding format.
     */
  public short format = (short)0;

  /**
     * The major version of this Encoding format.
     */
  public byte major_version = (byte)0;

  /**
     * The minor version of this Encoding format.
     */
  public byte minor_version = (byte)0;

  public Encoding ()
  {
  } // ctor

  public Encoding (short _format, byte _major_version, byte _minor_version)
  {
    format = _format;
    major_version = _major_version;
    minor_version = _minor_version;
  } // ctor

} // class Encoding
