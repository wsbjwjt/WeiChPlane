//
//  WelcomeLayer.cpp
//  WeiChatPlane
//
//  Created by Eric Wang on 14-6-8.
//
//

#include "WelcomeLayer.h"
#include "GameScene.h"

WelcomeLayer::WelcomeLayer(void)
{
    
}

WelcomeLayer::~WelcomeLayer(void)
{
    
}

bool WelcomeLayer::init()
{
    bool bRet = false;
    
    do {
        CC_BREAK_IF(!Layer::init());
        
        SpriteFrameCache::getInstance()->addSpriteFramesWithFile("shoot_background.plist");
        SpriteFrameCache::getInstance()->addSpriteFramesWithFile("shoot.plist");
        
        auto winSize = Director::getInstance()->getWinSize();
        
        auto background = Sprite::createWithSpriteFrameName("background.png");
//        background->setAnchorPoint(Point(winSize.width/2, winSize.height/2));
        background->setPosition(Point(winSize.width/2, winSize.height/2));
        this->addChild(background);
        
        auto copyright = Sprite::createWithSpriteFrameName("shoot_copyright.png");
        copyright->setAnchorPoint(Point::ANCHOR_MIDDLE_BOTTOM);
        copyright->setPosition(Point(winSize.width/2, winSize.height/2));
        this->addChild(copyright);
        
        auto loading = Sprite::createWithSpriteFrameName("game_loading1.png");
        loading->setPosition(Point(winSize.width/2, winSize.height/2-40));
        this->addChild(loading);
        
        
        auto animation = Animation::create();
        animation->setDelayPerUnit(0.2f);
        animation->addSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("game_loading1.png"));
        animation->addSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("game_loading2.png"));
        animation->addSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("game_loading3.png"));
        animation->addSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("game_loading4.png"));
        
        auto animate = Animate::create(animation);
        auto repeat = Repeat::create(animate, 2);
        auto repeatDone = CallFuncN::create(CC_CALLBACK_1(WelcomeLayer::loadingDone, this));
        auto sequence = Sequence::create(repeat, repeatDone, nullptr);
        loading->runAction(sequence);
        
        getHighestHistorySorce();
        
        
        bRet = true;
    } while (0);
    
    return bRet;
}

void WelcomeLayer::loadingDone(Node* pNode)
{
    auto pScene = GameScene::create();
    auto animateScene = TransitionMoveInB::create(0.5f, pScene);
    Director::getInstance()->replaceScene(animateScene);
}

bool WelcomeLayer::isHaveSaveFile()
{
    
    return true;
}

void WelcomeLayer::getHighestHistorySorce()
{
    if (isHaveSaveFile()) {
        
    }
}
