/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_awt_windows_WCheckboxPeer */

#ifndef _Included_sun_awt_windows_WCheckboxPeer
#define _Included_sun_awt_windows_WCheckboxPeer
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_awt_windows_WCheckboxPeer_BANDING_DIVISOR
#define sun_awt_windows_WCheckboxPeer_BANDING_DIVISOR 4.0
/*
 * Class:     sun_awt_windows_WCheckboxPeer
 * Method:    setState
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WCheckboxPeer_setState
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_awt_windows_WCheckboxPeer
 * Method:    setCheckboxGroup
 * Signature: (Ljava/awt/CheckboxGroup;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WCheckboxPeer_setCheckboxGroup
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sun_awt_windows_WCheckboxPeer
 * Method:    setLabel
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WCheckboxPeer_setLabel
  (JNIEnv *, jobject, jstring);

/*
 * Class:     sun_awt_windows_WCheckboxPeer
 * Method:    getCheckMarkSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WCheckboxPeer_getCheckMarkSize
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_windows_WCheckboxPeer
 * Method:    create
 * Signature: (Lsun/awt/windows/WComponentPeer;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WCheckboxPeer_create
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif