#ifndef __GAMESCENE_H__
#define __GAMESCENE_H__
#include "cocos2d.h"
USING_NS_CC;

class GameScene:public LayerColor
{
public:
	static Scene* createScene();
	CREATE_FUNC(GameScene);
	bool init();

	virtual void update(float delta);
	void resetFrameCount();
	Sprite *_pHero;

private:
	// use rand create block delay
	int currentFrameIndex;
	int nextFrameCount;

};


#endif // __GAMESCENE_H__