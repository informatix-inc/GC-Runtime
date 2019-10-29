package org.omg.CosNaming;


/**
* org/omg/CosNaming/NamingContext.java .
* IDL-to-Javaコンパイラ(ポータブル)、バージョン"3.2"によって生成されました
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/CosNaming/nameservice.idlから
* 2019年10月25日 19時20分19秒 JST
*/


/** 
 * A naming context is an object that contains a set of name bindings in 
 * which each name is unique. Different names can be bound to an object 
 * in the same or different contexts at the same time. <p>
 * 
 * See <a href="http://www.omg.org/technology/documents/formal/naming_service.htm">
 * CORBA COS 
 * Naming Specification.</a>
 */
public interface NamingContext extends NamingContextOperations, org.omg.CORBA.Object, org.omg.CORBA.portable.IDLEntity 
{
} // interface NamingContext
