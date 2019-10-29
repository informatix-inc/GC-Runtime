/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_security_pkcs11_wrapper_PKCS11 */

#ifndef _Included_sun_security_pkcs11_wrapper_PKCS11
#define _Included_sun_security_pkcs11_wrapper_PKCS11
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    initializeLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_initializeLibrary
  (JNIEnv *, jclass);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    finalizeLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_finalizeLibrary
  (JNIEnv *, jclass);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    connect
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_connect
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    disconnect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_disconnect
  (JNIEnv *, jobject);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_Initialize
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1Initialize
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_Finalize
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1Finalize
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetInfo
 * Signature: ()Lsun/security/pkcs11/wrapper/CK_INFO;
 */
JNIEXPORT jobject JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetInfo
  (JNIEnv *, jobject);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetSlotList
 * Signature: (Z)[J
 */
JNIEXPORT jlongArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetSlotList
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetSlotInfo
 * Signature: (J)Lsun/security/pkcs11/wrapper/CK_SLOT_INFO;
 */
JNIEXPORT jobject JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetSlotInfo
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetTokenInfo
 * Signature: (J)Lsun/security/pkcs11/wrapper/CK_TOKEN_INFO;
 */
JNIEXPORT jobject JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetTokenInfo
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetMechanismList
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetMechanismList
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetMechanismInfo
 * Signature: (JJ)Lsun/security/pkcs11/wrapper/CK_MECHANISM_INFO;
 */
JNIEXPORT jobject JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetMechanismInfo
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_OpenSession
 * Signature: (JJLjava/lang/Object;Lsun/security/pkcs11/wrapper/CK_NOTIFY;)J
 */
JNIEXPORT jlong JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1OpenSession
  (JNIEnv *, jobject, jlong, jlong, jobject, jobject);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_CloseSession
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1CloseSession
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetSessionInfo
 * Signature: (J)Lsun/security/pkcs11/wrapper/CK_SESSION_INFO;
 */
JNIEXPORT jobject JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetSessionInfo
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetOperationState
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetOperationState
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_SetOperationState
 * Signature: (J[BJJ)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1SetOperationState
  (JNIEnv *, jobject, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_Login
 * Signature: (JJ[C)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1Login
  (JNIEnv *, jobject, jlong, jlong, jcharArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_Logout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1Logout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_CreateObject
 * Signature: (J[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)J
 */
JNIEXPORT jlong JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1CreateObject
  (JNIEnv *, jobject, jlong, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_CopyObject
 * Signature: (JJ[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)J
 */
JNIEXPORT jlong JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1CopyObject
  (JNIEnv *, jobject, jlong, jlong, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DestroyObject
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DestroyObject
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GetAttributeValue
 * Signature: (JJ[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GetAttributeValue
  (JNIEnv *, jobject, jlong, jlong, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_SetAttributeValue
 * Signature: (JJ[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1SetAttributeValue
  (JNIEnv *, jobject, jlong, jlong, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_FindObjectsInit
 * Signature: (J[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1FindObjectsInit
  (JNIEnv *, jobject, jlong, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_FindObjects
 * Signature: (JJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1FindObjects
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_FindObjectsFinal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1FindObjectsFinal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_EncryptInit
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1EncryptInit
  (JNIEnv *, jobject, jlong, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_Encrypt
 * Signature: (J[BII[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1Encrypt
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_EncryptUpdate
 * Signature: (JJ[BIIJ[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1EncryptUpdate
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jlong, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_EncryptFinal
 * Signature: (JJ[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1EncryptFinal
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DecryptInit
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DecryptInit
  (JNIEnv *, jobject, jlong, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_Decrypt
 * Signature: (J[BII[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1Decrypt
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DecryptUpdate
 * Signature: (JJ[BIIJ[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DecryptUpdate
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jlong, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DecryptFinal
 * Signature: (JJ[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DecryptFinal
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DigestInit
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DigestInit
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DigestSingle
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;[BII[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DigestSingle
  (JNIEnv *, jobject, jlong, jobject, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DigestUpdate
 * Signature: (JJ[BII)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DigestUpdate
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DigestKey
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DigestKey
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DigestFinal
 * Signature: (J[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DigestFinal
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_SignInit
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1SignInit
  (JNIEnv *, jobject, jlong, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_Sign
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1Sign
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_SignUpdate
 * Signature: (JJ[BII)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1SignUpdate
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_SignFinal
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1SignFinal
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_SignRecoverInit
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1SignRecoverInit
  (JNIEnv *, jobject, jlong, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_SignRecover
 * Signature: (J[BII[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1SignRecover
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_VerifyInit
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1VerifyInit
  (JNIEnv *, jobject, jlong, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_Verify
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1Verify
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_VerifyUpdate
 * Signature: (JJ[BII)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1VerifyUpdate
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_VerifyFinal
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1VerifyFinal
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_VerifyRecoverInit
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;J)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1VerifyRecoverInit
  (JNIEnv *, jobject, jlong, jobject, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_VerifyRecover
 * Signature: (J[BII[BII)I
 */
JNIEXPORT jint JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1VerifyRecover
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    getNativeKeyInfo
 * Signature: (JJJLsun/security/pkcs11/wrapper/CK_MECHANISM;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_getNativeKeyInfo
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    createNativeKey
 * Signature: (J[BJLsun/security/pkcs11/wrapper/CK_MECHANISM;)J
 */
JNIEXPORT jlong JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_createNativeKey
  (JNIEnv *, jobject, jlong, jbyteArray, jlong, jobject);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GenerateKey
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)J
 */
JNIEXPORT jlong JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GenerateKey
  (JNIEnv *, jobject, jlong, jobject, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GenerateKeyPair
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)[J
 */
JNIEXPORT jlongArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GenerateKeyPair
  (JNIEnv *, jobject, jlong, jobject, jobjectArray, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_WrapKey
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;JJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1WrapKey
  (JNIEnv *, jobject, jlong, jobject, jlong, jlong);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_UnwrapKey
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;J[B[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)J
 */
JNIEXPORT jlong JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1UnwrapKey
  (JNIEnv *, jobject, jlong, jobject, jlong, jbyteArray, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_DeriveKey
 * Signature: (JLsun/security/pkcs11/wrapper/CK_MECHANISM;J[Lsun/security/pkcs11/wrapper/CK_ATTRIBUTE;)J
 */
JNIEXPORT jlong JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1DeriveKey
  (JNIEnv *, jobject, jlong, jobject, jlong, jobjectArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_SeedRandom
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1SeedRandom
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     sun_security_pkcs11_wrapper_PKCS11
 * Method:    C_GenerateRandom
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_sun_security_pkcs11_wrapper_PKCS11_C_1GenerateRandom
  (JNIEnv *, jobject, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif