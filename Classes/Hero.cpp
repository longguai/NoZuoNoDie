#include "Hero.h"


bool Hero::init()
{
	CCASSERT(Sprite::init() != false, "hero is null");

	// create animate array
	Vector<SpriteFrame*> sfArray;
	char filename[128];
	memset(filename, 0, 128);
	for (int i=0; i<5; i++)
	{
		sprintf(filename, "hero%d.png", i + 1);
		// get picture name for sprite cache
		SpriteFrame *sf = SpriteFrameCache::getInstance()->spriteFrameByName(filename);
		sfArray.pushBack(sf);
	}
	// create animation
	Animation *ani = Animation::createWithSpriteFrames(sfArray, 0.05f);

	// create animate
	Animate *aniAction = Animate::create(ani);

	// runaction animate
	runAction(RepeatForever::create(aniAction));
	setAnchorPoint(Vec2::ZERO);
	// set position in layer
	setPosition(50, 0);

	return true;
}