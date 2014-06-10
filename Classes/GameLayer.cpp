//
//  GameLayer.cpp
//  WeiChPlane
//
//  Created by Eric Wang on 14-6-10.
//
//

#include "GameLayer.h"


GameLayer::GameLayer(void)
{
    background1 = nullptr;
    background2 = nullptr;
}

GameLayer::~GameLayer(void)
{
    
}


bool GameLayer::init()
{
    bool bRet = false;
    
    do {
        CC_BREAK_IF(!Layer::init());
        
        if (!CocosDenshion::SimpleAudioEngine::getInstance()->isBackgroundMusicPlaying()) {
            CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic("game_music.mp3",true);
        }
        
        background1 = Sprite::createWithSpriteFrameName("background.png");
        background1->setAnchorPoint(Point::ZERO);
        background1->setPosition(Point::ZERO);
        background1->getTexture()->setAliasTexParameters();
        this->addChild(background1);
        
        background2 = Sprite::createWithSpriteFrameName("background.png");
        background2->setAnchorPoint(Point::ZERO);
        background2->setPosition(Point(0, background2->getContentSize().height-2));
        background2->getTexture()->setAliasTexParameters();
        this->addChild(background2);
        
        
        this->schedule(schedule_selector(GameLayer::backgroundMove), 0.01f);
        
        this->scheduleUpdate();
        
        
        bRet = true;
        
        
        
        
        
        
    } while (0);
    return bRet;
}

void GameLayer::backgroundMove(float dt)
{
    background1->setPositionY(int(background1->getPositionY()-2));
    background2->setPositionY(int(background1->getPositionY()) + int(background1->getContentSize().height)-2);
    if (background2->getPositionY() == 0) {
        background1->setPositionY(0);
    }
    
    
    
    
    
    
    
    
    
    
    
}