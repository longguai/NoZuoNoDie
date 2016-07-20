#ifndef __MYBLOCK_H__
#define __MYBLOCK_H__
#include "cocos2d.h"

class Block : public cocos2d::Sprite
{
public:
	CREATE_FUNC(Block);
	bool init();
	virtual void update(float delta);
};
#endif // __MYBLOCK_H__