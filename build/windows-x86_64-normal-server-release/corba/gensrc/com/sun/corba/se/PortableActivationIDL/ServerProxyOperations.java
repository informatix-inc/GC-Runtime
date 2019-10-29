package com.sun.corba.se.PortableActivationIDL;


/**
* com/sun/corba/se/PortableActivationIDL/ServerProxyOperations.java .
* IDL-to-Javaコンパイラ(ポータブル)、バージョン"3.2"によって生成されました
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/com/sun/corba/se/PortableActivationIDL/activation.idlから
* 2019年10月25日 18時05分54秒 JST
*/


/** Server callback interface, passed to Activator in registerServer method.
    */
public interface ServerProxyOperations 
{

  /** Shutdown this server.  Returns after orb.shutdown() completes.
	*/
  void shutdown ();

  /** Install the server.  Returns after the install hook completes
	* execution in the server.
	*/
  void install ();

  /** Uninstall the server.  Returns after the uninstall hook
	* completes execution.
	*/
  void uninstall ();
} // interface ServerProxyOperations
