#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_cetc15_datatransfer_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from wtf";
    return env->NewStringUTF(hello.c_str());
}
