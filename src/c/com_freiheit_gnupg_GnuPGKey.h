/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_freiheit_gnupg_GnuPGKey */

#ifndef _Included_com_freiheit_gnupg_GnuPGKey
#define _Included_com_freiheit_gnupg_GnuPGKey
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeGetKey
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeGetKey
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeKeyUnref
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeKeyUnref
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeGetName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeGetName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeGetEmail
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeGetEmail
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeGetKeyID
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeGetKeyID
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeGetFingerprint
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeGetFingerprint
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeGetComment
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeGetComment
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeGetUserID
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeGetUserID
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_freiheit_gnupg_GnuPGKey
 * Method:    gpgmeGetSignature
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_freiheit_gnupg_GnuPGKey_gpgmeGetSignature
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
