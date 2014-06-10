//
//  WelcomeScene.h
//  WeiChatPlane
//
//  Created by Eric Wang on 14-6-8.
//
//

#ifndef WeiChatPlane_WelcomeScene_h
#define WeiChatPlane_WelcomeScene_h

#pragma once
#include "cocos2d.h"
#include "WelcomeLayer.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;


class WelcomeScene : public Scene
{
public:
    WelcomeScene(void);
    ~WelcomeScene(void);
    
    virtual bool init();
    CREATE_FUNC(WelcomeScene);
    
    void PreloadMusic();
    
public:
    WelcomeLayer* _welcomeLayer;
    
};


#endif