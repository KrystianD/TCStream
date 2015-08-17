/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class TCStream */

#ifndef _Included_TCStream
#define _Included_TCStream
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     TCStream
 * Method:    run
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_TCStream_run
  (JNIEnv *, jobject);

/*
 * Class:     TCStream
 * Method:    beginPacket
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_TCStream_beginPacket
  (JNIEnv *, jobject);

/*
 * Class:     TCStream
 * Method:    write
 * Signature: (Ljava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_TCStream_write
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     TCStream
 * Method:    endPacket
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_TCStream_endPacket
  (JNIEnv *, jobject);

/*
 * Class:     TCStream
 * Method:    read
 * Signature: (Ljava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_TCStream_read
  (JNIEnv *, jobject, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
