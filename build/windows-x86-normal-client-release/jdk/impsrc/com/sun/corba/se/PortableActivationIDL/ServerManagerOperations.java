package com.sun.corba.se.PortableActivationIDL;


/**
* com/sun/corba/se/PortableActivationIDL/ServerManagerOperations.java .
* IDL-to-Java�R���p�C��(�|�[�^�u��)�A�o�[�W����"3.2"�ɂ���Đ�������܂���
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/com/sun/corba/se/PortableActivationIDL/activation.idl����
* 2019�N10��25�� 19��20��20�b JST
*/


/** Interface used to combine the Activator and Locator when both are
    * implemented together in the same process, as is currently the case
    * for our implementation.
    */
public interface ServerManagerOperations  extends com.sun.corba.se.PortableActivationIDL.ActivatorOperations, com.sun.corba.se.PortableActivationIDL.LocatorOperations
{
} // interface ServerManagerOperations
