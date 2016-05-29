#include "runningNative.h"


 jint Java_org_apache_cordova_SDKvsJDK_NativeCall_running(JNIEnv * env, jobject thiz, jint value){

    jint sum = 0;
    
    for(jint i = 0; i < value; i++){
        sum = sum + i;
    }


    return sum;
}

