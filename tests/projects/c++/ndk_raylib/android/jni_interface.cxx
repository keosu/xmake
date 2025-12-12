
#include <jni.h>

extern "C" int main();


extern "C" JNIEXPORT void JNICALL
Java_com_raylib_demo_NativeLoader_main(JNIEnv *env, jclass clazz) {
  main();
}
