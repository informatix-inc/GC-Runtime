/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_nio_ch_WindowsAsynchronousSocketChannelImpl */

#ifndef _Included_sun_nio_ch_WindowsAsynchronousSocketChannelImpl
#define _Included_sun_nio_ch_WindowsAsynchronousSocketChannelImpl
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_nio_ch_WindowsAsynchronousSocketChannelImpl_ST_UNINITIALIZED
#define sun_nio_ch_WindowsAsynchronousSocketChannelImpl_ST_UNINITIALIZED -1L
#undef sun_nio_ch_WindowsAsynchronousSocketChannelImpl_ST_UNCONNECTED
#define sun_nio_ch_WindowsAsynchronousSocketChannelImpl_ST_UNCONNECTED 0L
#undef sun_nio_ch_WindowsAsynchronousSocketChannelImpl_ST_PENDING
#define sun_nio_ch_WindowsAsynchronousSocketChannelImpl_ST_PENDING 1L
#undef sun_nio_ch_WindowsAsynchronousSocketChannelImpl_ST_CONNECTED
#define sun_nio_ch_WindowsAsynchronousSocketChannelImpl_ST_CONNECTED 2L
#undef sun_nio_ch_WindowsAsynchronousSocketChannelImpl_OFFSETOF_LEN
#define sun_nio_ch_WindowsAsynchronousSocketChannelImpl_OFFSETOF_LEN 0L
#undef sun_nio_ch_WindowsAsynchronousSocketChannelImpl_MAX_WSABUF
#define sun_nio_ch_WindowsAsynchronousSocketChannelImpl_MAX_WSABUF 16L
/*
 * Class:     sun_nio_ch_WindowsAsynchronousSocketChannelImpl
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_nio_ch_WindowsAsynchronousSocketChannelImpl_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousSocketChannelImpl
 * Method:    connect0
 * Signature: (JZLjava/net/InetAddress;IJ)I
 */
JNIEXPORT jint JNICALL Java_sun_nio_ch_WindowsAsynchronousSocketChannelImpl_connect0
  (JNIEnv *, jclass, jlong, jboolean, jobject, jint, jlong);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousSocketChannelImpl
 * Method:    updateConnectContext
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_nio_ch_WindowsAsynchronousSocketChannelImpl_updateConnectContext
  (JNIEnv *, jclass, jlong);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousSocketChannelImpl
 * Method:    read0
 * Signature: (JIJJ)I
 */
JNIEXPORT jint JNICALL Java_sun_nio_ch_WindowsAsynchronousSocketChannelImpl_read0
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousSocketChannelImpl
 * Method:    write0
 * Signature: (JIJJ)I
 */
JNIEXPORT jint JNICALL Java_sun_nio_ch_WindowsAsynchronousSocketChannelImpl_write0
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousSocketChannelImpl
 * Method:    shutdown0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_sun_nio_ch_WindowsAsynchronousSocketChannelImpl_shutdown0
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousSocketChannelImpl
 * Method:    closesocket0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_nio_ch_WindowsAsynchronousSocketChannelImpl_closesocket0
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif