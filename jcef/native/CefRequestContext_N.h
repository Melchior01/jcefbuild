/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_browser_CefRequestContext_N */

#ifndef _Included_org_cef_browser_CefRequestContext_N
#define _Included_org_cef_browser_CefRequestContext_N
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_browser_CefRequestContext_N
 * Method:    N_GetGlobalContext
 * Signature: ()Lorg/cef/browser/CefRequestContext_N;
 */
JNIEXPORT jobject JNICALL
Java_org_cef_browser_CefRequestContext_1N_N_1GetGlobalContext(JNIEnv*, jclass);

/*
 * Class:     org_cef_browser_CefRequestContext_N
 * Method:    N_CreateContext
 * Signature:
 * (Lorg/cef/handler/CefRequestContextHandler;)Lorg/cef/browser/CefRequestContext_N;
 */
JNIEXPORT jobject JNICALL
Java_org_cef_browser_CefRequestContext_1N_N_1CreateContext(JNIEnv*,
                                                           jclass,
                                                           jobject);

/*
 * Class:     org_cef_browser_CefRequestContext_N
 * Method:    N_IsGlobal
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_org_cef_browser_CefRequestContext_1N_N_1IsGlobal(JNIEnv*, jobject);

/*
 * Class:     org_cef_browser_CefRequestContext_N
 * Method:    N_CefRequestContext_DTOR
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_browser_CefRequestContext_1N_N_1CefRequestContext_1DTOR(JNIEnv*,
                                                                     jobject);

#ifdef __cplusplus
}
#endif
#endif
