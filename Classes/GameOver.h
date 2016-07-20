#ifndef __GAMEOVER_H__
#define __GAMEOVER_H__
#include "cocos2d.h"

class GameOver : public cocos2d::LayerColor
{
public:
	CREATE_FUNC(GameOver);
	bool init();
	static cocos2d::Scene *scene();
};
#endif // __GAMEOVER_H__