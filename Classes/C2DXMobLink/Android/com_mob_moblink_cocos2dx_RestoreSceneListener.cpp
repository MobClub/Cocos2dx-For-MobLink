#include <jni.h>
#include "jni/JniHelper.h"
#include "com_mob_moblink_cocos2dx_RestoreSceneListener.h"
#include "C2DXAndroidRestoreSceneListener.h"
#include "C2DXAndroidMobLink.h"

USING_NS_CC;
/*
 * Class:     com_mob_moblink_cocos2dx_RestoreSceneListener
 * Method:    nativeOnCreateCxxObject
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mob_moblink_cocos2dx_RestoreSceneListener_nativeOnCreateCxxObject
  (JNIEnv *env, jobject jthiz)
{
    C2DXAndroidRestoreSceneListener* listener = new C2DXAndroidRestoreSceneListener();
    return (jint)listener;
}

/*
 * Class:     com_mob_moblink_cocos2dx_RestoreSceneListener
 * Method:    nativeOnReturnSceneData
 * Signature: (Lcom/mob/moblink/Scene;)I
 */
JNIEXPORT jint JNICALL Java_com_mob_moblink_cocos2dx_RestoreSceneListener_nativeOnReturnSceneData
  (JNIEnv *env, jobject jthiz, jobject jvalue)
{
    C2DXAndroidRestoreSceneListener* listener = (C2DXAndroidRestoreSceneListener*)getCxxObject(env, jthiz);
    listener->onReturnSceneData(env, jvalue);
    return 0;
}

/*
 * Class:     com_mob_moblink_cocos2dx_RestoreSceneListener
 * Method:    nativeOnDestoryCxxObject
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mob_moblink_cocos2dx_RestoreSceneListener_nativeOnDestoryCxxObject
  (JNIEnv *env, jobject jthiz)
{
    C2DXAndroidRestoreSceneListener* listener = (C2DXAndroidRestoreSceneListener*)getCxxObject(env, jthiz);
    delete listener;
}
