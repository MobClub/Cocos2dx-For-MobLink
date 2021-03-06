//
//  C2DXMobLink.hpp
//  Cocos2DXForMobLink
//
//  Created by 陈剑东 on 2017/5/4.
//
//

#ifndef __C2DXMobLinkSample__C2DXMobLink__
#define __C2DXMobLinkSample__C2DXMobLink__

#include "cocos2d.h"
#include "C2DXMobLinkScene.h"
#include "C2DXMobLinkCallBack.h"

USING_NS_CC;

namespace mob
{
    namespace moblink
    {
        class C2DXMobLink
        {
        public:
        
            /**
             *  获取mobid
             *
             *  @param scene 场景对象
             */
            static void getMobId(C2DXMobLinkScene *scene, C2DXGetMobIdResultEvent callback);
        
            /**
             *  设置场景还原的回调函数
             *
             *  @param callback 回调对象
             */
            static void setSceneRestoreCallBack(C2DXRestoreSceneResultEvent callback);
        };
        
    }
}

#endif
