//
//  GameLayer.h
//  WeiChPlane
//
//  Created by Eric Wang on 14-6-10.
//
//

#ifndef __WeiChPlane__GameLayer__
#define __WeiChPlane__GameLayer__

#include "cocos2d.h"

using namespace cocos2d;

const int ENEMY1_SCORE = 1000;
const int ENEMY2_SCORE = 6000;
const int ENEMY3_SCORE = 30000;

class GameLayer : public Layer {
    
public:
    GameLayer(void);
    ~GameLayer(void);
    
    CREATE_FUNC(GameLayer);
    
    virtual bool init();
    
    void backgroundMove(float dt);
    
    
//    static Level getCurLevel();
    
private:
    Sprite* background1;
    Sprite* background2;
    
    
    
    
    
    
    
    
    
};






#endif /* defined(__WeiChPlane__GameLayer__) */
