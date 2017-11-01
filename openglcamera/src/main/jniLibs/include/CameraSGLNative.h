/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sen_com_openglcamera_natives_CameraSGLNative */

#ifndef _Included_sen_com_openglcamera_natives_CameraSGLNative
#define _Included_sen_com_openglcamera_natives_CameraSGLNative




#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     sen_com_openglcamera_natives_CameraSGLNative
 * Method:    initAssetManager
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sen_com_openglcamera_natives_CameraSGLNative_initAssetManager
  (JNIEnv *, jclass,jobject );

/*
 * Class:     sen_com_openglcamera_natives_CameraSGLNative
 * Method:    onSurfaceCreated
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sen_com_openglcamera_natives_CameraSGLNative_onSurfaceCreated
  (JNIEnv *, jclass);

/*
 * Class:     sen_com_openglcamera_natives_CameraSGLNative
 * Method:    onSurfaceChanged
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_sen_com_openglcamera_natives_CameraSGLNative_onSurfaceChanged
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     sen_com_openglcamera_natives_CameraSGLNative
 * Method:    onDrawFrame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sen_com_openglcamera_natives_CameraSGLNative_onDrawFrame
  (JNIEnv *, jclass);

/*
 * Class:     sen_com_openglcamera_natives_CameraSGLNative
 * Method:    getSurfaceTexture
 * Signature: ()V
 */
JNIEXPORT jobject JNICALL Java_sen_com_openglcamera_natives_CameraSGLNative_getSurfaceTexture
  (JNIEnv *, jclass);


JNIEXPORT void JNICALL Java_sen_com_openglcamera_natives_CameraSGLNative_onChangeFileter(JNIEnv * , jclass , jint ,jint,jint,jint,jint) ;



JNIEXPORT void JNICALL
Java_sen_com_openglcamera_natives_CameraSGLNative_onChangeVSFS(JNIEnv *, jclass ,
                                                               jstring , jstring );



JNIEXPORT void JNICALL
Java_sen_com_openglcamera_natives_CameraSGLNative_releaseNative(JNIEnv *, jclass );

JNIEXPORT void JNICALL
Java_sen_com_openglcamera_natives_CameraSGLNative_onChangeShape(JNIEnv *, jclass , jint,jint );





JNIEXPORT void JNICALL
Java_sen_com_openglcamera_natives_CameraSGLNative_onChangeBgColor(JNIEnv *, jclass,
                                                                  jfloat, jfloat, jfloat,
                                                                  jfloat);

JNIEXPORT void JNICALL
Java_sen_com_openglcamera_natives_CameraSGLNative_onChangeShapeSize(JNIEnv *, jclass ,jint, jint ) ;



JNIEXPORT void JNICALL
Java_sen_com_openglcamera_natives_CameraSGLNative_onChangeShapeCount(JNIEnv *, jclass , jint );
#ifdef __cplusplus
}
#endif
#endif
