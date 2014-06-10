//
//  WelcomeScene.cpp
//  WeiChatPlane
//
//  Created by Eric Wang on 14-6-8.
//
//

#include "WelcomeScene.h"


WelcomeScene::WelcomeScene(void)
{
    _welcomeLayer = nullptr;
}
WelcomeScene::~WelcomeScene(void)
{
    
}

bool WelcomeScene::init()
{
    bool bRet = false;
    
    do {
        CC_BREAK_IF(!Scene::init());
        
        _welcomeLayer = WelcomeLayer::create();
        
        CC_BREAK_IF(!_welcomeLayer);
        this->addChild(_welcomeLayer);
        
        PreloadMusic();
        
        bRet = true;
        
    } while (0);
    
    return bRet;
}


void WelcomeScene::PreloadMusic()
{
    CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic("game_music.mp3");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}