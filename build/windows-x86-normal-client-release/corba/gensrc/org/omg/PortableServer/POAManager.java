package org.omg.PortableServer;


/**
* org/omg/PortableServer/POAManager.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableServer/poa.idl����
* 2019�N10��25�� 19��20��24�b JST
*/


/**
	 * Each POA object has an associated POAManager object. 
	 * A POA manager may be associated with one or more 
	 * POA objects. A POA manager encapsulates the processing 
	 * state of the POAs it is associated with.
	 */
public interface POAManager extends POAManagerOperations, org.omg.CORBA.Object, org.omg.CORBA.portable.IDLEntity 
{
} // interface POAManager
