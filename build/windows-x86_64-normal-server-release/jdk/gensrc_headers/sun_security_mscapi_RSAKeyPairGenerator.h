/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_security_mscapi_RSAKeyPairGenerator */

#ifndef _Included_sun_security_mscapi_RSAKeyPairGenerator
#define _Included_sun_security_mscapi_RSAKeyPairGenerator
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_security_mscapi_RSAKeyPairGenerator_KEY_SIZE_MIN
#define sun_security_mscapi_RSAKeyPairGenerator_KEY_SIZE_MIN 512L
#undef sun_security_mscapi_RSAKeyPairGenerator_KEY_SIZE_MAX
#define sun_security_mscapi_RSAKeyPairGenerator_KEY_SIZE_MAX 16384L
/*
 * Class:     sun_security_mscapi_RSAKeyPairGenerator
 * Method:    generateRSAKeyPair
 * Signature: (ILjava/lang/String;)Lsun/security/mscapi/RSAKeyPair;
 */
JNIEXPORT jobject JNICALL Java_sun_security_mscapi_RSAKeyPairGenerator_generateRSAKeyPair
  (JNIEnv *, jclass, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif