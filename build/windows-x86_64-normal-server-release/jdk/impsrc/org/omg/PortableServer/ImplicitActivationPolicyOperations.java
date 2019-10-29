package org.omg.PortableServer;


/**
* org/omg/PortableServer/ImplicitActivationPolicyOperations.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableServer/poa.idl����
* 2019�N10��25�� 18��05��59�b JST
*/


/**
	 * This policy specifies whether implicit activation 
	 * of servants is supported in the created POA.
	 */
public interface ImplicitActivationPolicyOperations  extends org.omg.CORBA.PolicyOperations
{

  /**
	 * specifies the policy value
	 */
  org.omg.PortableServer.ImplicitActivationPolicyValue value ();
} // interface ImplicitActivationPolicyOperations
