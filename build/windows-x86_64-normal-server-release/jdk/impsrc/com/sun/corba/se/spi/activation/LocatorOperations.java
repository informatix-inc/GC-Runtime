package com.sun.corba.se.spi.activation;


/**
* com/sun/corba/se/spi/activation/LocatorOperations.java .
* IDL-to-Javaコンパイラ(ポータブル)、バージョン"3.2"によって生成されました
* c:/cygwin64/home/fujimoto/openjdk-jdk8u/corba/src/share/classes/com/sun/corba/se/spi/activation/activation.idlから
* 2019年10月25日 18時05分54秒 JST
*/

public interface LocatorOperations 
{

  // Starts the server if it is not already running.
  com.sun.corba.se.spi.activation.LocatorPackage.ServerLocation locateServer (int serverId, String endPoint) throws com.sun.corba.se.spi.activation.NoSuchEndPoint, com.sun.corba.se.spi.activation.ServerNotRegistered, com.sun.corba.se.spi.activation.ServerHeldDown;

  // Starts the server if it is not already running.
  com.sun.corba.se.spi.activation.LocatorPackage.ServerLocationPerORB locateServerForORB (int serverId, String orbId) throws com.sun.corba.se.spi.activation.InvalidORBid, com.sun.corba.se.spi.activation.ServerNotRegistered, com.sun.corba.se.spi.activation.ServerHeldDown;

  // get the port for the endpoint of the locator
  int getEndpoint (String endPointType) throws com.sun.corba.se.spi.activation.NoSuchEndPoint;

  // to pick a particular port type.
  int getServerPortForType (com.sun.corba.se.spi.activation.LocatorPackage.ServerLocationPerORB location, String endPointType) throws com.sun.corba.se.spi.activation.NoSuchEndPoint;
} // interface LocatorOperations
