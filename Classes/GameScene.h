//
//  GameScene.h
//  WeiChPlane
//
//  Created by Eric Wang on 14-6-10.
//
//

#ifndef __WeiChPlane__GameScene__
#define __WeiChPlane__GameScene__

#include "cocos2d.h"
#include "GameLayer.h"

using namespace cocos2d;

class GameScene : public Scene {
    
public:
    GameScene(void);
    ~GameScene(void);
    
    CREATE_FUNC(GameScene);
    
    virtual bool init();
    
    GameLayer* _gameLayer;
};






#endif /* defined(__WeiChPlane__GameScene__) */
