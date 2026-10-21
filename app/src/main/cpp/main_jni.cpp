#include <jni.h>
#include <android/log.h>

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "ULTRAMAN_NATIVE", __VA_ARGS__)

extern "C" JNIEXPORT void JNICALL
Java_com_ultraman_recomp_MainActivity_initNative(JNIEnv* env, jobject obj) {
    LOGI("Ultraman Nexus Engine Started");
}
