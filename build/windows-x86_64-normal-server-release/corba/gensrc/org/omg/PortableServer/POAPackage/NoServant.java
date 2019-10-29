package org.omg.PortableServer.POAPackage;


/**
* org/omg/PortableServer/POAPackage/NoServant.java .
* IDL-to-Javaコンパイラ(ポータブル)、バージョン"3.2"によって生成されました
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/org/omg/PortableServer/poa.idlから
* 2019年10月25日 18時05分59秒 JST
*/

public final class NoServant extends org.omg.CORBA.UserException
{

  public NoServant ()
  {
    super(NoServantHelper.id());
  } // ctor


  public NoServant (String $reason)
  {
    super(NoServantHelper.id() + "  " + $reason);
  } // ctor

} // class NoServant
